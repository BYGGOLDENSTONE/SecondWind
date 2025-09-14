#include "SecondWindArenaGameMode.h"
#include "../Actors/LevelLayoutManager.h"
#include "../Actors/ArenaZone.h"
#include "../Actors/TrainingDummy.h"
#include "../SecondWindCharacter.h"
#include "../Components/FragmentComponent.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"

ASecondWindArenaGameMode::ASecondWindArenaGameMode()
{
    DefaultPawnClass = ASecondWindCharacter::StaticClass();
}

void ASecondWindArenaGameMode::BeginPlay()
{
    Super::BeginPlay();
    InitializeGameSystems();
    SetupSafeZone();
}

void ASecondWindArenaGameMode::PostLogin(APlayerController* NewPlayer)
{
    Super::PostLogin(NewPlayer);

    if (APawn* PlayerPawn = NewPlayer->GetPawn())
    {
        PlayerCharacter = Cast<ASecondWindCharacter>(PlayerPawn);
        if (PlayerCharacter)
        {
            // Spawn in Zone 0 (Starting Hub) using LevelLayoutManager
            if (LevelLayoutManager)
            {
                if (AArenaZone* StartingHub = LevelLayoutManager->GetZone(0))
                {
                    FVector HubLocation = StartingHub->GetActorLocation();
                    PlayerCharacter->SetActorLocation(HubLocation);
                    UE_LOG(LogTemp, Warning, TEXT("Player spawned in Starting Hub (Zone 0)"));
                }
                else
                {
                    // Fallback to default spawn location
                    PlayerCharacter->SetActorLocation(SafeZoneSpawnLocation);
                    UE_LOG(LogTemp, Warning, TEXT("Player spawned at default safe zone (no Starting Hub found)"));
                }
            }
            else
            {
                // Legacy system spawn location
                PlayerCharacter->SetActorLocation(SafeZoneSpawnLocation);
                UE_LOG(LogTemp, Warning, TEXT("Player spawned in safe zone (legacy system)"));
            }
        }
    }
}

void ASecondWindArenaGameMode::StartArenaSequence()
{
    // Deprecated - physical room system handles progression
    UE_LOG(LogTemp, Warning, TEXT("StartArenaSequence deprecated - use physical doors"));
}

void ASecondWindArenaGameMode::TransitionToArena(int32 ArenaNumber)
{
    // Deprecated - physical room system handles transitions
    CurrentArenaProgress = ArenaNumber;
    UE_LOG(LogTemp, Warning, TEXT("TransitionToArena deprecated - use physical doors"));
}

void ASecondWindArenaGameMode::TransitionToSafeZone()
{
    // Deprecated - physical room system handles safe zones
    bInSafeZone = true;
    UE_LOG(LogTemp, Warning, TEXT("TransitionToSafeZone deprecated - use physical corridors"));
}

void ASecondWindArenaGameMode::OnPlayerVictory(int32 ArenaNumber, int32 FragmentsEarned)
{
    UE_LOG(LogTemp, Warning, TEXT("GameMode: Player victorious in Arena %d! Earned %d fragments"),
        ArenaNumber, FragmentsEarned);

    // Fragments handled by LevelLayoutManager zones
    UE_LOG(LogTemp, Warning, TEXT("Fragment tracking handled by zone system"));

    if (ArenaNumber >= 5)
    {
        UE_LOG(LogTemp, Warning, TEXT("GAME COMPLETE! All 5 arenas conquered!"));
    }
    else
    {
        TransitionToSafeZone();
    }
}

void ASecondWindArenaGameMode::OnPlayerDefeat()
{
    UE_LOG(LogTemp, Warning, TEXT("GameMode: Player defeated in Arena %d"), CurrentArenaProgress);

    CurrentArenaProgress = 0;
    bInSafeZone = true;

    if (PlayerCharacter)
    {
        PlayerCharacter->SetActorLocation(SafeZoneSpawnLocation);
    }

    SpawnTrainingDummy();
}

void ASecondWindArenaGameMode::SpawnTrainingDummy()
{
    // Training dummy should be placed manually in editor
    UE_LOG(LogTemp, Warning, TEXT("Training dummy should be placed manually in editor"));
}

void ASecondWindArenaGameMode::RemoveTrainingDummy()
{
    // Training dummy removal not needed with manual placement
    UE_LOG(LogTemp, Warning, TEXT("Training dummy removal not needed with manual placement"));
}

void ASecondWindArenaGameMode::InitializeGameSystems()
{
    // Always use LevelLayoutManager (Phase 5C system)
    TArray<AActor*> FoundManagers;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), ALevelLayoutManager::StaticClass(), FoundManagers);

    if (FoundManagers.Num() > 0)
    {
        LevelLayoutManager = Cast<ALevelLayoutManager>(FoundManagers[0]);
        UE_LOG(LogTemp, Warning, TEXT("Using pre-placed LevelLayoutManager"));
    }
    else if (LevelLayoutManagerClass)
    {
        FActorSpawnParameters SpawnParams;
        SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

        LevelLayoutManager = GetWorld()->SpawnActor<ALevelLayoutManager>(
            LevelLayoutManagerClass,
            FVector::ZeroVector,
            FRotator::ZeroRotator,
            SpawnParams
        );

        if (LevelLayoutManager)
        {
            UE_LOG(LogTemp, Warning, TEXT("Spawned LevelLayoutManager"));
        }
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("No LevelLayoutManager found or class set"));
    }
}

void ASecondWindArenaGameMode::SetupSafeZone()
{
    // Safe zones are pre-placed in the level as corridors
    UE_LOG(LogTemp, Warning, TEXT("Safe zones are pre-placed in the level"));
}