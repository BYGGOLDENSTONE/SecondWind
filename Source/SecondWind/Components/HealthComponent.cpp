#include "HealthComponent.h"
#include "BlockingComponent.h"
#include "HackComponent.h"
#include "GameFramework/Actor.h"
#include "Engine/World.h"
#include "SecondWind/UI/SecondWindHUD.h"
#include "GameFramework/PlayerController.h"
#include "SecondWind/SecondWindCharacter.h"
#include "TimerManager.h"

UHealthComponent::UHealthComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UHealthComponent::BeginPlay()
{
	Super::BeginPlay();

	CurrentHealth = MaxHealth;
	CurrentPhase = 1;

	AActor* Owner = GetOwner();
	if (Owner)
	{
		Owner->OnTakeAnyDamage.AddDynamic(this, &UHealthComponent::TakeDamage);
		HackComponent = Owner->FindComponentByClass<UHackComponent>();

		// Notify HUD of initial health for player characters
		if (Cast<ASecondWindCharacter>(Owner))
		{
			if (UWorld* World = GetWorld())
			{
				// Small delay to ensure HUD is ready
				World->GetTimerManager().SetTimerForNextTick([this, World]()
				{
					if (APlayerController* PC = World->GetFirstPlayerController())
					{
						if (ASecondWindHUD* HUD = Cast<ASecondWindHUD>(PC->GetHUD()))
						{
							HUD->UpdatePlayerHealth(CurrentHealth, MaxHealth, CurrentPhase, MaxPhases);
						}
					}
				});
			}
		}
	}
}

void UHealthComponent::TakeDamage(AActor* DamagedActor, float Damage, const class UDamageType* DamageType,
	class AController* InstigatedBy, AActor* DamageCauser)
{
	if (Damage <= 0.0f || !IsAlive() || bInFinisherState)
	{
		return;
	}

	float ActualDamage = Damage;

	if (BlockingComponent && BlockingComponent->IsBlocking())
	{
		EBlockDirection IncomingDirection = EBlockDirection::Center;

		if (DamageCauser)
		{
			FVector ToAttacker = (DamageCauser->GetActorLocation() - GetOwner()->GetActorLocation()).GetSafeNormal();
			FVector OwnerRight = GetOwner()->GetActorRightVector();
			float DotProduct = FVector::DotProduct(ToAttacker, OwnerRight);

			if (DotProduct < -0.5f)
			{
				IncomingDirection = EBlockDirection::Left;
			}
			else if (DotProduct > 0.5f)
			{
				IncomingDirection = EBlockDirection::Right;
			}
			else
			{
				IncomingDirection = EBlockDirection::Center;
			}
		}

		float DamageReduction = BlockingComponent->CalculateDamageReduction(IncomingDirection);
		ActualDamage = Damage * (1.0f - DamageReduction);

		if (DamageReduction > 0.0f)
		{
			BlockingComponent->TriggerCounterWindow(IncomingDirection);
			UE_LOG(LogTemp, Warning, TEXT("*** BLOCKED! Damage reduced from %.1f to %.1f (%.0f%% reduction) ***"),
				Damage, ActualDamage, DamageReduction * 100);
		}
		else
		{
			// Unblocked hit while blocking (wrong direction)
			if (HackComponent)
			{
				HackComponent->RegisterUnblockedHit();
				UE_LOG(LogTemp, Warning, TEXT("BLOCKED WRONG DIRECTION! Full damage taken (%.1f). Unblocked hit count increased!"), ActualDamage);
			}
		}
	}
	else
	{
		// Not blocking at all - register unblocked hit
		if (HackComponent)
		{
			HackComponent->RegisterUnblockedHit();
			UE_LOG(LogTemp, Warning, TEXT("HIT TAKEN (not blocking)! Damage: %.1f. Unblocked hit count increased!"), ActualDamage);
		}
	}

	CurrentHealth = FMath::Clamp(CurrentHealth - ActualDamage, 0.0f, MaxHealth);
	OnHealthChanged.Broadcast(CurrentHealth);

	UE_LOG(LogTemp, Warning, TEXT("%s took %f damage. Health: %f/%f (Phase %d/%d)"),
		*GetOwner()->GetName(), ActualDamage, CurrentHealth, MaxHealth, CurrentPhase, MaxPhases);

	// Update HUD
	if (UWorld* World = GetWorld())
	{
		if (APlayerController* PC = World->GetFirstPlayerController())
		{
			if (ASecondWindHUD* HUD = Cast<ASecondWindHUD>(PC->GetHUD()))
			{
				// Check if this is the player
				if (Cast<ASecondWindCharacter>(GetOwner()))
				{
					HUD->UpdatePlayerHealth(CurrentHealth, MaxHealth, CurrentPhase, MaxPhases);
					HUD->ShowDamageNumber(ActualDamage, true);
				}
				else
				{
					HUD->UpdateEnemyHealth(CurrentHealth, MaxHealth, CurrentPhase, MaxPhases);
					HUD->ShowDamageNumber(ActualDamage, false);
				}
			}
		}
	}

	if (CurrentHealth <= 0.0f)
	{
		HandleHealthDepleted();
	}
}

void UHealthComponent::HandleHealthDepleted()
{
	OnHealthDepleted.Broadcast();

	if (CurrentPhase < MaxPhases)
	{
		// Enter finisher state instead of immediately transitioning
		EnterFinisherState();
	}
	else
	{
		UE_LOG(LogTemp, Log, TEXT("%s has been defeated!"), *GetOwner()->GetName());
		OnDeath.Broadcast();
	}
}

void UHealthComponent::TransitionToNextPhase()
{
	CurrentPhase++;
	CurrentHealth = MaxHealth;
	bInFinisherState = false;

	OnPhaseChanged.Broadcast(CurrentPhase);
	OnHealthChanged.Broadcast(CurrentHealth);

	UE_LOG(LogTemp, Log, TEXT("%s entering phase %d/%d"),
		*GetOwner()->GetName(), CurrentPhase, MaxPhases);

	// Update HUD
	if (UWorld* World = GetWorld())
	{
		if (APlayerController* PC = World->GetFirstPlayerController())
		{
			if (ASecondWindHUD* HUD = Cast<ASecondWindHUD>(PC->GetHUD()))
			{
				// Check if this is the player
				if (Cast<ASecondWindCharacter>(GetOwner()))
				{
					HUD->UpdatePlayerHealth(CurrentHealth, MaxHealth, CurrentPhase, MaxPhases);
				}
				else
				{
					HUD->UpdateEnemyHealth(CurrentHealth, MaxHealth, CurrentPhase, MaxPhases);
				}
			}
		}
	}
}

void UHealthComponent::ResetHealth()
{
	CurrentHealth = MaxHealth;
	CurrentPhase = 1;

	OnHealthChanged.Broadcast(CurrentHealth);
	OnPhaseChanged.Broadcast(CurrentPhase);
}

void UHealthComponent::SetMaxPhases(int32 NewMaxPhases)
{
	MaxPhases = FMath::Max(1, NewMaxPhases);
	if (CurrentPhase > MaxPhases)
	{
		CurrentPhase = MaxPhases;
		OnPhaseChanged.Broadcast(CurrentPhase);
	}
}

void UHealthComponent::HealToFull()
{
	CurrentHealth = MaxHealth;
	OnHealthChanged.Broadcast(CurrentHealth);
	UE_LOG(LogTemp, Log, TEXT("%s healed to full health (%f)"), *GetOwner()->GetName(), MaxHealth);
}

void UHealthComponent::EnterFinisherState()
{
	bInFinisherState = true;
	OnEnterFinisherState.Broadcast();
	UE_LOG(LogTemp, Warning, TEXT("%s entered finisher state - awaiting finisher!"), *GetOwner()->GetName());

	// Update HUD to show 0 health but keep health bar visible
	if (UWorld* World = GetWorld())
	{
		if (APlayerController* PC = World->GetFirstPlayerController())
		{
			if (ASecondWindHUD* HUD = Cast<ASecondWindHUD>(PC->GetHUD()))
			{
				// Check if this is the player
				if (Cast<ASecondWindCharacter>(GetOwner()))
				{
					HUD->UpdatePlayerHealth(0, MaxHealth, CurrentPhase, MaxPhases);
				}
				else
				{
					// Keep enemy health bar visible showing 0 health
					HUD->UpdateEnemyHealth(0, MaxHealth, CurrentPhase, MaxPhases);
				}
			}
		}
	}
}

void UHealthComponent::ExecuteFinisher()
{
	if (!bInFinisherState)
	{
		UE_LOG(LogTemp, Warning, TEXT("ExecuteFinisher called but not in finisher state!"));
		return;
	}

	UE_LOG(LogTemp, Warning, TEXT("Finisher executed on %s!"), *GetOwner()->GetName());

	// Broadcast phase transition and then transition
	OnPhaseTransition.Broadcast();
	TransitionToNextPhase();
}