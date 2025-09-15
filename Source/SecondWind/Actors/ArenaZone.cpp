#include "ArenaZone.h"
#include "Components/BoxComponent.h"
#include "EnemySpawnPoint.h"
#include "ArenaDoor.h"
#include "ArenaEnemy.h"
#include "LevelLayoutManager.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"
#include "SecondWind/SecondWindCharacter.h"
#include "SecondWind/Components/FragmentComponent.h"

AArenaZone::AArenaZone()
{
    PrimaryActorTick.bCanEverTick = false;

    ZoneBounds = CreateDefaultSubobject<UBoxComponent>(TEXT("ZoneBounds"));
    RootComponent = ZoneBounds;
    ZoneBounds->SetBoxExtent(FVector(1000.0f, 1000.0f, 500.0f));
    ZoneBounds->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
    ZoneBounds->SetCollisionResponseToAllChannels(ECR_Ignore);
    ZoneBounds->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);

    ZoneNumber = 1;
    ZoneName = TEXT("Arena");
    bIsCleared = false;
    bIsActive = false;
    LayoutManager = nullptr;
}

void AArenaZone::BeginPlay()
{
    Super::BeginPlay();

    // Find the manager but don't register (manager will discover us)
    TArray<AActor*> FoundActors;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), ALevelLayoutManager::StaticClass(), FoundActors);
    if (FoundActors.Num() > 0)
    {
        LayoutManager = Cast<ALevelLayoutManager>(FoundActors[0]);
    }

    if (ZoneBounds)
    {
        ZoneBounds->OnComponentBeginOverlap.AddDynamic(this, &AArenaZone::OnZoneBoundsBeginOverlap);
    }

    // Simple validation - we just need spawn points for combat zones
    if (ZoneNumber > 0 && SpawnPoints.Num() == 0)
    {
        UE_LOG(LogTemp, Warning, TEXT("Zone %d has no spawn points - enemies won't spawn!"), ZoneNumber);
    }
}

void AArenaZone::RegisterWithManager()
{
    // This is now called by the manager during discovery
    // No need to self-register
}

void AArenaZone::ActivateZone()
{
    UE_LOG(LogTemp, Warning, TEXT("=== ACTIVATING ZONE %d ==="), ZoneNumber);

    if (bIsActive)
    {
        UE_LOG(LogTemp, Warning, TEXT("Zone %d already active, skipping activation"), ZoneNumber);
        return;
    }

    if (bIsCleared)
    {
        UE_LOG(LogTemp, Error, TEXT("ERROR: Zone %d marked as cleared but trying to activate! Resetting zone."), ZoneNumber);
        ResetZone();
    }

    bIsActive = true;

    // Spawn enemies
    SpawnEnemies();

    // SIMPLE APPROACH: Find and lock ALL nearby doors
    TArray<AActor*> AllDoors;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), AArenaDoor::StaticClass(), AllDoors);

    float LockRadius = 5000.0f; // Increased to 50 meters to catch more doors
    FVector ZoneCenter = GetActorLocation();
    LockedDoors.Empty(); // Clear previous list

    UE_LOG(LogTemp, Warning, TEXT("Zone %d: Checking %d doors for locking (radius: %.0f)"),
        ZoneNumber, AllDoors.Num(), LockRadius);

    for (AActor* Actor : AllDoors)
    {
        if (AArenaDoor* Door = Cast<AArenaDoor>(Actor))
        {
            float Distance = FVector::Dist(Door->GetActorLocation(), ZoneCenter);
            if (Distance <= LockRadius)
            {
                // Lock this door for combat
                Door->SetDoorLocked(true);
                LockedDoors.Add(Door); // Remember it for unlocking later
                UE_LOG(LogTemp, Warning, TEXT("LOCKED door ID %d '%s' for Zone %d combat (distance: %.0f)"),
                    Door->GetDoorID(), *Door->GetName(), ZoneNumber, Distance);
            }
            else
            {
                UE_LOG(LogTemp, Warning, TEXT("SKIPPED door ID %d '%s' - too far from Zone %d (distance: %.0f)"),
                    Door->GetDoorID(), *Door->GetName(), ZoneNumber, Distance);
            }
        }
    }

    if (ActiveEnemies.Num() > 0)
    {
        UE_LOG(LogTemp, Warning, TEXT("Zone %d: Combat started with %d enemies, %d doors locked"),
            ZoneNumber, ActiveEnemies.Num(), LockedDoors.Num());
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("ERROR: Zone %d activated but NO ENEMIES SPAWNED!"), ZoneNumber);
    }
}

void AArenaZone::DeactivateZone()
{
    bIsActive = false;
    ClearEnemies();

    // Doors are managed by the zone locking system now
    UE_LOG(LogTemp, Warning, TEXT("ArenaZone %d deactivated"), ZoneNumber);
}

void AArenaZone::OnEnemyDefeated(AArenaEnemy* Enemy)
{
    UE_LOG(LogTemp, Warning, TEXT("=== ZONE %d: ENEMY DEFEATED NOTIFICATION ==="), ZoneNumber);

    if (!Enemy)
    {
        UE_LOG(LogTemp, Error, TEXT("ERROR: Enemy is NULL"));
        return;
    }

    if (!ActiveEnemies.Contains(Enemy))
    {
        UE_LOG(LogTemp, Error, TEXT("ERROR: Enemy not in ActiveEnemies list for Zone %d"), ZoneNumber);
        return;
    }

    // Award fragments to player
    int32 FragmentReward = Enemy->CalculateFragmentReward();
    UE_LOG(LogTemp, Warning, TEXT("Fragment reward calculated: %d"), FragmentReward);

    if (ASecondWindCharacter* PlayerCharacter = Cast<ASecondWindCharacter>(
        UGameplayStatics::GetPlayerCharacter(GetWorld(), 0)))
    {
        if (UFragmentComponent* FragmentComp = PlayerCharacter->FindComponentByClass<UFragmentComponent>())
        {
            FragmentComp->AddFragments(FragmentReward);
            UE_LOG(LogTemp, Warning, TEXT("SUCCESS: Player earned %d fragments from enemy in Zone %d"),
                FragmentReward, ZoneNumber);
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("ERROR: Player has no FragmentComponent"));
        }
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("ERROR: Could not find player character"));
    }

    ActiveEnemies.Remove(Enemy);
    UE_LOG(LogTemp, Warning, TEXT("Enemy removed from ActiveEnemies. Remaining: %d"), ActiveEnemies.Num());

    CheckZoneClearStatus();
}

void AArenaZone::AddSpawnPoint(AEnemySpawnPoint* SpawnPoint)
{
    if (SpawnPoint && !SpawnPoints.Contains(SpawnPoint))
    {
        SpawnPoints.Add(SpawnPoint);
    }
}

void AArenaZone::SpawnEnemies()
{
    UE_LOG(LogTemp, Warning, TEXT("=== SPAWNING ENEMIES FOR ZONE %d ==="), ZoneNumber);
    UE_LOG(LogTemp, Warning, TEXT("Number of spawn points: %d"), SpawnPoints.Num());

    // Clear any existing enemies first (in case of reset)
    if (ActiveEnemies.Num() > 0)
    {
        UE_LOG(LogTemp, Warning, TEXT("Clearing %d existing enemies before spawning new ones"), ActiveEnemies.Num());
        DespawnAllEnemies();
    }

    for (AEnemySpawnPoint* SpawnPoint : SpawnPoints)
    {
        if (SpawnPoint)
        {
            UE_LOG(LogTemp, Warning, TEXT("Attempting to spawn enemy from spawn point at %s"),
                *SpawnPoint->GetActorLocation().ToString());

            AArenaEnemy* SpawnedEnemy = SpawnPoint->SpawnEnemy();
            if (SpawnedEnemy)
            {
                // Add to active enemies list
                ActiveEnemies.Add(SpawnedEnemy);

                // Set the owner zone - CRITICAL for fragment rewards and door unlocking
                SpawnedEnemy->SetOwnerZone(this);

                // Verify the connection was made
                UE_LOG(LogTemp, Warning, TEXT("SUCCESS: Spawned enemy for Zone %d"), ZoneNumber);
                UE_LOG(LogTemp, Warning, TEXT("  - Enemy phases: %d"), SpawnedEnemy->GetMaxPhases());
                UE_LOG(LogTemp, Warning, TEXT("  - OwnerZone set: %s"), SpawnedEnemy->GetOwnerZone() ? TEXT("YES") : TEXT("NO"));
                UE_LOG(LogTemp, Warning, TEXT("  - Has Controller: %s"), SpawnedEnemy->GetController() ? TEXT("YES") : TEXT("NO"));
                UE_LOG(LogTemp, Warning, TEXT("  - Has Movement Component: %s"),
                    SpawnedEnemy->GetCharacterMovement() ? TEXT("YES") : TEXT("NO"));
            }
            else
            {
                UE_LOG(LogTemp, Error, TEXT("FAILED to spawn enemy for Zone %d from spawn point"), ZoneNumber);
            }
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("NULL spawn point in Zone %d!"), ZoneNumber);
        }
    }

    UE_LOG(LogTemp, Warning, TEXT("=== SPAWN COMPLETE: Total active enemies in Zone %d: %d ==="),
        ZoneNumber, ActiveEnemies.Num());
}

void AArenaZone::ClearEnemies()
{
    for (AArenaEnemy* Enemy : ActiveEnemies)
    {
        if (Enemy && IsValid(Enemy))
        {
            Enemy->Destroy();
        }
    }
    ActiveEnemies.Empty();
}

void AArenaZone::OnZoneBoundsBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
    UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    if (ASecondWindCharacter* Player = Cast<ASecondWindCharacter>(OtherActor))
    {
        if (!bIsActive && !bIsCleared && LayoutManager)
        {
            LayoutManager->OnPlayerEnterZone(ZoneNumber);
        }
    }
}

void AArenaZone::CheckZoneClearStatus()
{
    UE_LOG(LogTemp, Warning, TEXT("=== CHECKING ZONE %d CLEAR STATUS ==="), ZoneNumber);
    UE_LOG(LogTemp, Warning, TEXT("Active enemies: %d, IsActive: %s"),
        ActiveEnemies.Num(), bIsActive ? TEXT("TRUE") : TEXT("FALSE"));

    if (ActiveEnemies.Num() == 0 && bIsActive)
    {
        bIsCleared = true;
        bIsActive = false;

        UE_LOG(LogTemp, Warning, TEXT("Zone %d is now CLEARED!"), ZoneNumber);

        // SIMPLE: Unlock ALL doors we locked earlier
        for (AArenaDoor* Door : LockedDoors)
        {
            if (Door && IsValid(Door))
            {
                Door->SetDoorLocked(false);
                UE_LOG(LogTemp, Warning, TEXT("UNLOCKED door ID %d '%s' - Zone %d combat complete"),
                    Door->GetDoorID(), *Door->GetName(), ZoneNumber);
            }
        }

        UE_LOG(LogTemp, Warning, TEXT("Zone %d: All %d doors unlocked. Player can now proceed."),
            ZoneNumber, LockedDoors.Num());

        // Clear the list
        LockedDoors.Empty();

        if (LayoutManager)
        {
            LayoutManager->OnZoneCleared(ZoneNumber);
        }
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("Zone %d NOT cleared yet (enemies remaining or not active)"), ZoneNumber);
    }
}

void AArenaZone::ResetZone()
{
    // Reset zone state
    bIsCleared = false;
    bIsActive = false;

    // Clear the active enemies list (they should already be despawned)
    ActiveEnemies.Empty();

    // Clear the locked doors list
    LockedDoors.Empty();

    UE_LOG(LogTemp, Warning, TEXT("Zone %d reset - cleared: %s, active: %s"),
        ZoneNumber,
        bIsCleared ? TEXT("TRUE") : TEXT("FALSE"),
        bIsActive ? TEXT("TRUE") : TEXT("FALSE"));
}

void AArenaZone::DespawnAllEnemies()
{
    UE_LOG(LogTemp, Warning, TEXT("Despawning all enemies in Zone %d (%d enemies)"), ZoneNumber, ActiveEnemies.Num());

    // Destroy all active enemies
    for (int32 i = ActiveEnemies.Num() - 1; i >= 0; i--)
    {
        if (AArenaEnemy* Enemy = ActiveEnemies[i])
        {
            if (IsValid(Enemy))
            {
                Enemy->Destroy();
                UE_LOG(LogTemp, Warning, TEXT("Destroyed enemy in Zone %d"), ZoneNumber);
            }
        }
    }

    // Clear the array
    ActiveEnemies.Empty();
}

