#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AnimationDataAsset.generated.h"

class UAnimMontage;
class UAnimSequence;

// Animation categories for organization
UENUM(BlueprintType)
enum class EAnimationCategory : uint8
{
    Core,           // 17 essential animations
    Counter,        // 15 counter animations
    Finisher,       // 15 finisher pairs
    Combo,          // Multi-hit combos
    HitReaction,    // Directional hit reactions
    Crouch,         // Crouch combat system
    Special,        // Special moves
    Transition,     // Movement transitions
    Taunt,          // Taunts and emotes
    Contextual      // Context-sensitive
};

// Detailed animation metadata
USTRUCT(BlueprintType)
struct FAnimationEntry
{
    GENERATED_BODY()

    UPROPERTY(EditDefaultsOnly, Category = "Animation")
    FName AnimationID;

    UPROPERTY(EditDefaultsOnly, Category = "Animation")
    UAnimSequence* AnimSequence;

    UPROPERTY(EditDefaultsOnly, Category = "Animation")
    UAnimMontage* AnimMontage;

    UPROPERTY(EditDefaultsOnly, Category = "Animation")
    EAnimationCategory Category = EAnimationCategory::Core;

    UPROPERTY(EditDefaultsOnly, Category = "Animation")
    float PlayRate = 1.0f;

    UPROPERTY(EditDefaultsOnly, Category = "Animation")
    bool bIsLooping = false;

    UPROPERTY(EditDefaultsOnly, Category = "Animation")
    bool bRequiresRootMotion = false;

    UPROPERTY(EditDefaultsOnly, Category = "Animation")
    TArray<FName> Tags;

    // Combat-specific metadata
    UPROPERTY(EditDefaultsOnly, Category = "Combat")
    float DamageWindow = 0.0f;

    UPROPERTY(EditDefaultsOnly, Category = "Combat")
    float DamageWindowStart = 0.0f;

    UPROPERTY(EditDefaultsOnly, Category = "Combat")
    float InvincibilityWindow = 0.0f;

    UPROPERTY(EditDefaultsOnly, Category = "Combat")
    float InvincibilityStart = 0.0f;

    // Combo data
    UPROPERTY(EditDefaultsOnly, Category = "Combo")
    TArray<FName> ComboFollowUps;

    UPROPERTY(EditDefaultsOnly, Category = "Combo")
    float ComboWindowStart = 0.0f;

    UPROPERTY(EditDefaultsOnly, Category = "Combo")
    float ComboWindowDuration = 0.2f;
};

// Animation set for a character/enemy type
USTRUCT(BlueprintType)
struct FAnimationSet
{
    GENERATED_BODY()

    // Core combat animations
    UPROPERTY(EditDefaultsOnly, Category = "Core")
    FName AttackFront = "A_Jab_L";

    UPROPERTY(EditDefaultsOnly, Category = "Core")
    FName AttackLeft = "A_90L_Punch";

    UPROPERTY(EditDefaultsOnly, Category = "Core")
    FName AttackRight = "A_90R_Punch";

    UPROPERTY(EditDefaultsOnly, Category = "Core")
    TArray<FName> AttackVariations;

    // Dodge animations
    UPROPERTY(EditDefaultsOnly, Category = "Dodge")
    FName DodgeForward = "A_Dodge_F";

    UPROPERTY(EditDefaultsOnly, Category = "Dodge")
    FName DodgeBack = "A_Dodge_B";

    UPROPERTY(EditDefaultsOnly, Category = "Dodge")
    FName DodgeLeft = "A_Dodge_L";

    UPROPERTY(EditDefaultsOnly, Category = "Dodge")
    FName DodgeRight = "A_Dodge_R";

    // Special abilities
    UPROPERTY(EditDefaultsOnly, Category = "Special")
    FName HackAttack = "A_UpperCut_Jump";

    UPROPERTY(EditDefaultsOnly, Category = "Special")
    FName HackResponse = "A_FallBack_Twist_L";

    // Counter attacks (randomly selected)
    UPROPERTY(EditDefaultsOnly, Category = "Counter")
    TArray<FName> CounterAttacks;

    // Finisher pairs
    UPROPERTY(EditDefaultsOnly, Category = "Finisher")
    TArray<FName> FinisherExecute;

    UPROPERTY(EditDefaultsOnly, Category = "Finisher")
    TArray<FName> FinisherReceive;
};

// Transition rules wrapper
USTRUCT(BlueprintType)
struct FAnimationTransitions
{
    GENERATED_BODY()

    UPROPERTY(EditDefaultsOnly)
    TArray<FName> AllowedTransitions;
};

/**
 * Central animation database for the game
 */
UCLASS()
class SECONDWIND_API UAnimationDataAsset : public UPrimaryDataAsset
{
    GENERATED_BODY()

public:
    // Master animation database
    UPROPERTY(EditDefaultsOnly, Category = "Database")
    TMap<FName, FAnimationEntry> AnimationDatabase;

    // Character-specific animation sets
    UPROPERTY(EditDefaultsOnly, Category = "Sets")
    FAnimationSet PlayerAnimationSet;

    UPROPERTY(EditDefaultsOnly, Category = "Sets")
    TMap<FName, FAnimationSet> EnemyAnimationSets;

    // Animation transition rules
    UPROPERTY(EditDefaultsOnly, Category = "Transitions")
    TMap<FName, FAnimationTransitions> AllowedTransitions;

    // Helper functions
    const FAnimationEntry* GetAnimation(FName AnimationID) const;
    TArray<FName> GetAnimationsByCategory(EAnimationCategory Category) const;
    TArray<FName> GetAnimationsWithTag(FName Tag) const;
    bool CanTransition(FName FromAnim, FName ToAnim) const;

    // Get random animation from a set
    FName GetRandomCounter() const;
    FName GetRandomFinisher() const;
    FName GetRandomAttackVariation(bool bIsPlayer = true) const;
};