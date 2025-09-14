#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ArenaZone.generated.h"

class AEnemySpawnPoint;
class AArenaDoor;
class UBoxComponent;
class ALevelLayoutManager;
class AArenaEnemy;

UCLASS()
class SECONDWIND_API AArenaZone : public AActor
{
    GENERATED_BODY()

public:
    AArenaZone();

protected:
    virtual void BeginPlay() override;

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Arena")
    int32 ZoneNumber;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Arena")
    FName ZoneName;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Arena")
    AArenaDoor* EntryDoor;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Arena")
    AArenaDoor* ExitDoor;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UBoxComponent* ZoneBounds;

    UPROPERTY(BlueprintReadOnly, Category = "Arena")
    bool bIsCleared;

    UPROPERTY(BlueprintReadOnly, Category = "Arena")
    bool bIsActive;

    UPROPERTY(BlueprintReadOnly, Category = "Arena")
    TArray<AEnemySpawnPoint*> SpawnPoints;

    UPROPERTY(BlueprintReadOnly, Category = "Arena")
    TArray<AArenaEnemy*> ActiveEnemies;

    void RegisterWithManager();
    void ActivateZone();
    void DeactivateZone();
    void OnEnemyDefeated(AArenaEnemy* Enemy);
    bool IsZoneActive() const { return bIsActive; }
    bool IsZoneCleared() const { return bIsCleared; }
    void AddSpawnPoint(AEnemySpawnPoint* SpawnPoint);
    void SpawnEnemies();
    void ClearEnemies();

private:
    ALevelLayoutManager* LayoutManager;

    UFUNCTION()
    void OnZoneBoundsBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
        UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

    void CheckZoneClearStatus();
};