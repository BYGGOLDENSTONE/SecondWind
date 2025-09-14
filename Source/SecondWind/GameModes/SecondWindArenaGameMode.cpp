#include "SecondWindArenaGameMode.h"
#include "../Actors/SimplifiedArenaSystem.h"
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

    // Fragments handled by SimplifiedArenaSystem
    UE_LOG(LogTemp, Warning, TEXT("Fragment tracking moved to SimplifiedArenaSystem"));

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
    // Training dummy spawned by SimplifiedArenaSystem
    UE_LOG(LogTemp, Warning, TEXT("Training dummy spawning moved to SimplifiedArenaSystem"));
}

void ASecondWindArenaGameMode::RemoveTrainingDummy()
{
    // Training dummy removal handled by SimplifiedArenaSystem
    UE_LOG(LogTemp, Warning, TEXT("Training dummy removal moved to SimplifiedArenaSystem"));
}

void ASecondWindArenaGameMode::InitializeGameSystems()
{
    if (!SimplifiedArenaSystemClass)
    {
        UE_LOG(LogTemp, Error, TEXT("No SimplifiedArenaSystem class set in GameMode"));
        return;
    }

    FActorSpawnParameters SpawnParams;
    SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

    SimplifiedArenaSystem = GetWorld()->SpawnActor<ASimplifiedArenaSystem>(
        SimplifiedArenaSystemClass,
        FVector::ZeroVector,
        FRotator::ZeroRotator,
        SpawnParams
    );

    if (SimplifiedArenaSystem)
    {
        UE_LOG(LogTemp, Warning, TEXT("Simplified Arena System initialized"));
    }
}

void ASecondWindArenaGameMode::SetupSafeZone()
{
    // Safe zone setup handled by SimplifiedArenaSystem
    UE_LOG(LogTemp, Warning, TEXT("Safe zone setup moved to SimplifiedArenaSystem"));
}