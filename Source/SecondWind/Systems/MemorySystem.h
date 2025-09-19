#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "MemorySystem.generated.h"

UENUM(BlueprintType)
enum class EMemoryType : uint8
{
    WeakSide UMETA(DisplayName = "Weak Side Detection"),
    HackReduction UMETA(DisplayName = "Hack Attack Reduction"),
    AttackBoost UMETA(DisplayName = "Attack Damage Boost"),
    DefenseBoost UMETA(DisplayName = "Defense Boost"),
    HealthBoost UMETA(DisplayName = "Health Boost")
};

USTRUCT(BlueprintType)
struct FMemoryData
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString MemoryID;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString DisplayName;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString Description;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 FragmentCost;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EMemoryType MemoryType;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float EffectValue;

    FMemoryData()
    {
        FragmentCost = 10;
        MemoryType = EMemoryType::HackReduction;
        EffectValue = 2.0f;
    }
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMemoryUnlocked, const FString&, MemoryID);

UCLASS()
class SECONDWIND_API UMemorySystem : public UGameInstanceSubsystem
{
    GENERATED_BODY()

public:
    virtual void Initialize(FSubsystemCollectionBase& Collection) override;
    virtual void Deinitialize() override;

    UFUNCTION(BlueprintCallable, Category = "Memory")
    bool UnlockMemory(const FString& MemoryID);

    UFUNCTION(BlueprintCallable, Category = "Memory")
    bool IsMemoryUnlocked(const FString& MemoryID) const;

    UFUNCTION(BlueprintCallable, Category = "Memory")
    TArray<FMemoryData> GetAvailableMemories() const;

    UFUNCTION(BlueprintCallable, Category = "Memory")
    TArray<FString> GetUnlockedMemories() const { return UnlockedMemories; }

    UFUNCTION(BlueprintCallable, Category = "Memory")
    FMemoryData GetMemoryData(const FString& MemoryID) const;

    UFUNCTION(BlueprintCallable, Category = "Memory")
    void ApplyMemoryEffects(AActor* Target);

    UFUNCTION(BlueprintCallable, Category = "Memory")
    int32 GetHackCounterRequirement() const;

    UFUNCTION(BlueprintCallable, Category = "Memory")
    void ResetForNewRun() { /* Memories persist between runs in same session */ }

    UPROPERTY(BlueprintAssignable, Category = "Memory")
    FOnMemoryUnlocked OnMemoryUnlocked;

private:
    UPROPERTY()
    TArray<FString> UnlockedMemories;

    UPROPERTY()
    TMap<FString, FMemoryData> AllMemories;

    void InitializeMemoryDatabase();
    void SaveMemories();
    void LoadMemories();
};