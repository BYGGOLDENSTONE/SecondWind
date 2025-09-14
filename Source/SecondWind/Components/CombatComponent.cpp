#include "CombatComponent.h"
#include "BlockingComponent.h"
#include "DodgeComponent.h"
#include "HackComponent.h"
#include "HealthComponent.h"
#include "GameFramework/Character.h"
#include "Components/CapsuleComponent.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"
#include "Kismet/GameplayStatics.h"

UCombatComponent::UCombatComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UCombatComponent::BeginPlay()
{
	Super::BeginPlay();

	// Find other components on the same actor
	if (AActor* Owner = GetOwner())
	{
		DodgeComponent = Owner->FindComponentByClass<UDodgeComponent>();
		HackComponent = Owner->FindComponentByClass<UHackComponent>();
		// BlockingComponent is already set via SetBlockingComponent
	}
}

void UCombatComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (bIsAttacking)
	{
		AttackTimer -= DeltaTime;
		if (AttackTimer <= 0.0f)
		{
			ResetAttack();
		}
	}
}

void UCombatComponent::PerformAttack()
{
	if (!CanAttack())
	{
		// Log why the attack was prevented
		if (bIsAttacking)
		{
			UE_LOG(LogTemp, Log, TEXT("Cannot attack: Already attacking"));
		}
		else if (BlockingComponent && BlockingComponent->IsBlocking() && !BlockingComponent->IsInCounterWindow())
		{
			UE_LOG(LogTemp, Log, TEXT("Cannot attack: Blocking (not in counter window)"));
		}
		return;
	}

	bIsAttacking = true;
	AttackTimer = AttackCooldown;

	ExecuteAttack();
}

bool UCombatComponent::CanAttack() const
{
	// Allow attack during counter window even while blocking
	if (BlockingComponent && BlockingComponent->IsBlocking())
	{
		// If we're in a counter window, allow the attack
		if (BlockingComponent->IsInCounterWindow())
		{
			return !bIsAttacking;
		}
		// Otherwise, blocking prevents attacking
		return false;
	}
	return !bIsAttacking;
}

void UCombatComponent::ExecuteAttack()
{
	AActor* Owner = GetOwner();
	if (!Owner)
	{
		return;
	}

	// Check if this is a counter-attack
	bool bIsCounterAttack = IsInCounterWindow();

	if (bIsCounterAttack)
	{
		UE_LOG(LogTemp, Warning, TEXT(">>> Executing attack during COUNTER WINDOW <<<"));
	}

	AActor* Target = GetTargetInRange();
	if (Target)
	{
		float DamageDealt = BaseDamage;
		ApplyDamageToTarget(Target);

		// Log the successful hit
		if (bIsCounterAttack)
		{
			UE_LOG(LogTemp, Warning, TEXT("*** COUNTER-ATTACK HIT! %s dealt %.1f damage to %s ***"),
				*Owner->GetName(),
				DamageDealt,
				*Target->GetName());
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("%s HIT %s for %.1f damage!"),
				*Owner->GetName(),
				*Target->GetName(),
				DamageDealt);
		}

		// If this was a counter-attack, notify the HackComponent
		if (bIsCounterAttack && HackComponent)
		{
			HackComponent->AddCounter();
			UE_LOG(LogTemp, Warning, TEXT("*** COUNTER-ATTACK SUCCESSFUL! Hack counter increased ***"));
		}
	}
	else
	{
		// Log the miss
		if (bIsCounterAttack)
		{
			UE_LOG(LogTemp, Warning, TEXT("!!! COUNTER-ATTACK MISSED! No target in range !!!"));
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("%s attacked but MISSED (no target in range)"),
				*Owner->GetName());
		}
	}

	#if WITH_EDITOR
	FVector AttackLocation = Owner->GetActorLocation() + Owner->GetActorForwardVector() * AttackRange;
	FColor DebugColor = bIsCounterAttack ? FColor::Cyan : FColor::Red;
	DrawDebugSphere(GetWorld(), AttackLocation, 50.0f, 12, DebugColor, false, 0.5f);
	#endif
}

void UCombatComponent::ResetAttack()
{
	bIsAttacking = false;
	AttackTimer = 0.0f;
}

AActor* UCombatComponent::GetTargetInRange() const
{
	AActor* Owner = GetOwner();
	if (!Owner)
	{
		return nullptr;
	}

	FVector StartLocation = Owner->GetActorLocation();
	FVector EndLocation = StartLocation + Owner->GetActorForwardVector() * AttackRange;

	FCollisionQueryParams QueryParams;
	QueryParams.AddIgnoredActor(Owner);

	FHitResult HitResult;
	bool bHit = GetWorld()->LineTraceSingleByChannel(
		HitResult,
		StartLocation,
		EndLocation,
		ECC_Pawn,
		QueryParams
	);

	if (bHit && HitResult.GetActor())
	{
		AActor* HitActor = HitResult.GetActor();

		// Check if the target has health and is alive
		UHealthComponent* TargetHealth = HitActor->FindComponentByClass<UHealthComponent>();
		if (TargetHealth && !TargetHealth->IsAlive())
		{
			return nullptr; // Don't target dead actors
		}

		return HitActor;
	}

	return nullptr;
}

void UCombatComponent::ApplyDamageToTarget(AActor* Target)
{
	if (!Target)
	{
		return;
	}

	UGameplayStatics::ApplyPointDamage(
		Target,
		BaseDamage,
		Target->GetActorLocation(),
		FHitResult(),
		nullptr,
		GetOwner(),
		UDamageType::StaticClass()
	);
}

bool UCombatComponent::IsInCounterWindow() const
{
	// Check if we're in a counter window from blocking or dodging
	bool bInBlockCounter = BlockingComponent && BlockingComponent->IsInCounterWindow();
	bool bInDodgeCounter = DodgeComponent && DodgeComponent->IsInCounterWindow();

	return bInBlockCounter || bInDodgeCounter;
}