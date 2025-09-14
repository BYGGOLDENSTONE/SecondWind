#include "SecondWindArenaGameMode.h"
#include "../Actors/ArenaManager.h"
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
            PlayerCharacter->SetActorLocation(SafeZoneSpawnLocation);
            UE_LOG(LogTemp, Warning, TEXT("Player spawned in safe zone"));
        }
    }
}

void ASecondWindArenaGameMode::StartArenaSequence()
{
    if (bInSafeZone)
    {
        RemoveTrainingDummy();
        bInSafeZone = false;
        CurrentArenaProgress = 1;
        TransitionToArena(CurrentArenaProgress);
    }
}

void ASecondWindArenaGameMode::TransitionToArena(int32 ArenaNumber)
{
    if (!ArenaManager)
    {
        UE_LOG(LogTemp, Error, TEXT("ArenaManager not initialized"));
        return;
    }

    bInSafeZone = false;
    CurrentArenaProgress = ArenaNumber;
    ArenaManager->TransitionToArena(ArenaNumber);

    UE_LOG(LogTemp, Warning, TEXT("GameMode: Transitioning to Arena %d"), ArenaNumber);
}

void ASecondWindArenaGameMode::TransitionToSafeZone()
{
    if (!ArenaManager)
    {
        return;
    }

    bInSafeZone = true;
    ArenaManager->TransitionToSafeZone();
    SpawnTrainingDummy();

    UE_LOG(LogTemp, Warning, TEXT("GameMode: Returned to safe zone after Arena %d"), CurrentArenaProgress);
}

void ASecondWindArenaGameMode::OnPlayerVictory(int32 ArenaNumber, int32 FragmentsEarned)
{
    UE_LOG(LogTemp, Warning, TEXT("GameMode: Player victorious in Arena %d! Earned %d fragments"),
        ArenaNumber, FragmentsEarned);

    // Add fragments to both player and arena manager
    if (PlayerCharacter)
    {
        if (UFragmentComponent* FragmentComp = PlayerCharacter->FindComponentByClass<UFragmentComponent>())
        {
            FragmentComp->AddFragments(FragmentsEarned);
        }
    }

    if (ArenaManager)
    {
        ArenaManager->AddFragments(FragmentsEarned);
    }

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
    if (TrainingDummy)
    {
        return;
    }

    if (!TrainingDummyClass)
    {
        UE_LOG(LogTemp, Warning, TEXT("No TrainingDummy class set in GameMode"));
        return;
    }

    FActorSpawnParameters SpawnParams;
    SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

    TrainingDummy = GetWorld()->SpawnActor<ATrainingDummy>(
        TrainingDummyClass,
        TrainingDummySpawnLocation,
        FRotator(0, -90, 0),
        SpawnParams
    );

    if (TrainingDummy)
    {
        UE_LOG(LogTemp, Warning, TEXT("Training dummy spawned in safe zone"));
    }
}

void ASecondWindArenaGameMode::RemoveTrainingDummy()
{
    if (TrainingDummy)
    {
        TrainingDummy->Destroy();
        TrainingDummy = nullptr;
        UE_LOG(LogTemp, Warning, TEXT("Training dummy removed"));
    }
}

void ASecondWindArenaGameMode::InitializeGameSystems()
{
    if (!ArenaManagerClass)
    {
        UE_LOG(LogTemp, Error, TEXT("No ArenaManager class set in GameMode"));
        return;
    }

    FActorSpawnParameters SpawnParams;
    SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

    ArenaManager = GetWorld()->SpawnActor<AArenaManager>(
        ArenaManagerClass,
        FVector::ZeroVector,
        FRotator::ZeroRotator,
        SpawnParams
    );

    if (ArenaManager)
    {
        ArenaManager->StartGame();
        UE_LOG(LogTemp, Warning, TEXT("Arena Manager initialized"));
    }
}

void ASecondWindArenaGameMode::SetupSafeZone()
{
    SpawnTrainingDummy();
    UE_LOG(LogTemp, Warning, TEXT("Safe zone setup complete"));
}