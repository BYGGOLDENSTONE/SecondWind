#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ArenaEnemy.generated.h"

class UHealthComponent;

UCLASS()
class SECONDWIND_API AArenaEnemy : public ACharacter
{
    GENERATED_BODY()

public:
    AArenaEnemy();

protected:
    virtual void BeginPlay() override;
    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:
    virtual void Tick(float DeltaTime) override;
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

    void InitializeEnemy(int32 ArenaNumber);

    UFUNCTION()
    void OnPhaseTransition();

    UFUNCTION()
    void OnEnemyDeath();

    int32 GetCurrentPhase() const { return CurrentPhase; }
    int32 GetMaxPhases() const { return MaxPhases; }
    bool IsInFinisherState() const;
    bool IsDefeated() const;

    void ExecuteFinisher();
    int32 CalculateFragmentReward() const;
    void SetPhaseCount(int32 PhaseCount);
    void SetOwnerZone(class AArenaZone* Zone);
    class AArenaZone* GetOwnerZone() const { return OwnerZone; }

protected:
    void SetupPhases();
    void StartNextPhase();
    UFUNCTION()
    void EnterFinisherState();

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UHealthComponent* HealthComponent;

    UPROPERTY(EditDefaultsOnly, Category = "Combat")
    int32 BaseDamage = 10;

    UPROPERTY(EditDefaultsOnly, Category = "Combat")
    float AttackRange = 150.0f;

private:
    UPROPERTY()
    int32 ArenaLevel = 1;

    UPROPERTY()
    int32 CurrentPhase = 1;

    UPROPERTY()
    int32 MaxPhases = 1;

    FTimerHandle FinisherTimeoutHandle;

    UPROPERTY()
    class AArenaZone* OwnerZone;

    FTimerHandle AttackTimerHandle;
    void PerformAttack();
    AActor* FindPlayer() const;
};