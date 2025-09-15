#include "LevelLayoutManager.h"
#include "ArenaZone.h"
#include "EnemySpawnPoint.h"
#include "ArenaDoor.h"
#include "SafeZoneCorridor.h"
#include "ArenaEnemy.h"
#include "TrainingDummy.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"
#include "../Components/HealthComponent.h"

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
    // Simple initialization - doors will be managed by zones when combat starts
    UE_LOG(LogTemp, Warning, TEXT("Starting area initialized - doors managed by zone combat system"));
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

void ALevelLayoutManager::RespawnTrainingDummies()
{
    // Find all training dummies in the level and respawn them if dead
    TArray<AActor*> FoundDummies;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), ATrainingDummy::StaticClass(), FoundDummies);

    for (AActor* Actor : FoundDummies)
    {
        if (ATrainingDummy* Dummy = Cast<ATrainingDummy>(Actor))
        {
            // Check if the dummy is dead and needs respawning
            if (UHealthComponent* HealthComp = Dummy->FindComponentByClass<UHealthComponent>())
            {
                if (!HealthComp->IsAlive())
                {
                    // Respawn the dummy
                    Dummy->Respawn();
                    UE_LOG(LogTemp, Warning, TEXT("Respawned training dummy: %s"), *Dummy->GetName());
                }
                else
                {
                    // Just reset health to full if alive
                    HealthComp->ResetHealth();
                    UE_LOG(LogTemp, Warning, TEXT("Reset health for training dummy: %s"), *Dummy->GetName());
                }
            }
        }
    }

    UE_LOG(LogTemp, Warning, TEXT("Checked %d training dummies for respawn"), FoundDummies.Num());
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

    // DON'T auto-update door states - let zones manage their own doors
    // UpdateDoorStates();  // REMOVED - this was causing issues

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

void ALevelLayoutManager::ResetLevelForNewRun()
{
    UE_LOG(LogTemp, Warning, TEXT("=== RESETTING LEVEL FOR NEW RUN ==="));

    // Reset all arena zones
    for (auto& ZonePair : ArenaZones)
    {
        if (AArenaZone* Zone = ZonePair.Value)
        {
            // Despawn all enemies in the zone
            Zone->DespawnAllEnemies();

            // Reset zone state
            Zone->ResetZone();

            UE_LOG(LogTemp, Warning, TEXT("Reset Zone %d - Cleared: %s"),
                ZonePair.Key, Zone->IsZoneCleared() ? TEXT("TRUE") : TEXT("FALSE"));
        }
    }

    // Simple reset: just close all doors (zones will manage locking when activated)
    for (AArenaDoor* Door : AllDoors)
    {
        if (Door)
        {
            Door->CloseDoor();
            Door->SetDoorLocked(false);  // Unlock all doors - zones will lock what they need
            UE_LOG(LogTemp, Warning, TEXT("Reset door %d: closed and unlocked"), Door->GetDoorID());
        }
    }

    // Reset all safe zone corridors
    for (ASafeZoneCorridor* Corridor : AllCorridors)
    {
        if (Corridor)
        {
            // Reset corridor state if needed
            UE_LOG(LogTemp, Warning, TEXT("Reset corridor: %s"), *Corridor->GetName());
        }
    }

    // Reset game state
    CurrentArenaNumber = 0;
    bInCombat = false;
    TotalArenasCleared = 0;

    // Find and respawn all training dummies
    RespawnTrainingDummies();

    // Initialize starting area doors properly
    InitializeStartingArea();

    UE_LOG(LogTemp, Warning, TEXT("=== LEVEL RESET COMPLETE ==="));
}