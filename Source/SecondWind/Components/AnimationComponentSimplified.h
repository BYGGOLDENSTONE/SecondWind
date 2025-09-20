#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "AnimationComponentSimplified.generated.h"

class UAnimMontage;

/**
 * Simplified animation component using montage sections
 * Handles 299 animations with just 5-10 montages
 */

// Animation variation data for DataTable
USTRUCT(BlueprintType)
struct FAnimationVariation : public FTableRowBase
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FName MontageSection;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float SelectionWeight = 1.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString Category;  // "Counter", "Finisher", "Heavy", etc.

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bRequiresTarget = false;
};

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class SECONDWIND_API UAnimationComponentSimplified : public UActorComponent
{
    GENERATED_BODY()

public:
    UAnimationComponentSimplified();

    virtual void BeginPlay() override;

    // Simple interface - play animations by type
    void PlayAttack(int32 VariationIndex = -1);  // -1 = random
    void PlayDodge(int32 Direction);  // 0=F, 1=B, 2=L, 3=R
    void PlayCounter();  // Randomly selects from 15 counters
    void PlayFinisher(bool bIsVictim = false);
    void PlayBlock(int32 Zone);  // 0=L, 1=C, 2=R
    void PlayHitReaction(int32 Severity);  // 0=Light, 1=Medium, 2=Heavy

    // Utility functions
    void StopCurrentMontage(float BlendOut = 0.25f);
    bool IsPlayingMontage() const;
    float GetMontageTimeRemaining() const;

    // For combo system
    void PlayComboAttack(int32 ComboStep);
    bool IsInComboWindow() const { return bComboWindowOpen; }

protected:
    // Master montages (each contains many sections)
    UPROPERTY(EditDefaultsOnly, Category = "Montages")
    UAnimMontage* CombatMontage;  // Contains all attacks, counters, combos

    UPROPERTY(EditDefaultsOnly, Category = "Montages")
    UAnimMontage* DodgeMontage;  // Contains all dodges

    UPROPERTY(EditDefaultsOnly, Category = "Montages")
    UAnimMontage* ReactionMontage;  // Hit reactions, staggers, deaths

    UPROPERTY(EditDefaultsOnly, Category = "Montages")
    UAnimMontage* FinisherMontage;  // All finisher pairs

    UPROPERTY(EditDefaultsOnly, Category = "Montages")
    UAnimMontage* BlockMontage;  // Block poses and reactions

    // Data table for variations
    UPROPERTY(EditDefaultsOnly, Category = "Data")
    UDataTable* AnimationVariationsTable;

    // Section name mappings (set in Blueprint for flexibility)
    UPROPERTY(EditDefaultsOnly, Category = "Sections")
    TArray<FName> AttackSections = {"Jab_L", "Punch_R", "Hook_L", "Uppercut"};

    UPROPERTY(EditDefaultsOnly, Category = "Sections")
    TArray<FName> CounterSections;  // Counter_1 through Counter_15

    UPROPERTY(EditDefaultsOnly, Category = "Sections")
    TArray<FName> FinisherExecuteSections;  // Finisher_1 through Finisher_15

    UPROPERTY(EditDefaultsOnly, Category = "Sections")
    TArray<FName> FinisherVictimSections;  // Victim_1 through Victim_15

    UPROPERTY(EditDefaultsOnly, Category = "Sections")
    TArray<FName> ComboSections;  // Combo_1_Hit1, Combo_1_Hit2, etc.

private:
    // Helper functions
    void PlayMontageSection(UAnimMontage* Montage, FName SectionName);
    FName GetRandomSection(const TArray<FName>& Sections) const;
    FName GetWeightedRandomSection(const FString& Category) const;

    // Montage callbacks
    UFUNCTION()
    void OnMontageEnded(UAnimMontage* Montage, bool bInterrupted);

    UFUNCTION()
    void OnNotifyBeginReceived(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointPayload);

    // State tracking
    UAnimMontage* CurrentMontage = nullptr;
    FName CurrentSection;
    bool bComboWindowOpen = false;
    int32 CurrentComboStep = 0;

    // Component references
    class UAnimInstance* AnimInstance;
    class ACharacter* OwnerCharacter;
};