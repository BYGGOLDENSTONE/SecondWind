#include "ArenaZone.h"
#include "Components/BoxComponent.h"
#include "EnemySpawnPoint.h"
#include "ArenaDoor.h"
#include "ArenaEnemy.h"
#include "LevelLayoutManager.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"
#include "SecondWind/SecondWindCharacter.h"

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
    if (bIsActive || bIsCleared)
    {
        return;
    }

    bIsActive = true;

    SpawnEnemies();

    if (EntryDoor)
    {
        EntryDoor->SetDoorLocked(true);
    }

    if (ExitDoor)
    {
        ExitDoor->SetDoorLocked(true);
    }

    UE_LOG(LogTemp, Warning, TEXT("ArenaZone %d activated"), ZoneNumber);
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
    if (Enemy && ActiveEnemies.Contains(Enemy))
    {
        ActiveEnemies.Remove(Enemy);
        CheckZoneClearStatus();
    }
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
    for (AEnemySpawnPoint* SpawnPoint : SpawnPoints)
    {
        if (SpawnPoint)
        {
            AArenaEnemy* SpawnedEnemy = SpawnPoint->SpawnEnemy();
            if (SpawnedEnemy)
            {
                ActiveEnemies.Add(SpawnedEnemy);
                SpawnedEnemy->SetOwnerZone(this);
            }
        }
    }
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
    if (ActiveEnemies.Num() == 0 && bIsActive)
    {
        bIsCleared = true;
        bIsActive = false;

        if (ExitDoor)
        {
            ExitDoor->SetDoorLocked(false);
        }

        if (LayoutManager)
        {
            LayoutManager->OnZoneCleared(ZoneNumber);
        }

        UE_LOG(LogTemp, Warning, TEXT("ArenaZone %d cleared!"), ZoneNumber);
    }
}