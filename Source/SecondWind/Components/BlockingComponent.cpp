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
		AccumulatedMouseX = 0.0f;
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
		AccumulatedMouseX = 0.0f;

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

	if (bBlockingJustStarted)
	{
		InitialMouseX = MouseX;
		return;
	}

	AccumulatedMouseX += MouseX * MouseSensitivity;

	float ClampedMouseX = FMath::Clamp(AccumulatedMouseX, -1.0f, 1.0f);

	EBlockDirection NewDirection = CalculateBlockDirection(ClampedMouseX);

	if (NewDirection != CurrentBlockDirection)
	{
		CurrentBlockDirection = NewDirection;
		UE_LOG(LogTemp, Log, TEXT("Block direction changed to: %s"),
			CurrentBlockDirection == EBlockDirection::Left ? TEXT("Left") :
			CurrentBlockDirection == EBlockDirection::Right ? TEXT("Right") : TEXT("Center"));
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