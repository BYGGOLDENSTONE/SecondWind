#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HealthComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHealthChanged, float, NewHealth);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnHealthDepleted);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPhaseChanged, int32, NewPhase);

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class SECONDWIND_API UHealthComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UHealthComponent();

protected:
	virtual void BeginPlay() override;

public:
	UPROPERTY(BlueprintAssignable, Category = "Health")
	FOnHealthChanged OnHealthChanged;

	UPROPERTY(BlueprintAssignable, Category = "Health")
	FOnHealthDepleted OnHealthDepleted;

	UPROPERTY(BlueprintAssignable, Category = "Health")
	FOnPhaseChanged OnPhaseChanged;

	UFUNCTION()
	void TakeDamage(AActor* DamagedActor, float Damage, const class UDamageType* DamageType,
		class AController* InstigatedBy, AActor* DamageCauser);

	UFUNCTION()
	float GetCurrentHealth() const { return CurrentHealth; }

	UFUNCTION()
	float GetMaxHealth() const { return MaxHealth; }

	UFUNCTION()
	int32 GetCurrentPhase() const { return CurrentPhase; }

	UFUNCTION()
	int32 GetMaxPhases() const { return MaxPhases; }

	UFUNCTION()
	bool IsAlive() const { return CurrentPhase <= MaxPhases && CurrentHealth > 0; }

	UFUNCTION()
	void ResetHealth();

	UFUNCTION()
	void SetMaxPhases(int32 NewMaxPhases);

private:
	UPROPERTY(EditDefaultsOnly, Category = "Health")
	float MaxHealth = 100.0f;

	UPROPERTY(EditDefaultsOnly, Category = "Health")
	int32 MaxPhases = 2;

	float CurrentHealth;
	int32 CurrentPhase = 1;

	void HandleHealthDepleted();
	void TransitionToNextPhase();
};