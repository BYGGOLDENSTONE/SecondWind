#include "MemorySystem.h"
#include "FragmentSystem.h"
#include "SecondWind/SaveGame/SecondWindSaveGame.h"
#include "SecondWind/Components/HackComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/Engine.h"

void UMemorySystem::Initialize(FSubsystemCollectionBase& Collection)
{
    Super::Initialize(Collection);

    InitializeMemoryDatabase();
    // Start fresh every game launch - no loading from disk
    UnlockedMemories.Empty();

    UE_LOG(LogTemp, Warning, TEXT("MemorySystem initialized fresh with 0 memories (new game session)"));
}

void UMemorySystem::Deinitialize()
{
    // Don't save on shutdown - all progress lost when game closes
    UE_LOG(LogTemp, Warning, TEXT("MemorySystem shutting down - progress will be lost"));
    Super::Deinitialize();
}

void UMemorySystem::InitializeMemoryDatabase()
{
    // New memory: Tactical Analysis (Weak Side)
    FMemoryData WeakSide;
    WeakSide.MemoryID = TEXT("MEMORY_WEAK_SIDE");
    WeakSide.DisplayName = TEXT("Tactical Analysis");
    WeakSide.Description = TEXT("Reveals enemy weak points for 1.5x damage and knockback");
    WeakSide.FragmentCost = 7;
    WeakSide.MemoryType = EMemoryType::WeakSide;
    WeakSide.EffectValue = 1.5f;
    AllMemories.Add(WeakSide.MemoryID, WeakSide);
}

bool UMemorySystem::UnlockMemory(const FString& MemoryID)
{
    if (IsMemoryUnlocked(MemoryID))
    {
        UE_LOG(LogTemp, Warning, TEXT("Memory %s already unlocked"), *MemoryID);
        return false;
    }

    FMemoryData* MemoryData = AllMemories.Find(MemoryID);
    if (!MemoryData)
    {
        UE_LOG(LogTemp, Error, TEXT("Memory %s not found"), *MemoryID);
        return false;
    }

    UFragmentSystem* FragmentSystem = GetGameInstance()->GetSubsystem<UFragmentSystem>();
    if (!FragmentSystem)
    {
        UE_LOG(LogTemp, Error, TEXT("FragmentSystem not found"));
        return false;
    }

    if (!FragmentSystem->SpendFragments(MemoryData->FragmentCost))
    {
        UE_LOG(LogTemp, Warning, TEXT("Not enough fragments for memory %s (Cost: %d)"),
            *MemoryID, MemoryData->FragmentCost);
        return false;
    }

    UnlockedMemories.Add(MemoryID);
    OnMemoryUnlocked.Broadcast(MemoryID);
    // No saving to disk - only in memory during session

    UE_LOG(LogTemp, Warning, TEXT("Memory unlocked: %s (session only)"), *MemoryData->DisplayName);
    return true;
}

bool UMemorySystem::IsMemoryUnlocked(const FString& MemoryID) const
{
    return UnlockedMemories.Contains(MemoryID);
}

TArray<FMemoryData> UMemorySystem::GetAvailableMemories() const
{
    TArray<FMemoryData> AvailableMemories;
    for (const auto& Memory : AllMemories)
    {
        if (!IsMemoryUnlocked(Memory.Key))
        {
            AvailableMemories.Add(Memory.Value);
        }
    }
    return AvailableMemories;
}

FMemoryData UMemorySystem::GetMemoryData(const FString& MemoryID) const
{
    const FMemoryData* Data = AllMemories.Find(MemoryID);
    return Data ? *Data : FMemoryData();
}

void UMemorySystem::ApplyMemoryEffects(AActor* Target)
{
    if (!Target) return;

    for (const FString& MemoryID : UnlockedMemories)
    {
        const FMemoryData* MemoryData = AllMemories.Find(MemoryID);
        if (!MemoryData) continue;

        switch (MemoryData->MemoryType)
        {
            case EMemoryType::WeakSide:
            {
                // Weak side is activated per-enemy when they spawn
                // This is handled in enemy initialization
                UE_LOG(LogTemp, Warning, TEXT("Tactical Analysis memory active - enemies will show weak sides"));
                break;
            }
            case EMemoryType::HackReduction:
            {
                if (UHackComponent* HackComp = Target->FindComponentByClass<UHackComponent>())
                {
                    HackComp->SetRequiredCounters(6 - FMath::RoundToInt(MemoryData->EffectValue));
                    UE_LOG(LogTemp, Warning, TEXT("Applied Hack Reduction: New requirement = %d"),
                        6 - FMath::RoundToInt(MemoryData->EffectValue));
                }
                break;
            }
            case EMemoryType::AttackBoost:
            {
                break;
            }
            case EMemoryType::DefenseBoost:
            {
                break;
            }
            default:
                break;
        }
    }
}

int32 UMemorySystem::GetHackCounterRequirement() const
{
    int32 BaseRequirement = 6;

    if (IsMemoryUnlocked(TEXT("MEMORY_HACK_REDUCTION")))
    {
        const FMemoryData* MemoryData = AllMemories.Find(TEXT("MEMORY_HACK_REDUCTION"));
        if (MemoryData)
        {
            BaseRequirement -= FMath::RoundToInt(MemoryData->EffectValue);
        }
    }

    return FMath::Max(1, BaseRequirement);
}

void UMemorySystem::SaveMemories()
{
    // No longer saves to disk - only keeps in memory for run resets
    UE_LOG(LogTemp, Warning, TEXT("Memory state maintained in memory: %d unlocked"), UnlockedMemories.Num());
}

void UMemorySystem::LoadMemories()
{
    // No longer loads from disk - memories start fresh each game launch
    // This function is kept for potential run reset functionality
    UE_LOG(LogTemp, Warning, TEXT("Memories ready for new run: %d unlocked"), UnlockedMemories.Num());
}