#include "CombatComponent.h"
#include "BlockingComponent.h"
#include "DodgeComponent.h"
#include "HackComponent.h"
#include "HealthComponent.h"
#include "WeakSideComponent.h"
#include "AnimationComponentSimplified.h"
#include "../Systems/GamestyleSystem.h"
#include "../Systems/MemorySystem.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/CapsuleComponent.h"
#include "Engine/World.h"
#include "Engine/GameInstance.h"
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

		// Find ALL animation components and pick the one with montages assigned
		TArray<UAnimationComponentSimplified*> AnimComponents;
		Owner->GetComponents<UAnimationComponentSimplified>(AnimComponents);

		UE_LOG(LogTemp, Warning, TEXT("CombatComponent: Found %d AnimationComponentSimplified components"), AnimComponents.Num());

		// Find the component with montages assigned (the configured one)
		for (UAnimationComponentSimplified* AnimComp : AnimComponents)
		{
			// Prefer the one that has montages configured
			if (AnimComp && AnimComp->IsProperlyConfigured())
			{
				AnimationSystem = AnimComp;
				UE_LOG(LogTemp, Warning, TEXT("CombatComponent: Found configured animation component with montages"));
				break;
			}
		}

		// If none are configured, try to find the one named "AnimationSystem"
		if (!AnimationSystem)
		{
			for (UAnimationComponentSimplified* AnimComp : AnimComponents)
			{
				if (AnimComp && AnimComp->GetFName().ToString().Contains("AnimationSystem"))
				{
					AnimationSystem = AnimComp;
					UE_LOG(LogTemp, Warning, TEXT("CombatComponent: Using AnimationSystem component by name"));
					break;
				}
			}
		}

		if (!AnimationSystem)
		{
			UE_LOG(LogTemp, Warning, TEXT("CombatComponent: AnimationSystem not found on owner!"));
		}
	}
}

void UCombatComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// Handle attack animation timing
	if (bIsInAttackAnimation)
	{
		AttackTimer -= DeltaTime;

		// End the animation phase after its duration
		if (AttackTimer <= (AttackCooldown - AttackAnimationDuration))
		{
			bIsInAttackAnimation = false;
		}
	}

	// Handle overall attack cooldown
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

	// Check if we should reset combo (waited too long between attacks)
	float CurrentTime = GetWorld()->GetTimeSeconds();
	float TimeSinceLastAttack = CurrentTime - LastAttackTime;

	if (TimeSinceLastAttack > ComboWindowDuration)
	{
		if (CurrentAttackIndex != 0)  // Only log if we're actually resetting a combo
		{
			UE_LOG(LogTemp, Warning, TEXT("CombatComponent: Combo window expired (%.1fs > %.1fs), reset to first attack"),
				TimeSinceLastAttack, ComboWindowDuration);
		}
		CurrentAttackIndex = 0;
	}
	else if (TimeSinceLastAttack > 0.1f)  // Only log if this isn't the very first attack
	{
		UE_LOG(LogTemp, Warning, TEXT("CombatComponent: Continuing combo (%.1fs since last attack)"), TimeSinceLastAttack);
	}

	bIsAttacking = true;
	bIsInAttackAnimation = true;  // Mark that we're in the actual attack animation
	AttackTimer = AttackCooldown;
	LastAttackTime = CurrentTime;  // Update last attack time

	// Play attack animation
	if (AnimationSystem)
	{
		UE_LOG(LogTemp, Warning, TEXT("CombatComponent: Triggering attack animation index %d"), CurrentAttackIndex);
		int32 AttackToPlay = CurrentAttackIndex;
		AnimationSystem->PlayAttack(AttackToPlay);

		// Get the actual number of attack sections
		int32 AttackCount = AnimationSystem->GetAttackSectionCount();
		if (AttackCount > 0)
		{
			// Increment attack index for next attack (cycles through available attacks)
			CurrentAttackIndex++;
			if (CurrentAttackIndex >= AttackCount)
			{
				CurrentAttackIndex = 0;
			}
			UE_LOG(LogTemp, Warning, TEXT("CombatComponent: Next attack will be index %d of %d total attacks (Window: %.1fs)"),
				CurrentAttackIndex, AttackCount, ComboWindowDuration);
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("CombatComponent: Cannot play attack animation - AnimationSystem is NULL!"));
	}

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

			// Play counter animation if available
			if (AnimationSystem)
			{
				AnimationSystem->PlayCounter();
			}
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
	bIsInAttackAnimation = false;  // Ensure animation flag is also reset
	AttackTimer = 0.0f;

	// Don't reset combo here - only reset when combo window expires
	// This allows the player to continue combos between attacks
	UE_LOG(LogTemp, Verbose, TEXT("CombatComponent: Attack cooldown ended"));
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

	// Only apply damage if attack window is active (or if no animation component)
	if (AnimationSystem && !bAttackWindowActive)
	{
		return;
	}

	// Calculate damage with animation multiplier and gamestyle bonus
	float FinalDamage = BaseDamage * CurrentDamageMultiplier;

	// Apply gamestyle offense bonus if available
	UGameInstance* GameInstance = GetWorld()->GetGameInstance();
	if (GameInstance)
	{
		if (UGamestyleSystem* GamestyleSystem = GameInstance->GetSubsystem<UGamestyleSystem>())
		{
			float OffenseBonus = GamestyleSystem->GetOffenseDamageBonus();
			FinalDamage += OffenseBonus;

			if (OffenseBonus > 0)
			{
				UE_LOG(LogTemp, Warning, TEXT(">>> OFFENSE GAMESTYLE: Attack damage increased from %.0f to %.0f (+%.0f) <<<"),
					BaseDamage, FinalDamage, OffenseBonus);
			}
		}

		// Check for weak side hit if memory is unlocked
		if (UWeakSideComponent* WeakSideComp = Target->FindComponentByClass<UWeakSideComponent>())
		{
			if (WeakSideComp->IsWeakSideActive())
			{
				// Check if the Tactical Analysis memory is unlocked
				if (UMemorySystem* MemorySystem = GameInstance->GetSubsystem<UMemorySystem>())
				{
					if (MemorySystem->IsMemoryUnlocked(TEXT("MEMORY_WEAK_SIDE")))
					{
						AActor* Owner = GetOwner();
						if (Owner && WeakSideComp->IsAttackFromWeakSide(Owner->GetActorLocation()))
						{
							FinalDamage *= 1.5f;
							WeakSideComp->OnWeakSideHit();

							UE_LOG(LogTemp, Warning, TEXT(">>> WEAK SIDE HIT! Damage increased to %.0f (1.5x multiplier) <<<"), FinalDamage);

							// Apply knockback
							if (ACharacter* TargetCharacter = Cast<ACharacter>(Target))
							{
								FVector KnockbackDirection = (Target->GetActorLocation() - Owner->GetActorLocation()).GetSafeNormal();
								KnockbackDirection.Z = 0.2f;
								TargetCharacter->LaunchCharacter(KnockbackDirection * 300.0f, false, false);
								UE_LOG(LogTemp, Warning, TEXT("Applied knockback to target"));
							}

							// Heavy physics reaction for weak side hit will be handled by the HealthComponent
							// when it receives the damage
						}
					}
				}
			}
		}
	}

	UGameplayStatics::ApplyPointDamage(
		Target,
		FinalDamage,
		Target->GetActorLocation(),
		FHitResult(),
		nullptr,
		GetOwner(),
		UDamageType::StaticClass()
	);

	// Physics reactions will be handled by the HealthComponent when it receives the damage
}

bool UCombatComponent::IsInCounterWindow() const
{
	// Check if we're in a counter window from blocking or dodging
	bool bInBlockCounter = BlockingComponent && BlockingComponent->IsInCounterWindow();
	bool bInDodgeCounter = DodgeComponent && DodgeComponent->IsInCounterWindow();

	return bInBlockCounter || bInDodgeCounter;
}

void UCombatComponent::ExecuteFinisher()
{
	AActor* Owner = GetOwner();
	if (!Owner)
	{
		return;
	}

	// Find a target that is in finisher state
	AActor* Target = GetFinisherTarget();
	if (Target)
	{
		// Check if target has a health component in finisher state
		if (UHealthComponent* TargetHealth = Target->FindComponentByClass<UHealthComponent>())
		{
			if (TargetHealth->IsInFinisherState())
			{
				TargetHealth->ExecuteFinisher();
				UE_LOG(LogTemp, Warning, TEXT("*** FINISHER EXECUTED on %s ***"), *Target->GetName());

				// Visual feedback
				#if WITH_EDITOR
				FVector FinisherLocation = Target->GetActorLocation();
				DrawDebugSphere(GetWorld(), FinisherLocation, 100.0f, 16, FColor::Yellow, false, 1.0f);
				#endif
			}
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No target in finisher state found"));
	}
}

bool UCombatComponent::CanExecuteFinisher() const
{
	// Can execute finisher if there's a target in finisher state nearby
	return GetFinisherTarget() != nullptr;
}

AActor* UCombatComponent::GetFinisherTarget() const
{
	AActor* Owner = GetOwner();
	if (!Owner)
	{
		return nullptr;
	}

	// Search for enemies in finisher state within range
	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACharacter::StaticClass(), FoundActors);

	for (AActor* Actor : FoundActors)
	{
		if (Actor == Owner)
			continue;

		float Distance = FVector::Dist(Owner->GetActorLocation(), Actor->GetActorLocation());
		if (Distance <= AttackRange * 1.5f) // Slightly larger range for finishers
		{
			if (UHealthComponent* Health = Actor->FindComponentByClass<UHealthComponent>())
			{
				if (Health->IsInFinisherState())
				{
					return Actor;
				}
			}
		}
	}

	return nullptr;
}