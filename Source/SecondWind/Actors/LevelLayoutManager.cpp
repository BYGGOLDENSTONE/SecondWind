#include "LevelLayoutManager.h"
#include "ArenaZone.h"
#include "EnemySpawnPoint.h"
#include "ArenaDoor.h"
#include "SafeZoneCorridor.h"
#include "ArenaEnemy.h"
#include "TrainingDummy.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"

ALevelLayoutManager::ALevelLayoutManager()
{
    PrimaryActorTick.bCanEverTick = false;

    CurrentArenaNumber = 0;
    bInCombat = false;
    TotalArenasCleared = 0;
    TrainingDummySpawnPoint = nullptr;
    CurrentTrainingDummy = nullptr;
}

void ALevelLayoutManager::BeginPlay()
{
    Super::BeginPlay();

    DiscoverLevelActors();
    ValidateLevelSetup();
    InitializeStartingArea();
}

void ALevelLayoutManager::DiscoverLevelActors()
{
    DiscoverArenaZones();
    DiscoverSpawnPoints();
    DiscoverDoors();
    DiscoverCorridors();

    UE_LOG(LogTemp, Warning, TEXT("LevelLayoutManager discovered: %d zones, %d spawn points, %d doors, %d corridors"),
        ArenaZones.Num(), SpawnPoints.Num(), AllDoors.Num(), AllCorridors.Num());
}

void ALevelLayoutManager::DiscoverArenaZones()
{
    TArray<AActor*> FoundActors;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), AArenaZone::StaticClass(), FoundActors);

    for (AActor* Actor : FoundActors)
    {
        if (AArenaZone* Zone = Cast<AArenaZone>(Actor))
        {
            RegisterArenaZone(Zone);
        }
    }
}

void ALevelLayoutManager::DiscoverSpawnPoints()
{
    TArray<AActor*> FoundActors;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), AEnemySpawnPoint::StaticClass(), FoundActors);

    for (AActor* Actor : FoundActors)
    {
        if (AEnemySpawnPoint* SpawnPoint = Cast<AEnemySpawnPoint>(Actor))
        {
            RegisterSpawnPoint(SpawnPoint);
        }
    }
}

void ALevelLayoutManager::DiscoverDoors()
{
    TArray<AActor*> FoundActors;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), AArenaDoor::StaticClass(), FoundActors);

    for (AActor* Actor : FoundActors)
    {
        if (AArenaDoor* Door = Cast<AArenaDoor>(Actor))
        {
            RegisterDoor(Door);
        }
    }
}

void ALevelLayoutManager::DiscoverCorridors()
{
    TArray<AActor*> FoundActors;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), ASafeZoneCorridor::StaticClass(), FoundActors);

    for (AActor* Actor : FoundActors)
    {
        if (ASafeZoneCorridor* Corridor = Cast<ASafeZoneCorridor>(Actor))
        {
            RegisterCorridor(Corridor);
        }
    }
}

void ALevelLayoutManager::RegisterArenaZone(AArenaZone* Zone)
{
    if (Zone)
    {
        // Check if already registered to avoid duplicates
        if (ArenaZones.Contains(Zone->ZoneNumber))
        {
            UE_LOG(LogTemp, Warning, TEXT("ArenaZone %d already registered, skipping duplicate"), Zone->ZoneNumber);
            return;
        }

        ArenaZones.Add(Zone->ZoneNumber, Zone);
        UE_LOG(LogTemp, Warning, TEXT("Registered ArenaZone %d: %s"), Zone->ZoneNumber, *Zone->ZoneName.ToString());
    }
}

void ALevelLayoutManager::RegisterSpawnPoint(AEnemySpawnPoint* Point)
{
    if (Point)
    {
        SpawnPoints.Add(Point);

        if (Point->bIsTrainingDummy)
        {
            TrainingDummySpawnPoint = Point;
            UE_LOG(LogTemp, Warning, TEXT("Registered training dummy spawn point"));
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("Registered spawn point for Arena %d"), Point->ArenaNumber);
        }
    }
}

void ALevelLayoutManager::RegisterDoor(AArenaDoor* Door)
{
    if (Door)
    {
        AllDoors.Add(Door);
    }
}

void ALevelLayoutManager::RegisterCorridor(ASafeZoneCorridor* Corridor)
{
    if (Corridor)
    {
        AllCorridors.Add(Corridor);
    }
}

void ALevelLayoutManager::ValidateLevelSetup()
{
    if (ArenaZones.Num() == 0)
    {
        UE_LOG(LogTemp, Error, TEXT("No ArenaZones found in level!"));
    }

    for (auto& ZonePair : ArenaZones)
    {
        AArenaZone* Zone = ZonePair.Value;
        if (Zone && Zone->SpawnPoints.Num() == 0 && Zone->ZoneNumber > 0)
        {
            UE_LOG(LogTemp, Warning, TEXT("ArenaZone %d has no spawn points!"), Zone->ZoneNumber);
        }
    }

    if (!TrainingDummySpawnPoint)
    {
        UE_LOG(LogTemp, Warning, TEXT("No training dummy spawn point found in level"));
    }
}

void ALevelLayoutManager::InitializeStartingArea()
{
    // No longer auto-spawning training dummy - placed manually in editor
    // SpawnTrainingDummy();

    UpdateDoorStates();

    if (AArenaZone* StartZone = GetZone(0))
    {
        if (StartZone->ExitDoor)
        {
            StartZone->ExitDoor->SetDoorLocked(false);
        }
    }
}

void ALevelLayoutManager::SpawnTrainingDummy()
{
    // No longer auto-spawning training dummy - placed manually in editor
    UE_LOG(LogTemp, Warning, TEXT("Training dummies should be placed manually in editor"));

    // Commented out auto-spawn logic
    // if (TrainingDummySpawnPoint)
    // {
    //     CurrentTrainingDummy = TrainingDummySpawnPoint->SpawnTrainingDummy();
    // }
    // else if (DefaultTrainingDummyClass)
    // {
    //     FVector SpawnLocation = FVector(0.0f, 0.0f, 100.0f);
    //     FRotator SpawnRotation = FRotator::ZeroRotator;
    //
    //     FActorSpawnParameters SpawnParams;
    //     SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
    //
    //     CurrentTrainingDummy = GetWorld()->SpawnActor<ATrainingDummy>(
    //         DefaultTrainingDummyClass,
    //         SpawnLocation,
    //         SpawnRotation,
    //         SpawnParams
    //     );
    //
    //     if (CurrentTrainingDummy)
    //     {
    //         UE_LOG(LogTemp, Warning, TEXT("Spawned default training dummy at origin"));
    //     }
    // }
}

void ALevelLayoutManager::OnPlayerEnterZone(int32 ZoneNumber)
{
    if (bInCombat)
    {
        return;
    }

    AArenaZone* Zone = GetZone(ZoneNumber);
    if (Zone && !Zone->IsZoneCleared())
    {
        CurrentArenaNumber = ZoneNumber;
        bInCombat = true;
        Zone->ActivateZone();

        UE_LOG(LogTemp, Warning, TEXT("Player entered Arena %d - Combat started"), ZoneNumber);
    }
}

void ALevelLayoutManager::OnZoneCleared(int32 ZoneNumber)
{
    bInCombat = false;
    TotalArenasCleared++;

    UE_LOG(LogTemp, Warning, TEXT("Arena %d cleared! Total cleared: %d"), ZoneNumber, TotalArenasCleared);

    UpdateDoorStates();

    if (ZoneNumber == 5)
    {
        UE_LOG(LogTemp, Warning, TEXT("All arenas cleared! Victory!"));
    }
}

void ALevelLayoutManager::OnEnemyDefeated(AArenaEnemy* Enemy, int32 ZoneNumber)
{
    if (AArenaZone* Zone = GetZone(ZoneNumber))
    {
        Zone->OnEnemyDefeated(Enemy);
    }
}

void ALevelLayoutManager::SpawnEnemiesForZone(int32 ZoneNumber)
{
    if (AArenaZone* Zone = GetZone(ZoneNumber))
    {
        Zone->SpawnEnemies();
    }
}

void ALevelLayoutManager::UpdateDoorStates()
{
    for (AArenaDoor* Door : AllDoors)
    {
        if (Door)
        {
            int32 RequiredArena = Door->GetRequiredArenaNumber();
            if (RequiredArena > 0)
            {
                bool bShouldBeLocked = !IsZoneCleared(RequiredArena - 1);
                Door->SetDoorLocked(bShouldBeLocked);
            }
        }
    }
}

AArenaZone* ALevelLayoutManager::GetZone(int32 ZoneNumber) const
{
    if (ArenaZones.Contains(ZoneNumber))
    {
        return ArenaZones[ZoneNumber];
    }
    return nullptr;
}

bool ALevelLayoutManager::IsZoneCleared(int32 ZoneNumber) const
{
    if (AArenaZone* Zone = GetZone(ZoneNumber))
    {
        return Zone->IsZoneCleared();
    }
    return false;
}

int32 ALevelLayoutManager::GetHighestClearedZone() const
{
    int32 HighestCleared = -1;
    for (auto& ZonePair : ArenaZones)
    {
        if (ZonePair.Value && ZonePair.Value->IsZoneCleared())
        {
            HighestCleared = FMath::Max(HighestCleared, ZonePair.Key);
        }
    }
    return HighestCleared;
}