#include "EnemyManager.h"
#include "Engine/World.h"

void UEnemyManager::Initialize(FSubsystemCollectionBase& Collection)
{
    Super::Initialize(Collection);
    UE_LOG(LogTemp, Warning, TEXT("EnemyManager initialized"));
}

void UEnemyManager::Deinitialize()
{
    ClearAllEnemies();
    Super::Deinitialize();
}

void UEnemyManager::RegisterEnemy(AActor* Enemy)
{
    if (Enemy && !ActiveEnemies.Contains(Enemy))
    {
        ActiveEnemies.Add(Enemy);
        UE_LOG(LogTemp, Warning, TEXT("Enemy registered: %s"), *Enemy->GetName());
    }
}

void UEnemyManager::UnregisterEnemy(AActor* Enemy)
{
    if (Enemy)
    {
        ActiveEnemies.Remove(Enemy);
        UE_LOG(LogTemp, Warning, TEXT("Enemy unregistered: %s"), *Enemy->GetName());
    }
}

TArray<AActor*> UEnemyManager::GetEnemiesInRange(const FVector& Location, float Range) const
{
    TArray<AActor*> EnemiesInRange;
    float RangeSquared = Range * Range;

    for (AActor* Enemy : ActiveEnemies)
    {
        if (Enemy && IsValid(Enemy))
        {
            float DistanceSquared = FVector::DistSquared(Location, Enemy->GetActorLocation());
            if (DistanceSquared <= RangeSquared)
            {
                EnemiesInRange.Add(Enemy);
            }
        }
    }

    return EnemiesInRange;
}

void UEnemyManager::ClearAllEnemies()
{
    ActiveEnemies.Empty();
    UE_LOG(LogTemp, Warning, TEXT("All enemies cleared from manager"));
}