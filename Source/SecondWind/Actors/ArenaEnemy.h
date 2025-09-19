#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ArenaEnemy.generated.h"

class UHealthComponent;
class UCombatComponent;
class UWeakSideComponent;

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
    void SetSpawnPoint(class AEnemySpawnPoint* SpawnPoint);
    class AEnemySpawnPoint* GetSpawnPoint() const { return SpawnPoint; }

protected:
    void SetupPhases();
    void StartNextPhase();
    UFUNCTION()
    void EnterFinisherState();

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UHealthComponent* HealthComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UCombatComponent* CombatComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UWeakSideComponent* WeakSideComponent;

    // Legacy attack values - kept for backward compatibility but use CombatComponent instead
    UPROPERTY(EditDefaultsOnly, Category = "Combat (Deprecated - Use CombatComponent)")
    int32 BaseDamage = 10;

    UPROPERTY(EditDefaultsOnly, Category = "Combat (Deprecated - Use CombatComponent)")
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

    UPROPERTY()
    class AEnemySpawnPoint* SpawnPoint;

    FTimerHandle AttackTimerHandle;
    void PerformAttack();
    AActor* FindPlayer() const;
    void DespawnEnemy();
};