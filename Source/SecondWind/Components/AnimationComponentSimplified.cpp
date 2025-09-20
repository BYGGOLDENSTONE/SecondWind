#include "AnimationComponentSimplified.h"
#include "GameFramework/Character.h"
#include "Animation/AnimInstance.h"
#include "Animation/AnimMontage.h"
#include "Engine/World.h"
#include "TimerManager.h"

UAnimationComponentSimplified::UAnimationComponentSimplified()
{
    PrimaryComponentTick.bCanEverTick = false;

    // Pre-populate counter sections
    for (int32 i = 1; i <= 15; i++)
    {
        CounterSections.Add(FName(*FString::Printf(TEXT("Counter_%d"), i)));
    }

    // Pre-populate finisher sections
    for (int32 i = 1; i <= 15; i++)
    {
        FinisherExecuteSections.Add(FName(*FString::Printf(TEXT("Finisher_%d"), i)));
        FinisherVictimSections.Add(FName(*FString::Printf(TEXT("Victim_%d"), i)));
    }
}

void UAnimationComponentSimplified::BeginPlay()
{
    Super::BeginPlay();

    OwnerCharacter = Cast<ACharacter>(GetOwner());
    if (OwnerCharacter && OwnerCharacter->GetMesh())
    {
        AnimInstance = OwnerCharacter->GetMesh()->GetAnimInstance();

        if (AnimInstance)
        {
            AnimInstance->OnMontageEnded.AddDynamic(this, &UAnimationComponentSimplified::OnMontageEnded);
            AnimInstance->OnPlayMontageNotifyBegin.AddDynamic(this, &UAnimationComponentSimplified::OnNotifyBeginReceived);
        }
    }
}

void UAnimationComponentSimplified::PlayAttack(int32 VariationIndex)
{
    if (!CombatMontage || !AnimInstance) return;

    FName SectionToPlay;

    if (VariationIndex >= 0 && VariationIndex < AttackSections.Num())
    {
        SectionToPlay = AttackSections[VariationIndex];
    }
    else
    {
        // Random selection - could use weighted selection from DataTable
        SectionToPlay = GetRandomSection(AttackSections);
    }

    PlayMontageSection(CombatMontage, SectionToPlay);

    UE_LOG(LogTemp, Verbose, TEXT("Playing attack section: %s"), *SectionToPlay.ToString());
}

void UAnimationComponentSimplified::PlayDodge(int32 Direction)
{
    if (!DodgeMontage || !AnimInstance) return;

    static const TArray<FName> DodgeSections = {"Dodge_F", "Dodge_B", "Dodge_L", "Dodge_R"};

    if (Direction >= 0 && Direction < 4)
    {
        PlayMontageSection(DodgeMontage, DodgeSections[Direction]);
    }
}

void UAnimationComponentSimplified::PlayCounter()
{
    if (!CombatMontage || !AnimInstance || CounterSections.Num() == 0) return;

    FName CounterSection = GetRandomSection(CounterSections);
    PlayMontageSection(CombatMontage, CounterSection);

    UE_LOG(LogTemp, Warning, TEXT(">>> COUNTER ATTACK: %s <<<"), *CounterSection.ToString());
}

void UAnimationComponentSimplified::PlayFinisher(bool bIsVictim)
{
    if (!FinisherMontage || !AnimInstance) return;

    const TArray<FName>& Sections = bIsVictim ? FinisherVictimSections : FinisherExecuteSections;
    if (Sections.Num() == 0) return;

    FName FinisherSection = GetRandomSection(Sections);
    PlayMontageSection(FinisherMontage, FinisherSection);

    UE_LOG(LogTemp, Warning, TEXT(">>> FINISHER: %s <<<"), *FinisherSection.ToString());
}

void UAnimationComponentSimplified::PlayBlock(int32 Zone)
{
    if (!BlockMontage || !AnimInstance) return;

    static const TArray<FName> BlockSections = {"Block_L", "Block_C", "Block_R"};

    if (Zone >= 0 && Zone < 3)
    {
        PlayMontageSection(BlockMontage, BlockSections[Zone]);
    }
}

void UAnimationComponentSimplified::PlayHitReaction(int32 Severity)
{
    if (!ReactionMontage || !AnimInstance) return;

    static const TArray<FName> HitSections = {"Hit_Light", "Hit_Medium", "Hit_Heavy"};

    if (Severity >= 0 && Severity < 3)
    {
        PlayMontageSection(ReactionMontage, HitSections[Severity]);
    }
}

void UAnimationComponentSimplified::PlayComboAttack(int32 ComboStep)
{
    if (!CombatMontage || !AnimInstance) return;

    // Example: Combo_1_Hit1, Combo_1_Hit2, etc.
    FName ComboSection = FName(*FString::Printf(TEXT("Combo_1_Hit%d"), ComboStep));

    if (AnimInstance->Montage_IsPlaying(CombatMontage))
    {
        // Jump to next combo section
        AnimInstance->Montage_JumpToSection(ComboSection, CombatMontage);
    }
    else
    {
        // Start combo
        PlayMontageSection(CombatMontage, ComboSection);
    }

    CurrentComboStep = ComboStep;
}

void UAnimationComponentSimplified::StopCurrentMontage(float BlendOut)
{
    if (AnimInstance && CurrentMontage)
    {
        AnimInstance->Montage_Stop(BlendOut, CurrentMontage);
        CurrentMontage = nullptr;
    }
}

bool UAnimationComponentSimplified::IsPlayingMontage() const
{
    return AnimInstance && CurrentMontage && AnimInstance->Montage_IsPlaying(CurrentMontage);
}

float UAnimationComponentSimplified::GetMontageTimeRemaining() const
{
    // Simple implementation - just check if montage is playing
    // For accurate time remaining, you would need to track it manually
    if (AnimInstance && CurrentMontage && AnimInstance->Montage_IsPlaying(CurrentMontage))
    {
        // Return a default value indicating montage is still playing
        // You can enhance this later if needed
        return 1.0f;
    }
    return 0.0f;
}

void UAnimationComponentSimplified::PlayMontageSection(UAnimMontage* Montage, FName SectionName)
{
    if (!Montage || !AnimInstance) return;

    // Stop current if playing
    if (CurrentMontage && CurrentMontage != Montage)
    {
        AnimInstance->Montage_Stop(0.2f, CurrentMontage);
    }

    CurrentMontage = Montage;
    CurrentSection = SectionName;

    // Play montage and jump to section
    float MontageLength = AnimInstance->Montage_Play(Montage);
    if (MontageLength > 0.0f)
    {
        AnimInstance->Montage_JumpToSection(SectionName, Montage);
    }
}

FName UAnimationComponentSimplified::GetRandomSection(const TArray<FName>& Sections) const
{
    if (Sections.Num() == 0) return NAME_None;

    int32 RandomIndex = FMath::RandRange(0, Sections.Num() - 1);
    return Sections[RandomIndex];
}

FName UAnimationComponentSimplified::GetWeightedRandomSection(const FString& Category) const
{
    if (!AnimationVariationsTable) return NAME_None;

    // Get all rows matching category
    TArray<FAnimationVariation*> Variations;
    float TotalWeight = 0.0f;

    for (auto& Row : AnimationVariationsTable->GetRowMap())
    {
        FAnimationVariation* Variation = (FAnimationVariation*)Row.Value;
        if (Variation && Variation->Category.Contains(Category))
        {
            Variations.Add(Variation);
            TotalWeight += Variation->SelectionWeight;
        }
    }

    if (Variations.Num() == 0) return NAME_None;

    // Weighted random selection
    float RandomValue = FMath::RandRange(0.0f, TotalWeight);
    float CurrentWeight = 0.0f;

    for (FAnimationVariation* Variation : Variations)
    {
        CurrentWeight += Variation->SelectionWeight;
        if (RandomValue <= CurrentWeight)
        {
            return Variation->MontageSection;
        }
    }

    return Variations.Last()->MontageSection;
}

void UAnimationComponentSimplified::OnMontageEnded(UAnimMontage* Montage, bool bInterrupted)
{
    if (Montage == CurrentMontage)
    {
        CurrentMontage = nullptr;
        CurrentSection = NAME_None;
        bComboWindowOpen = false;

        if (!bInterrupted)
        {
            CurrentComboStep = 0;
        }
    }
}

void UAnimationComponentSimplified::OnNotifyBeginReceived(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointPayload)
{
    // Handle animation notifies
    if (NotifyName == "ComboWindow")
    {
        bComboWindowOpen = true;

        // Close window after delay
        FTimerHandle TimerHandle;
        GetWorld()->GetTimerManager().SetTimer(TimerHandle, [this]()
        {
            bComboWindowOpen = false;
        }, 0.3f, false);
    }
    else if (NotifyName == "AttackHit")
    {
        // Broadcast to combat component
        UE_LOG(LogTemp, Verbose, TEXT("Attack hit window active"));
    }
}