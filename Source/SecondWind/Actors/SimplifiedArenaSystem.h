#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SimplifiedArenaSystem.generated.h"

class AArenaDoor;
class ASafeZoneCorridor;
class AArenaEnemy;
class ATrainingDummy;
class ASecondWindCharacter;
class UBoxComponent;

USTRUCT(BlueprintType)
struct FArenaRoom
{
    GENERATED_BODY()

    UPROPERTY()
    AArenaDoor* EntryDoor = nullptr;

    UPROPERTY()
    AArenaDoor* ExitDoor = nullptr;

    UPROPERTY()
    AArenaEnemy* Enemy = nullptr;

    UPROPERTY()
    ASafeZoneCorridor* Corridor = nullptr;

    UPROPERTY()
    FVector RoomLocation = FVector::ZeroVector;

    int32 ArenaNumber = 0;
};

UCLASS()
class SECONDWIND_API ASimplifiedArenaSystem : public AActor
{
    GENERATED_BODY()

public:
    ASimplifiedArenaSystem();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

    void InitializeArenaSystem();
    void OnDoorOpened(AArenaDoor* Door);
    void OnEnemyDefeated(AArenaEnemy* Enemy);
    void OnPlayerEnterArena(int32 ArenaNumber);
    void OnPlayerExitArena(int32 ArenaNumber);

    int32 GetCurrentArenaNumber() const { return CurrentArenaNumber; }
    bool IsInCombat() const { return bInCombat; }
    bool IsArenaClear(int32 ArenaNumber) const;

protected:
    void SetupStartingHub();
    void SetupArenaRoom(int32 ArenaNumber);
    void SpawnEnemyForArena(int32 ArenaNumber);
    void DespawnPreviousEnemy();
    void UnlockNextDoor();

    UPROPERTY(EditDefaultsOnly, Category = "Arena Settings")
    TSubclassOf<AArenaDoor> DoorClass;

    UPROPERTY(EditDefaultsOnly, Category = "Arena Settings")
    TSubclassOf<ASafeZoneCorridor> CorridorClass;

    UPROPERTY(EditDefaultsOnly, Category = "Arena Settings")
    TSubclassOf<AArenaEnemy> EnemyClass;

    UPROPERTY(EditDefaultsOnly, Category = "Arena Settings")
    TSubclassOf<ATrainingDummy> TrainingDummyClass;

    UPROPERTY(EditDefaultsOnly, Category = "Arena Settings")
    float RoomSpacing = 2000.0f;

    UPROPERTY(EditDefaultsOnly, Category = "Arena Settings")
    float CorridorLength = 1000.0f;

    UPROPERTY(EditDefaultsOnly, Category = "Arena Settings")
    int32 TotalArenas = 5;

    UPROPERTY(EditDefaultsOnly, Category = "Arena Settings")
    FVector StartingHubLocation = FVector(0, 0, 0);

private:
    TArray<FArenaRoom> ArenaRooms;
    int32 CurrentArenaNumber = 0;
    bool bInCombat = false;

    UPROPERTY()
    AArenaEnemy* CurrentEnemy = nullptr;

    UPROPERTY()
    ATrainingDummy* TrainingDummy = nullptr;

    UPROPERTY()
    ASecondWindCharacter* PlayerCharacter = nullptr;

    UPROPERTY()
    UBoxComponent* ArenaTrigger = nullptr;
};