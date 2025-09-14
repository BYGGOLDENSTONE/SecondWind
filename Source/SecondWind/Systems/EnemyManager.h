#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EnemyManager.generated.h"

UCLASS()
class SECONDWIND_API UEnemyManager : public UGameInstanceSubsystem
{
    GENERATED_BODY()

public:
    // Subsystem interface
    virtual void Initialize(FSubsystemCollectionBase& Collection) override;
    virtual void Deinitialize() override;

    // Enemy registration
    void RegisterEnemy(AActor* Enemy);
    void UnregisterEnemy(AActor* Enemy);

    // Get all active enemies
    const TArray<AActor*>& GetActiveEnemies() const { return ActiveEnemies; }

    // Find enemies within range
    TArray<AActor*> GetEnemiesInRange(const FVector& Location, float Range) const;

    // Clear all enemies (for level transitions)
    void ClearAllEnemies();

private:
    UPROPERTY()
    TArray<AActor*> ActiveEnemies;
};