#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CombatComponent.generated.h"

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class SECONDWIND_API UCombatComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UCombatComponent();

protected:
	virtual void BeginPlay() override;

public:
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION()
	void PerformAttack();

	UFUNCTION()
	bool CanAttack() const;

private:
	UPROPERTY(EditDefaultsOnly, Category = "Combat")
	float BaseDamage = 5.0f;

	UPROPERTY(EditDefaultsOnly, Category = "Combat")
	float AttackRange = 150.0f;

	UPROPERTY(EditDefaultsOnly, Category = "Combat")
	float AttackCooldown = 1.0f;

	bool bIsAttacking = false;
	float AttackTimer = 0.0f;

	void ExecuteAttack();
	void ResetAttack();
	AActor* GetTargetInRange() const;
	void ApplyDamageToTarget(AActor* Target);
};