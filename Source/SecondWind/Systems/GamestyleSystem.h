#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GamestyleSystem.generated.h"

UENUM(BlueprintType)
enum class EGamestyleType : uint8
{
    Defense UMETA(DisplayName = "Defense"),
    Offense UMETA(DisplayName = "Offense"),
    Mobility UMETA(DisplayName = "Mobility"),
    Utility UMETA(DisplayName = "Utility"),
    Technomancer UMETA(DisplayName = "Technomancer")
};

USTRUCT(BlueprintType)
struct FGamestyleData
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EGamestyleType Type;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString DisplayName;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString Description;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 StackCount;

    FGamestyleData()
    {
        Type = EGamestyleType::Defense;
        DisplayName = "Defense";
        Description = "+20 Max HP per kill";
        StackCount = 0;
    }
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnGamestyleAssigned, EGamestyleType, Gamestyle, const FString&, DisplayName);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGamestyleStackAdded, int32, NewStackCount);

UCLASS()
class SECONDWIND_API UGamestyleSystem : public UGameInstanceSubsystem
{
    GENERATED_BODY()

public:
    virtual void Initialize(FSubsystemCollectionBase& Collection) override;
    virtual void Deinitialize() override;

    UFUNCTION(BlueprintCallable, Category = "Gamestyle")
    void AssignRandomGamestyle();

    UFUNCTION(BlueprintCallable, Category = "Gamestyle")
    void AddGamestyleStack();

    UFUNCTION(BlueprintCallable, Category = "Gamestyle")
    EGamestyleType GetCurrentGamestyle() const { return CurrentGamestyle; }

    UFUNCTION(BlueprintCallable, Category = "Gamestyle")
    FGamestyleData GetCurrentGamestyleData() const;

    UFUNCTION(BlueprintCallable, Category = "Gamestyle")
    int32 GetStackCount() const { return CurrentStacks; }

    UFUNCTION(BlueprintCallable, Category = "Gamestyle")
    void ApplyGamestyleEffects(AActor* Target);

    UFUNCTION(BlueprintCallable, Category = "Gamestyle")
    void ResetForNewRun();

    UFUNCTION(BlueprintCallable, Category = "Gamestyle")
    float GetOffenseDamageBonus() const;

    UFUNCTION(BlueprintCallable, Category = "Gamestyle")
    float GetDefenseHealthBonus() const;

    UFUNCTION(BlueprintCallable, Category = "Gamestyle")
    float GetMobilitySpeedBonus() const;

    UFUNCTION(BlueprintCallable, Category = "Gamestyle")
    float GetUtilityCounterBonus() const;

    UFUNCTION(BlueprintCallable, Category = "Gamestyle")
    int32 GetTechnomancerHackReduction() const;

    UPROPERTY(BlueprintAssignable, Category = "Gamestyle")
    FOnGamestyleAssigned OnGamestyleAssigned;

    UPROPERTY(BlueprintAssignable, Category = "Gamestyle")
    FOnGamestyleStackAdded OnGamestyleStackAdded;

private:
    UPROPERTY()
    EGamestyleType CurrentGamestyle;

    UPROPERTY()
    int32 CurrentStacks;

    UPROPERTY()
    TMap<EGamestyleType, FGamestyleData> GamestyleDatabase;

    void InitializeGamestyleDatabase();
};