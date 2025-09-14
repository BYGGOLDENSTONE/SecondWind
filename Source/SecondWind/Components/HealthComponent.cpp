#include "Components/HealthComponent.h"
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
	}
}

void UHealthComponent::TakeDamage(AActor* DamagedActor, float Damage, const class UDamageType* DamageType,
	class AController* InstigatedBy, AActor* DamageCauser)
{
	if (Damage <= 0.0f || !IsAlive())
	{
		return;
	}

	CurrentHealth = FMath::Clamp(CurrentHealth - Damage, 0.0f, MaxHealth);
	OnHealthChanged.Broadcast(CurrentHealth);

	UE_LOG(LogTemp, Log, TEXT("%s took %f damage. Health: %f/%f (Phase %d/%d)"),
		*GetOwner()->GetName(), Damage, CurrentHealth, MaxHealth, CurrentPhase, MaxPhases);

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