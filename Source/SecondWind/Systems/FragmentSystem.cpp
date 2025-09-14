#include "FragmentSystem.h"
#include "SecondWind/SaveGame/SecondWindSaveGame.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/Engine.h"

void UFragmentSystem::Initialize(FSubsystemCollectionBase& Collection)
{
    Super::Initialize(Collection);

    // Start fresh every game launch - no loading from disk
    CurrentFragments = 0;

    UE_LOG(LogTemp, Warning, TEXT("FragmentSystem initialized fresh with 0 fragments (new game session)"));
}

void UFragmentSystem::Deinitialize()
{
    // Don't save on shutdown - all progress lost when game closes
    UE_LOG(LogTemp, Warning, TEXT("FragmentSystem shutting down - progress will be lost"));

    Super::Deinitialize();
}

void UFragmentSystem::AddFragments(int32 Amount)
{
    if (Amount <= 0) return;

    CurrentFragments += Amount;
    OnFragmentSystemChanged.Broadcast(CurrentFragments);

    // No saving - only in memory during session
    UE_LOG(LogTemp, Warning, TEXT("Added %d fragments. Total: %d (session only)"), Amount, CurrentFragments);
}

bool UFragmentSystem::SpendFragments(int32 Amount)
{
    if (Amount <= 0 || CurrentFragments < Amount)
    {
        return false;
    }

    CurrentFragments -= Amount;
    OnFragmentSystemChanged.Broadcast(CurrentFragments);

    // No saving - only in memory during session
    UE_LOG(LogTemp, Warning, TEXT("Spent %d fragments. Remaining: %d (session only)"), Amount, CurrentFragments);
    return true;
}

void UFragmentSystem::SaveFragments()
{
    // No longer saves to disk - only keeps in memory for run resets
    UE_LOG(LogTemp, Warning, TEXT("Fragment state maintained in memory: %d"), CurrentFragments);
}

void UFragmentSystem::LoadFragments()
{
    // No longer loads from disk - fragments start at 0 each game launch
    // This function is kept for potential run reset functionality
    OnFragmentSystemChanged.Broadcast(CurrentFragments);
    UE_LOG(LogTemp, Warning, TEXT("Fragments ready for new run: %d"), CurrentFragments);
}

void UFragmentSystem::UpdateSaveGame()
{
    SaveFragments();
}