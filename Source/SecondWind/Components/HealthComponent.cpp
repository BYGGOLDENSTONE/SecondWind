#include "HealthComponent.h"
#include "BlockingComponent.h"
#include "HackComponent.h"
#include "GameFramework/Actor.h"
#include "Engine/World.h"

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
	}
}

void UHealthComponent::TakeDamage(AActor* DamagedActor, float Damage, const class UDamageType* DamageType,
	class AController* InstigatedBy, AActor* DamageCauser)
{
	if (Damage <= 0.0f || !IsAlive())
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

	UE_LOG(LogTemp, Log, TEXT("%s took %f damage. Health: %f/%f (Phase %d/%d)"),
		*GetOwner()->GetName(), ActualDamage, CurrentHealth, MaxHealth, CurrentPhase, MaxPhases);

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
		TransitionToNextPhase();
	}
	else
	{
		UE_LOG(LogTemp, Log, TEXT("%s has been defeated!"), *GetOwner()->GetName());
	}
}

void UHealthComponent::TransitionToNextPhase()
{
	CurrentPhase++;
	CurrentHealth = MaxHealth;

	OnPhaseChanged.Broadcast(CurrentPhase);
	OnHealthChanged.Broadcast(CurrentHealth);

	UE_LOG(LogTemp, Log, TEXT("%s entering phase %d/%d"),
		*GetOwner()->GetName(), CurrentPhase, MaxPhases);
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