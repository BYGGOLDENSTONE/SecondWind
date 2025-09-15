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
        UE_LOG(LogTemp, Warning, TEXT("Zone %d already cleared, skipping activation"), ZoneNumber);
        return;
    }

    bIsActive = true;

    SpawnEnemies();

    if (EntryDoor)
    {
        UE_LOG(LogTemp, Warning, TEXT("Locking entry door for Zone %d"), ZoneNumber);
        EntryDoor->SetDoorLocked(true);
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("Zone %d has no EntryDoor"), ZoneNumber);
    }

    if (ExitDoor)
    {
        UE_LOG(LogTemp, Warning, TEXT("Locking exit door for Zone %d"), ZoneNumber);
        ExitDoor->SetDoorLocked(true);
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("Zone %d has no ExitDoor"), ZoneNumber);
    }

    UE_LOG(LogTemp, Warning, TEXT("ArenaZone %d activated with %d enemies"), ZoneNumber, ActiveEnemies.Num());
}

void AArenaZone::DeactivateZone()
{
    bIsActive = false;
    ClearEnemies();

    if (EntryDoor)
    {
        EntryDoor->SetDoorLocked(false);
    }

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

    for (AEnemySpawnPoint* SpawnPoint : SpawnPoints)
    {
        if (SpawnPoint)
        {
            AArenaEnemy* SpawnedEnemy = SpawnPoint->SpawnEnemy();
            if (SpawnedEnemy)
            {
                // Add to active enemies list
                ActiveEnemies.Add(SpawnedEnemy);

                // Set the owner zone - CRITICAL for fragment rewards and door unlocking
                SpawnedEnemy->SetOwnerZone(this);

                // Verify the connection was made
                UE_LOG(LogTemp, Warning, TEXT("Spawned enemy for Zone %d"), ZoneNumber);
                UE_LOG(LogTemp, Warning, TEXT("  - Enemy phases: %d"), SpawnedEnemy->GetMaxPhases());
                UE_LOG(LogTemp, Warning, TEXT("  - OwnerZone set: %s"), SpawnedEnemy->GetOwnerZone() ? TEXT("YES") : TEXT("NO"));
                UE_LOG(LogTemp, Warning, TEXT("  - Has Controller: %s"), SpawnedEnemy->GetController() ? TEXT("YES") : TEXT("NO"));
                UE_LOG(LogTemp, Warning, TEXT("  - Has Movement Component: %s"),
                    SpawnedEnemy->GetCharacterMovement() ? TEXT("YES") : TEXT("NO"));
            }
            else
            {
                UE_LOG(LogTemp, Error, TEXT("Failed to spawn enemy for Zone %d"), ZoneNumber);
            }
        }
    }

    UE_LOG(LogTemp, Warning, TEXT("Total active enemies in Zone %d: %d"), ZoneNumber, ActiveEnemies.Num());
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

        if (ExitDoor)
        {
            UE_LOG(LogTemp, Warning, TEXT("Unlocking exit door for Zone %d"), ZoneNumber);
            ExitDoor->SetDoorLocked(false);
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("ERROR: Zone %d has no ExitDoor reference!"), ZoneNumber);
        }

        if (LayoutManager)
        {
            LayoutManager->OnZoneCleared(ZoneNumber);
        }

        UE_LOG(LogTemp, Warning, TEXT("ArenaZone %d cleared!"), ZoneNumber);
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("Zone %d NOT cleared yet (enemies remaining or not active)"), ZoneNumber);
    }
}