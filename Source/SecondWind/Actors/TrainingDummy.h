#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "TrainingDummy.generated.h"

class UHealthComponent;
class UCapsuleComponent;
class USkeletalMeshComponent;

UCLASS()
class SECONDWIND_API ATrainingDummy : public ACharacter
{
	GENERATED_BODY()

public:
	ATrainingDummy();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UHealthComponent* HealthComponent;

	UPROPERTY(EditDefaultsOnly, Category = "Training Dummy")
	float RespawnDelay = 3.0f;

private:
	FTimerHandle RespawnTimerHandle;

	UFUNCTION()
	void OnHealthDepleted();

	UFUNCTION()
	void OnPhaseChanged(int32 NewPhase);

	void Respawn();
	void PlayHitReaction();
};