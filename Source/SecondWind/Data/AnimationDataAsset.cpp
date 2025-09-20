#include "AnimationDataAsset.h"

const FAnimationEntry* UAnimationDataAsset::GetAnimation(FName AnimationID) const
{
    return AnimationDatabase.Find(AnimationID);
}

TArray<FName> UAnimationDataAsset::GetAnimationsByCategory(EAnimationCategory Category) const
{
    TArray<FName> Result;
    for (const auto& Entry : AnimationDatabase)
    {
        if (Entry.Value.Category == Category)
        {
            Result.Add(Entry.Key);
        }
    }
    return Result;
}

TArray<FName> UAnimationDataAsset::GetAnimationsWithTag(FName Tag) const
{
    TArray<FName> Result;
    for (const auto& Entry : AnimationDatabase)
    {
        if (Entry.Value.Tags.Contains(Tag))
        {
            Result.Add(Entry.Key);
        }
    }
    return Result;
}

bool UAnimationDataAsset::CanTransition(FName FromAnim, FName ToAnim) const
{
    if (const FAnimationTransitions* Transitions = AllowedTransitions.Find(FromAnim))
    {
        return Transitions->AllowedTransitions.Contains(ToAnim);
    }
    return true; // Allow by default if no rule exists
}

FName UAnimationDataAsset::GetRandomCounter() const
{
    if (PlayerAnimationSet.CounterAttacks.Num() > 0)
    {
        int32 RandomIndex = FMath::RandRange(0, PlayerAnimationSet.CounterAttacks.Num() - 1);
        return PlayerAnimationSet.CounterAttacks[RandomIndex];
    }
    return NAME_None;
}

FName UAnimationDataAsset::GetRandomFinisher() const
{
    if (PlayerAnimationSet.FinisherExecute.Num() > 0)
    {
        int32 RandomIndex = FMath::RandRange(0, PlayerAnimationSet.FinisherExecute.Num() - 1);
        return PlayerAnimationSet.FinisherExecute[RandomIndex];
    }
    return NAME_None;
}

FName UAnimationDataAsset::GetRandomAttackVariation(bool bIsPlayer) const
{
    const TArray<FName>& Variations = bIsPlayer ?
        PlayerAnimationSet.AttackVariations :
        PlayerAnimationSet.AttackVariations; // Could use enemy set here

    if (Variations.Num() > 0)
    {
        int32 RandomIndex = FMath::RandRange(0, Variations.Num() - 1);
        return Variations[RandomIndex];
    }

    return PlayerAnimationSet.AttackFront;
}