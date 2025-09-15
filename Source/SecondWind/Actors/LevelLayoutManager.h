#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LevelLayoutManager.generated.h"

class AArenaZone;
class AEnemySpawnPoint;
class AArenaDoor;
class ASafeZoneCorridor;
class AArenaEnemy;
class ATrainingDummy;

UCLASS()
class SECONDWIND_API ALevelLayoutManager : public AActor
{
    GENERATED_BODY()

public:
    ALevelLayoutManager();

protected:
    virtual void BeginPlay() override;

public:
    UPROPERTY(BlueprintReadOnly, Category = "Level Layout")
    TMap<int32, AArenaZone*> ArenaZones;

    UPROPERTY(BlueprintReadOnly, Category = "Level Layout")
    TArray<AEnemySpawnPoint*> SpawnPoints;

    UPROPERTY(BlueprintReadOnly, Category = "Level Layout")
    TArray<AArenaDoor*> AllDoors;

    UPROPERTY(BlueprintReadOnly, Category = "Level Layout")
    TArray<ASafeZoneCorridor*> AllCorridors;

    UPROPERTY(BlueprintReadOnly, Category = "Game State")
    int32 CurrentArenaNumber;

    UPROPERTY(BlueprintReadOnly, Category = "Game State")
    bool bInCombat;

    UPROPERTY(BlueprintReadOnly, Category = "Game State")
    int32 TotalArenasCleared;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn Settings")
    TSubclassOf<ATrainingDummy> DefaultTrainingDummyClass;

    void DiscoverLevelActors();
    void RegisterArenaZone(AArenaZone* Zone);
    void RegisterSpawnPoint(AEnemySpawnPoint* Point);
    void RegisterDoor(AArenaDoor* Door);
    void RegisterCorridor(ASafeZoneCorridor* Corridor);

    void OnPlayerEnterZone(int32 ZoneNumber);
    void OnZoneCleared(int32 ZoneNumber);
    void OnEnemyDefeated(AArenaEnemy* Enemy, int32 ZoneNumber);

    void SpawnEnemiesForZone(int32 ZoneNumber);
    void InitializeStartingArea();

    AArenaZone* GetZone(int32 ZoneNumber) const;
    bool IsZoneCleared(int32 ZoneNumber) const;
    int32 GetHighestClearedZone() const;

    // Reset entire level for new run
    void ResetLevelForNewRun();

private:
    void DiscoverArenaZones();
    void DiscoverSpawnPoints();
    void DiscoverDoors();
    void DiscoverCorridors();
    void ValidateLevelSetup();
    void SpawnTrainingDummy();
    void RespawnTrainingDummies();

    UPROPERTY()
    AEnemySpawnPoint* TrainingDummySpawnPoint;

    UPROPERTY()
    ATrainingDummy* CurrentTrainingDummy;
};