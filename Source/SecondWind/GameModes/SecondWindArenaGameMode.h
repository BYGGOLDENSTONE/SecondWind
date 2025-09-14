#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "SecondWindArenaGameMode.generated.h"

class ALevelLayoutManager;
class ATrainingDummy;
class ASecondWindCharacter;

UCLASS()
class SECONDWIND_API ASecondWindArenaGameMode : public AGameModeBase
{
    GENERATED_BODY()

public:
    ASecondWindArenaGameMode();

protected:
    virtual void BeginPlay() override;
    virtual void PostLogin(APlayerController* NewPlayer) override;

public:
    void StartArenaSequence();
    void TransitionToArena(int32 ArenaNumber);
    void TransitionToSafeZone();
    void OnPlayerVictory(int32 ArenaNumber, int32 FragmentsEarned);
    void OnPlayerDefeat();

    ALevelLayoutManager* GetLevelLayoutManager() const { return LevelLayoutManager; }
    ATrainingDummy* GetTrainingDummy() const { return TrainingDummy; }

    void SpawnTrainingDummy();
    void RemoveTrainingDummy();

protected:
    void InitializeGameSystems();
    void SetupSafeZone();

    UPROPERTY(EditDefaultsOnly, Category = "Arena")
    TSubclassOf<ALevelLayoutManager> LevelLayoutManagerClass;

    UPROPERTY(EditDefaultsOnly, Category = "Training")
    TSubclassOf<ATrainingDummy> TrainingDummyClass;

    UPROPERTY(EditDefaultsOnly, Category = "Spawning")
    FVector SafeZoneSpawnLocation = FVector(-2000, 0, 100);

    UPROPERTY(EditDefaultsOnly, Category = "Spawning")
    FVector TrainingDummySpawnLocation = FVector(-2000, 500, 100);

private:
    UPROPERTY()
    ALevelLayoutManager* LevelLayoutManager = nullptr;

    UPROPERTY()
    ATrainingDummy* TrainingDummy = nullptr;

    UPROPERTY()
    ASecondWindCharacter* PlayerCharacter = nullptr;

    UPROPERTY()
    bool bInSafeZone = true;

    UPROPERTY()
    int32 CurrentArenaProgress = 0;
};