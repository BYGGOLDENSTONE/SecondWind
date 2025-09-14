#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnemySpawnPoint.generated.h"

class AArenaEnemy;
class ATrainingDummy;
class UArrowComponent;
class UBillboardComponent;

UCLASS()
class SECONDWIND_API AEnemySpawnPoint : public AActor
{
    GENERATED_BODY()

public:
    AEnemySpawnPoint();

protected:
    virtual void BeginPlay() override;

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn Settings")
    int32 ArenaNumber;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn Settings")
    TSubclassOf<AArenaEnemy> EnemyClass;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn Settings")
    int32 PhaseOverride;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn Settings")
    bool bIsTrainingDummy;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn Settings")
    TSubclassOf<ATrainingDummy> TrainingDummyClass;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UArrowComponent* DirectionIndicator;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UBillboardComponent* EditorSprite;

    AArenaEnemy* SpawnEnemy();
    ATrainingDummy* SpawnTrainingDummy();
    void ClearSpawnPoint();
    void SetEnemyPhases(int32 Phases);
    int32 GetEffectivePhases() const;

private:
    UPROPERTY()
    AActor* SpawnedActor;

    void RegisterWithZone();
};