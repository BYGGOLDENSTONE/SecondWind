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

    if (PlayerCharacter)
    {
        PlayerCharacter->SetActorLocation(SafeZoneLocation);
    }

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

    CleanupCurrentArena();
    SpawnArena(ArenaNumber);

    if (CurrentArena)
    {
        CurrentArena->StartCombat();
    }

    UE_LOG(LogTemp, Warning, TEXT("Transitioned to Arena %d"), ArenaNumber);
}

void AArenaManager::TransitionToSafeZone()
{
    CurrentGamePhase = EGamePhase::IntermediateSafeZone;

    if (PlayerCharacter)
    {
        PlayerCharacter->SetActorLocation(SafeZoneLocation);
    }

    CleanupCurrentArena();
    SaveProgress();

    UE_LOG(LogTemp, Warning, TEXT("Transitioned to safe zone. Total fragments: %d"), TotalFragments);
}

void AArenaManager::OnArenaCompleted(bool bVictory)
{
    if (!bVictory)
    {
        UE_LOG(LogTemp, Warning, TEXT("Player defeated in Arena %d"), CurrentArenaNumber);
        StartGame();
        return;
    }

    if (CurrentArena && CurrentArena->GetCurrentEnemy())
    {
        int32 FragmentReward = CurrentArena->GetCurrentEnemy()->CalculateFragmentReward();
        AddFragments(FragmentReward);
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
    if (!ArenaClass)
    {
        UE_LOG(LogTemp, Error, TEXT("No Arena class set in ArenaManager"));
        return;
    }

    FActorSpawnParameters SpawnParams;
    SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

    CurrentArena = GetWorld()->SpawnActor<AArena>(
        ArenaClass,
        ArenaSpawnLocation,
        FRotator::ZeroRotator,
        SpawnParams
    );

    if (CurrentArena)
    {
        CurrentArena->InitializeArena(ArenaNumber);
    }
}

void AArenaManager::CleanupCurrentArena()
{
    if (CurrentArena)
    {
        CurrentArena->Destroy();
        CurrentArena = nullptr;
    }
}

void AArenaManager::SaveProgress()
{
    UE_LOG(LogTemp, Warning, TEXT("Progress saved: Fragments=%d, Arena=%d"), TotalFragments, CurrentArenaNumber);
}

void AArenaManager::LoadProgress()
{
    UE_LOG(LogTemp, Warning, TEXT("Progress loaded: Fragments=%d, Arena=%d"), TotalFragments, CurrentArenaNumber);
}