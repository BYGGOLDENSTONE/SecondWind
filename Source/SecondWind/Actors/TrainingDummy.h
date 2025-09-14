#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "TrainingDummy.generated.h"

class UHealthComponent;
class UCapsuleComponent;
class USkeletalMeshComponent;
class UCombatComponent;

UCLASS()
class SECONDWIND_API ATrainingDummy : public ACharacter
{
	GENERATED_BODY()

public:
	ATrainingDummy();

protected:
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:
	virtual void Tick(float DeltaTime) override;

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UHealthComponent* HealthComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UCombatComponent* CombatComponent;

	UPROPERTY(EditDefaultsOnly, Category = "Training Dummy")
	float RespawnDelay = 3.0f;

	UPROPERTY(EditDefaultsOnly, Category = "Training Dummy")
	float AttackInterval = 2.0f;

	UPROPERTY(EditDefaultsOnly, Category = "Training Dummy")
	bool bAutoAttackPlayer = false;

private:
	FTimerHandle RespawnTimerHandle;
	FTimerHandle AttackTimerHandle;

	UFUNCTION()
	void OnHealthDepleted();

	UFUNCTION()
	void OnPhaseChanged(int32 NewPhase);

	void Respawn();
	void PlayHitReaction();
	void PerformTestAttack();
};