#include "BlockingComponent.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/Character.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"

UBlockingComponent::UBlockingComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UBlockingComponent::BeginPlay()
{
	Super::BeginPlay();
}

void UBlockingComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (bInCounterWindow)
	{
		UpdateCounterWindow(DeltaTime);
	}

	if (bBlockingJustStarted)
	{
		bBlockingJustStarted = false;
	}

	#if WITH_EDITOR
	if (bIsBlocking)
	{
		AActor* Owner = GetOwner();
		if (Owner)
		{
			FVector OwnerLocation = Owner->GetActorLocation();
			FVector ForwardVector = Owner->GetActorForwardVector();
			FVector RightVector = Owner->GetActorRightVector();

			FColor DebugColor = FColor::Blue;
			FVector BlockOffset = FVector::ZeroVector;

			switch (CurrentBlockDirection)
			{
				case EBlockDirection::Left:
					BlockOffset = -RightVector * 75.0f;
					DebugColor = FColor::Cyan;
					break;
				case EBlockDirection::Right:
					BlockOffset = RightVector * 75.0f;
					DebugColor = FColor::Magenta;
					break;
				case EBlockDirection::Center:
					BlockOffset = FVector::ZeroVector;
					DebugColor = FColor::Blue;
					break;
			}

			FVector BlockPosition = OwnerLocation + ForwardVector * 100.0f + BlockOffset;
			DrawDebugBox(GetWorld(), BlockPosition, FVector(20.0f, 60.0f, 80.0f), DebugColor, false, 0.1f, 0, 2.0f);

			if (bInCounterWindow)
			{
				DrawDebugSphere(GetWorld(), OwnerLocation + FVector(0, 0, 100), 30.0f, 12, FColor::Yellow, false, 0.1f);
			}
		}
	}
	#endif
}

void UBlockingComponent::StartBlocking()
{
	if (!bIsBlocking)
	{
		bIsBlocking = true;
		bBlockingJustStarted = true;
		ReferenceMouseX = 0.0f;  // Reset reference position
		CurrentMouseX = 0.0f;     // Reset current position
		CurrentBlockDirection = EBlockDirection::Center;

		UE_LOG(LogTemp, Log, TEXT("Started blocking"));
	}
}

void UBlockingComponent::StopBlocking()
{
	if (bIsBlocking)
	{
		bIsBlocking = false;
		CurrentBlockDirection = EBlockDirection::Center;
		ReferenceMouseX = 0.0f;
		CurrentMouseX = 0.0f;

		bInCounterWindow = false;
		CounterWindowTimer = 0.0f;
		CounterDirection = EBlockDirection::None;

		UE_LOG(LogTemp, Log, TEXT("Stopped blocking"));
	}
}

void UBlockingComponent::UpdateBlockDirection(float MouseX)
{
	if (!bIsBlocking)
	{
		return;
	}

	// Accumulate mouse movement to track position
	CurrentMouseX += MouseX * MouseSensitivity * 0.5f;

	// Calculate position relative to reference (when blocking started)
	float RelativePosition = CurrentMouseX - ReferenceMouseX;

	// Normalize the relative position for block direction calculation
	// Using 30 units for easier side block activation
	float NormalizedPosition = FMath::Clamp(RelativePosition / 30.0f, -1.0f, 1.0f);

	EBlockDirection NewDirection = CalculateBlockDirection(NormalizedPosition);

	if (NewDirection != CurrentBlockDirection)
	{
		CurrentBlockDirection = NewDirection;
		UE_LOG(LogTemp, Log, TEXT("Block direction changed to: %s (Relative Pos: %.1f, Normalized: %.3f)"),
			CurrentBlockDirection == EBlockDirection::Left ? TEXT("Left") :
			CurrentBlockDirection == EBlockDirection::Right ? TEXT("Right") : TEXT("Center"),
			RelativePosition, NormalizedPosition);
	}

	// Reset the flag after first update
	if (bBlockingJustStarted)
	{
		bBlockingJustStarted = false;
	}
}

float UBlockingComponent::CalculateDamageReduction(EBlockDirection IncomingAttackDirection) const
{
	if (!bIsBlocking)
	{
		return 0.0f;
	}

	if (CurrentBlockDirection == IncomingAttackDirection)
	{
		return BlockDamageReduction;
	}

	return 0.0f;
}

void UBlockingComponent::TriggerCounterWindow(EBlockDirection IncomingAttackDirection)
{
	if (!bIsBlocking || CurrentBlockDirection != IncomingAttackDirection)
	{
		return;
	}

	bInCounterWindow = true;
	CounterWindowTimer = CounterWindowDuration;
	CounterDirection = IncomingAttackDirection;

	UE_LOG(LogTemp, Log, TEXT("Counter window opened for %f seconds"), CounterWindowDuration);
}

void UBlockingComponent::UpdateCounterWindow(float DeltaTime)
{
	CounterWindowTimer -= DeltaTime;

	if (CounterWindowTimer <= 0.0f)
	{
		bInCounterWindow = false;
		CounterDirection = EBlockDirection::None;
		UE_LOG(LogTemp, Log, TEXT("Counter window closed"));
	}
}

EBlockDirection UBlockingComponent::CalculateBlockDirection(float NormalizedMouseX) const
{
	// With threshold of 0.4:
	// Left: < -0.4 (move mouse left from starting position)
	// Center: -0.4 to 0.4 (stay near starting position - easy to maintain)
	// Right: > 0.4 (move mouse right from starting position)
	if (NormalizedMouseX < -BlockZoneThreshold)
	{
		return EBlockDirection::Left;
	}
	else if (NormalizedMouseX > BlockZoneThreshold)
	{
		return EBlockDirection::Right;
	}
	else
	{
		return EBlockDirection::Center;
	}
}