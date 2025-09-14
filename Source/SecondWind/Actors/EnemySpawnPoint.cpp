#include "EnemySpawnPoint.h"
#include "ArenaEnemy.h"
#include "TrainingDummy.h"
#include "ArenaZone.h"
#include "Components/ArrowComponent.h"
#include "Components/BillboardComponent.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"

AEnemySpawnPoint::AEnemySpawnPoint()
{
    PrimaryActorTick.bCanEverTick = false;

    DirectionIndicator = CreateDefaultSubobject<UArrowComponent>(TEXT("DirectionIndicator"));
    RootComponent = DirectionIndicator;
    DirectionIndicator->SetArrowColor(FLinearColor::Red);
    DirectionIndicator->ArrowSize = 2.0f;

#if WITH_EDITORONLY_DATA
    EditorSprite = CreateDefaultSubobject<UBillboardComponent>(TEXT("EditorSprite"));
    EditorSprite->SetupAttachment(RootComponent);
    EditorSprite->SetRelativeLocation(FVector(0.0f, 0.0f, 50.0f));
#endif

    ArenaNumber = 1;
    PhaseOverride = -1;
    bIsTrainingDummy = false;
    SpawnedActor = nullptr;
}

void AEnemySpawnPoint::BeginPlay()
{
    Super::BeginPlay();

    RegisterWithZone();
}

void AEnemySpawnPoint::RegisterWithZone()
{
    if (bIsTrainingDummy)
    {
        UE_LOG(LogTemp, Warning, TEXT("Training dummy spawn point - skipping zone registration"));
        return;
    }

    TArray<AActor*> FoundActors;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), AArenaZone::StaticClass(), FoundActors);

    bool bFoundZone = false;
    for (AActor* Actor : FoundActors)
    {
        AArenaZone* Zone = Cast<AArenaZone>(Actor);
        if (Zone && Zone->ZoneNumber == ArenaNumber)
        {
            Zone->AddSpawnPoint(this);
            bFoundZone = true;
            UE_LOG(LogTemp, Warning, TEXT("Spawn point registered with ArenaZone %d"), ArenaNumber);
            break;
        }
    }

    if (!bFoundZone)
    {
        UE_LOG(LogTemp, Warning, TEXT("Spawn point could not find ArenaZone %d"), ArenaNumber);
    }
}

AArenaEnemy* AEnemySpawnPoint::SpawnEnemy()
{
    if (bIsTrainingDummy)
    {
        return nullptr;
    }

    ClearSpawnPoint();

    if (EnemyClass)
    {
        FActorSpawnParameters SpawnParams;
        SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

        AArenaEnemy* SpawnedEnemy = GetWorld()->SpawnActor<AArenaEnemy>(
            EnemyClass,
            GetActorLocation(),
            GetActorRotation(),
            SpawnParams
        );

        if (SpawnedEnemy)
        {
            SpawnedActor = SpawnedEnemy;

            int32 PhasesToSet = GetEffectivePhases();
            if (PhasesToSet > 0)
            {
                SpawnedEnemy->SetPhaseCount(PhasesToSet);
            }

            UE_LOG(LogTemp, Warning, TEXT("Spawned enemy at spawn point for Arena %d with %d phases"),
                ArenaNumber, PhasesToSet);

            return SpawnedEnemy;
        }
    }

    return nullptr;
}

ATrainingDummy* AEnemySpawnPoint::SpawnTrainingDummy()
{
    if (!bIsTrainingDummy)
    {
        return nullptr;
    }

    ClearSpawnPoint();

    if (TrainingDummyClass)
    {
        FActorSpawnParameters SpawnParams;
        SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

        ATrainingDummy* SpawnedDummy = GetWorld()->SpawnActor<ATrainingDummy>(
            TrainingDummyClass,
            GetActorLocation(),
            GetActorRotation(),
            SpawnParams
        );

        if (SpawnedDummy)
        {
            SpawnedActor = SpawnedDummy;
            UE_LOG(LogTemp, Warning, TEXT("Spawned training dummy at spawn point"));
            return SpawnedDummy;
        }
    }

    return nullptr;
}

void AEnemySpawnPoint::ClearSpawnPoint()
{
    if (SpawnedActor && IsValid(SpawnedActor))
    {
        SpawnedActor->Destroy();
        SpawnedActor = nullptr;
    }
}

void AEnemySpawnPoint::SetEnemyPhases(int32 Phases)
{
    PhaseOverride = Phases;
}

int32 AEnemySpawnPoint::GetEffectivePhases() const
{
    if (PhaseOverride > 0)
    {
        return PhaseOverride;
    }

    return FMath::Min(ArenaNumber, 5);
}