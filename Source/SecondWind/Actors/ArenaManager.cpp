#include "ArenaManager.h"
#include "Arena.h"
#include "ArenaEnemy.h"
#include "../SecondWindCharacter.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"

AArenaManager::AArenaManager()
{
    PrimaryActorTick.bCanEverTick = false;
}

void AArenaManager::BeginPlay()
{
    Super::BeginPlay();

    PlayerCharacter = Cast<ASecondWindCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
    LoadProgress();
}

void AArenaManager::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void AArenaManager::StartGame()
{
    CurrentGamePhase = EGamePhase::SafeZone;
    CurrentArenaNumber = 0;

    UE_LOG(LogTemp, Warning, TEXT("Game started in safe zone"));
}

void AArenaManager::TransitionToArena(int32 ArenaNumber)
{
    if (ArenaNumber < 1 || ArenaNumber > MaxArenas)
    {
        UE_LOG(LogTemp, Error, TEXT("Invalid arena number: %d"), ArenaNumber);
        return;
    }

    CurrentArenaNumber = ArenaNumber;
    CurrentGamePhase = EGamePhase::Arena;

    UE_LOG(LogTemp, Warning, TEXT("Arena %d phase started"), ArenaNumber);
}

void AArenaManager::TransitionToSafeZone()
{
    CurrentGamePhase = EGamePhase::IntermediateSafeZone;
    SaveProgress();

    UE_LOG(LogTemp, Warning, TEXT("Safe zone phase. Total fragments: %d"), TotalFragments);
}

void AArenaManager::OnArenaCompleted(bool bVictory)
{
    if (!bVictory)
    {
        UE_LOG(LogTemp, Warning, TEXT("Player defeated in Arena %d"), CurrentArenaNumber);
        return;
    }

    if (CurrentArenaNumber >= MaxArenas)
    {
        CurrentGamePhase = EGamePhase::GameComplete;
        UE_LOG(LogTemp, Warning, TEXT("Game Complete! Total fragments earned: %d"), TotalFragments);
    }
    else
    {
        TransitionToSafeZone();
    }
}

void AArenaManager::AddFragments(int32 Amount)
{
    TotalFragments += Amount;
    UE_LOG(LogTemp, Warning, TEXT("Fragments earned: %d (Total: %d)"), Amount, TotalFragments);
    SaveProgress();
}

void AArenaManager::SpawnArena(int32 ArenaNumber)
{
    UE_LOG(LogTemp, Warning, TEXT("Arena spawning deprecated - using physical room system"));
}

void AArenaManager::CleanupCurrentArena()
{
    UE_LOG(LogTemp, Warning, TEXT("Arena cleanup deprecated - using physical room system"));
}

void AArenaManager::SaveProgress()
{
    UE_LOG(LogTemp, Warning, TEXT("Progress saved: Fragments=%d, Arena=%d"), TotalFragments, CurrentArenaNumber);
}

void AArenaManager::LoadProgress()
{
    UE_LOG(LogTemp, Warning, TEXT("Progress loaded: Fragments=%d, Arena=%d"), TotalFragments, CurrentArenaNumber);
}