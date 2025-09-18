#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CombatComponent.generated.h"

class UBlockingComponent;
class UDodgeComponent;
class UHackComponent;

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
	void ExecuteFinisher();

	UFUNCTION()
	bool CanAttack() const;

	UFUNCTION()
	bool CanExecuteFinisher() const;

	UFUNCTION()
	bool IsInAttackAnimation() const { return bIsInAttackAnimation; }

	UFUNCTION()
	void SetBlockingComponent(UBlockingComponent* InBlockingComponent) { BlockingComponent = InBlockingComponent; }

private:
	UPROPERTY(EditDefaultsOnly, Category = "Combat")
	float BaseDamage = 5.0f;

	UPROPERTY(EditDefaultsOnly, Category = "Combat")
	float AttackRange = 150.0f;

	UPROPERTY(EditDefaultsOnly, Category = "Combat")
	float AttackCooldown = 1.0f;

	bool bIsAttacking = false;
	bool bIsInAttackAnimation = false;  // True only during the actual attack animation
	float AttackTimer = 0.0f;
	float AttackAnimationDuration = 0.3f;  // Duration of the actual attack animation

	void ExecuteAttack();
	void ResetAttack();
	AActor* GetTargetInRange() const;
	AActor* GetFinisherTarget() const;
	void ApplyDamageToTarget(AActor* Target);
	bool IsInCounterWindow() const;

	UBlockingComponent* BlockingComponent = nullptr;
	UDodgeComponent* DodgeComponent = nullptr;
	UHackComponent* HackComponent = nullptr;
};