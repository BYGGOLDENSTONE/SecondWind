#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Arena.generated.h"

class AArenaEnemy;
class ASecondWindCharacter;

UENUM(BlueprintType)
enum class EArenaState : uint8
{
    Inactive,
    Preparing,
    InCombat,
    Victory,
    Defeat
};

UCLASS()
class SECONDWIND_API AArena : public AActor
{
    GENERATED_BODY()

public:
    AArena();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

    void InitializeArena(int32 ArenaNumber);
    void StartCombat();
    void EndCombat(bool bPlayerVictory);

    UFUNCTION()
    void OnEnemyDefeated();

    UFUNCTION()
    void OnPlayerDefeated();

    int32 GetArenaNumber() const { return ArenaNumber; }
    EArenaState GetArenaState() const { return CurrentState; }
    AArenaEnemy* GetCurrentEnemy() const { return CurrentEnemy; }

    FVector GetPlayerSpawnLocation() const;
    FVector GetEnemySpawnLocation() const;

protected:
    void SpawnEnemy();
    void CleanupArena();
    void TransitionToState(EArenaState NewState);

    UPROPERTY(EditDefaultsOnly, Category = "Arena")
    TSubclassOf<AArenaEnemy> EnemyClass;

    UPROPERTY(EditDefaultsOnly, Category = "Arena")
    float ArenaRadius = 1500.0f;

    UPROPERTY(EditDefaultsOnly, Category = "Arena")
    FVector PlayerSpawnOffset = FVector(0, -500, 0);

    UPROPERTY(EditDefaultsOnly, Category = "Arena")
    FVector EnemySpawnOffset = FVector(0, 500, 0);

private:
    UPROPERTY()
    int32 ArenaNumber = 1;

    UPROPERTY()
    EArenaState CurrentState = EArenaState::Inactive;

    UPROPERTY()
    AArenaEnemy* CurrentEnemy = nullptr;

    UPROPERTY()
    ASecondWindCharacter* PlayerCharacter = nullptr;
};