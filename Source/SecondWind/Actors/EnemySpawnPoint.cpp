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

    // Always clear any existing reference first
    ClearSpawnPoint();

    // Extra safety: Make absolutely sure we don't have a spawned actor
    if (SpawnedActor)
    {
        UE_LOG(LogTemp, Warning, TEXT("SpawnPoint still had SpawnedActor reference after ClearSpawnPoint! Force clearing."));
        SpawnedActor = nullptr;
    }

    if (EnemyClass)
    {
        // Use deferred spawning to properly initialize the enemy
        FActorSpawnParameters SpawnParams;
        SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
        SpawnParams.bDeferConstruction = true;  // Defer construction so we can set properties first

        AArenaEnemy* SpawnedEnemy = GetWorld()->SpawnActor<AArenaEnemy>(
            EnemyClass,
            GetActorLocation(),
            GetActorRotation(),
            SpawnParams
        );

        if (SpawnedEnemy)
        {
            // Set properties BEFORE finishing spawn
            SpawnedActor = SpawnedEnemy;

            // Finish spawning the actor - this will call BeginPlay
            SpawnedEnemy->FinishSpawning(GetActorTransform());

            // Initialize the enemy AFTER BeginPlay has been called
            SpawnedEnemy->InitializeEnemy(ArenaNumber);

            // Set the spawn point reference so the enemy can notify us when it dies
            SpawnedEnemy->SetSpawnPoint(this);

            // Override phases if needed
            int32 PhasesToSet = GetEffectivePhases();
            if (PhaseOverride > 0 && PhasesToSet != ArenaNumber)
            {
                SpawnedEnemy->SetPhaseCount(PhasesToSet);
            }

            // Force the enemy to possess its AI controller and start moving
            SpawnedEnemy->SpawnDefaultController();

            UE_LOG(LogTemp, Warning, TEXT("Spawned enemy at spawn point for Arena %d with %d phases"),
                ArenaNumber, PhasesToSet);
            UE_LOG(LogTemp, Warning, TEXT("Enemy controller: %s"),
                SpawnedEnemy->GetController() ? TEXT("SET") : TEXT("NULL"));

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
    if (SpawnedActor)
    {
        if (IsValid(SpawnedActor))
        {
            UE_LOG(LogTemp, Warning, TEXT("Spawn point destroying existing actor: %s"), *SpawnedActor->GetName());
            SpawnedActor->Destroy();
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("Spawn point had invalid/destroyed actor reference - clearing"));
        }
        // Always clear the reference, whether the actor was valid or not
        SpawnedActor = nullptr;
    }
}

void AEnemySpawnPoint::ResetSpawnPoint()
{
    // Clear any existing spawned actor reference
    if (SpawnedActor)
    {
        UE_LOG(LogTemp, Warning, TEXT("Spawn point clearing reference to: %s (Arena %d)"),
            IsValid(SpawnedActor) ? *SpawnedActor->GetName() : TEXT("invalid actor"), ArenaNumber);
    }
    SpawnedActor = nullptr;
    UE_LOG(LogTemp, Warning, TEXT("Spawn point reset for Arena %d - ready to spawn new enemy"), ArenaNumber);
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

void AEnemySpawnPoint::OnSpawnedEnemyDied()
{
    UE_LOG(LogTemp, Warning, TEXT("Spawn point notified that enemy died - clearing reference (Arena %d)"), ArenaNumber);
    SpawnedActor = nullptr;
}

bool AEnemySpawnPoint::HasSpawnedEnemy() const
{
    return SpawnedActor != nullptr && IsValid(SpawnedActor);
}