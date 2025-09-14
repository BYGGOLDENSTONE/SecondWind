#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ArenaManager.generated.h"

class AArena;
class ASecondWindCharacter;

UENUM(BlueprintType)
enum class EGamePhase : uint8
{
    SafeZone,
    Arena,
    IntermediateSafeZone,
    GameComplete
};

UCLASS()
class SECONDWIND_API AArenaManager : public AActor
{
    GENERATED_BODY()

public:
    AArenaManager();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

    void StartGame();
    void TransitionToArena(int32 ArenaNumber);
    void TransitionToSafeZone();
    void OnArenaCompleted(bool bVictory);

    int32 GetCurrentArenaNumber() const { return CurrentArenaNumber; }
    int32 GetTotalFragments() const { return TotalFragments; }
    void AddFragments(int32 Amount);

    AArena* GetCurrentArena() const { return CurrentArena; }
    EGamePhase GetCurrentPhase() const { return CurrentGamePhase; }

protected:
    void SpawnArena(int32 ArenaNumber);
    void CleanupCurrentArena();
    void SaveProgress();
    void LoadProgress();

    UPROPERTY(EditDefaultsOnly, Category = "Arena")
    TSubclassOf<AArena> ArenaClass;

    UPROPERTY(EditDefaultsOnly, Category = "Arena")
    FVector ArenaSpawnLocation = FVector(0, 0, 0);

    UPROPERTY(EditDefaultsOnly, Category = "Arena")
    FVector SafeZoneLocation = FVector(-2000, 0, 0);

    UPROPERTY(EditDefaultsOnly, Category = "Arena")
    int32 MaxArenas = 5;

private:
    UPROPERTY()
    int32 CurrentArenaNumber = 0;

    UPROPERTY()
    int32 TotalFragments = 0;

    UPROPERTY()
    EGamePhase CurrentGamePhase = EGamePhase::SafeZone;

    UPROPERTY()
    AArena* CurrentArena = nullptr;

    UPROPERTY()
    ASecondWindCharacter* PlayerCharacter = nullptr;
};