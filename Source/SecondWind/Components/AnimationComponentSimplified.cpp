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
    if (!OwnerCharacter)
    {
        UE_LOG(LogTemp, Error, TEXT("AnimationComponentSimplified: Owner is not a Character!"));
        return;
    }

    if (!OwnerCharacter->GetMesh())
    {
        UE_LOG(LogTemp, Error, TEXT("AnimationComponentSimplified: Character has no mesh component!"));
        return;
    }

    AnimInstance = OwnerCharacter->GetMesh()->GetAnimInstance();
    if (!AnimInstance)
    {
        UE_LOG(LogTemp, Error, TEXT("AnimationComponentSimplified: No AnimInstance found! Make sure:"));
        UE_LOG(LogTemp, Error, TEXT("  1. Character mesh has an Animation Blueprint assigned"));
        UE_LOG(LogTemp, Error, TEXT("  2. Animation Blueprint has a slot named 'DefaultSlot'"));
        UE_LOG(LogTemp, Error, TEXT("  3. Animation Blueprint's skeleton matches character's skeleton"));
        return;
    }

    // Success
    UE_LOG(LogTemp, Warning, TEXT("AnimationComponentSimplified: Successfully initialized with AnimInstance for %s"), *OwnerCharacter->GetName());

    AnimInstance->OnMontageEnded.AddDynamic(this, &UAnimationComponentSimplified::OnMontageEnded);
    AnimInstance->OnPlayMontageNotifyBegin.AddDynamic(this, &UAnimationComponentSimplified::OnNotifyBeginReceived);

    // Debug: Check AnimInstance class
    UE_LOG(LogTemp, Warning, TEXT("AnimInstance Class: %s"), AnimInstance ? *AnimInstance->GetClass()->GetName() : TEXT("NULL"));

    // Log montage status
    UE_LOG(LogTemp, Warning, TEXT("AnimationComponentSimplified Montages:"));
    UE_LOG(LogTemp, Warning, TEXT("  - CombatMontage: %s"), CombatMontage ? TEXT("ASSIGNED") : TEXT("NULL"));
    UE_LOG(LogTemp, Warning, TEXT("  - DodgeMontage: %s"), DodgeMontage ? TEXT("ASSIGNED") : TEXT("NULL"));
    UE_LOG(LogTemp, Warning, TEXT("  - ReactionMontage: %s"), ReactionMontage ? TEXT("ASSIGNED") : TEXT("NULL"));
    UE_LOG(LogTemp, Warning, TEXT("  - FinisherMontage: %s"), FinisherMontage ? TEXT("ASSIGNED") : TEXT("NULL"));
    UE_LOG(LogTemp, Warning, TEXT("  - BlockMontage: %s"), BlockMontage ? TEXT("ASSIGNED") : TEXT("NULL"));
    UE_LOG(LogTemp, Warning, TEXT("  - Attack Sections Count: %d"), AttackSections.Num());

    for (int32 i = 0; i < AttackSections.Num(); i++)
    {
        UE_LOG(LogTemp, Warning, TEXT("    [%d] %s"), i, *AttackSections[i].ToString());
    }
}

void UAnimationComponentSimplified::PlayAttack(int32 VariationIndex)
{
    // Debug logging
    UE_LOG(LogTemp, Warning, TEXT("PlayAttack called with VariationIndex: %d"), VariationIndex);

    if (!CombatMontage)
    {
        UE_LOG(LogTemp, Error, TEXT("PlayAttack FAILED: CombatMontage is NULL! Make sure it's assigned in Blueprint"));
        return;
    }

    if (!AnimInstance)
    {
        UE_LOG(LogTemp, Error, TEXT("PlayAttack FAILED: AnimInstance is NULL! Character needs an AnimBlueprint assigned"));
        return;
    }

    if (AttackSections.Num() == 0)
    {
        UE_LOG(LogTemp, Error, TEXT("PlayAttack FAILED: AttackSections array is empty!"));
        return;
    }

    FName SectionToPlay;

    if (VariationIndex >= 0 && VariationIndex < AttackSections.Num())
    {
        SectionToPlay = AttackSections[VariationIndex];
        UE_LOG(LogTemp, Warning, TEXT("PlayAttack: Playing specific attack index %d: '%s'"), VariationIndex, *SectionToPlay.ToString());
    }
    else
    {
        // Random selection - could use weighted selection from DataTable
        SectionToPlay = GetRandomSection(AttackSections);
        UE_LOG(LogTemp, Warning, TEXT("PlayAttack: Playing random attack: '%s'"), *SectionToPlay.ToString());
    }

    UE_LOG(LogTemp, Warning, TEXT("PlayAttack: Attempting to play section '%s' from CombatMontage"), *SectionToPlay.ToString());

    // Verify section exists in montage
    if (CombatMontage && !CombatMontage->IsValidSectionName(SectionToPlay))
    {
        UE_LOG(LogTemp, Error, TEXT("PlayAttack FAILED: Section '%s' does not exist in CombatMontage!"), *SectionToPlay.ToString());
        UE_LOG(LogTemp, Error, TEXT("Make sure section names in Montage match exactly (case-sensitive)!"));
        return;
    }

    PlayMontageSection(CombatMontage, SectionToPlay);

    UE_LOG(LogTemp, Warning, TEXT("PlayAttack: Successfully called PlayMontageSection for '%s'"), *SectionToPlay.ToString());
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
    if (!ReactionMontage)
    {
        UE_LOG(LogTemp, Warning, TEXT("PlayHitReaction: ReactionMontage is NULL - assign it in Blueprint!"));
        return;
    }

    if (!AnimInstance)
    {
        UE_LOG(LogTemp, Warning, TEXT("PlayHitReaction: AnimInstance is NULL"));
        return;
    }

    static const TArray<FName> HitSections = {"Hit_Light", "Hit_Medium", "Hit_Heavy"};

    if (Severity >= 0 && Severity < 3)
    {
        UE_LOG(LogTemp, Warning, TEXT("Playing hit reaction: %s (Severity %d)"), *HitSections[Severity].ToString(), Severity);
        PlayMontageSection(ReactionMontage, HitSections[Severity]);
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("PlayHitReaction: Invalid severity %d"), Severity);
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
    if (!Montage)
    {
        UE_LOG(LogTemp, Error, TEXT("PlayMontageSection: Montage is NULL!"));
        return;
    }

    if (!AnimInstance)
    {
        UE_LOG(LogTemp, Error, TEXT("PlayMontageSection: AnimInstance is NULL!"));
        return;
    }

    // Stop current montage completely to prevent section chaining
    if (AnimInstance->Montage_IsPlaying(Montage))
    {
        AnimInstance->Montage_Stop(0.1f, Montage);
    }
    else if (CurrentMontage && CurrentMontage != Montage)
    {
        AnimInstance->Montage_Stop(0.1f, CurrentMontage);
    }

    CurrentMontage = Montage;
    CurrentSection = SectionName;

    // Play montage with speed multiplier and jump to section
    float MontageLength = AnimInstance->Montage_Play(Montage, AnimationSpeedMultiplier);

    UE_LOG(LogTemp, Warning, TEXT("PlayMontageSection: Playing section '%s' for %s (Montage length: %f)"),
        *SectionName.ToString(),
        OwnerCharacter ? *OwnerCharacter->GetName() : TEXT("Unknown"),
        MontageLength);

    if (MontageLength > 0.0f)
    {
        // Jump to the specific section
        AnimInstance->Montage_JumpToSection(SectionName, Montage);

        // IMPORTANT: Set the montage to NOT automatically advance to next section
        // This prevents playing multiple attacks in sequence
        AnimInstance->Montage_SetNextSection(SectionName, NAME_None, Montage);

        UE_LOG(LogTemp, Warning, TEXT("PlayMontageSection: Set section '%s' to NOT advance to next section"), *SectionName.ToString());

        // Debug: Check if montage is actually playing
        if (AnimInstance->Montage_IsPlaying(Montage))
        {
            UE_LOG(LogTemp, Warning, TEXT("CONFIRMED: Montage IS playing for %s"), *OwnerCharacter->GetName());
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("ERROR: Montage is NOT playing for %s!"), *OwnerCharacter->GetName());
        }
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("PlayMontageSection: Montage_Play failed (returned 0)! Check:"));
        UE_LOG(LogTemp, Error, TEXT("  1. AnimBP has a Slot node named 'DefaultSlot'"));
        UE_LOG(LogTemp, Error, TEXT("  2. Slot is connected between State Machine and Output Pose"));
        UE_LOG(LogTemp, Error, TEXT("  3. Montage Skeleton matches Character Skeleton"));
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

void UAnimationComponentSimplified::PlayHackCast()
{
    if (!CombatMontage || !AnimInstance) return;

    // Play hack cast section if it exists, or use a special attack
    FName HackSection = "Hack_Cast";
    // Fallback to a dramatic attack if hack section doesn't exist
    if (!CombatMontage->IsValidSectionName(HackSection))
    {
        HackSection = AttackSections.Num() > 0 ? AttackSections.Last() : NAME_None;
    }

    if (HackSection != NAME_None)
    {
        PlayMontageSection(CombatMontage, HackSection);
        UE_LOG(LogTemp, Warning, TEXT(">>> HACK CAST <<<"));
    }
}

void UAnimationComponentSimplified::PlayHackResponse()
{
    if (!ReactionMontage || !AnimInstance) return;

    // Play a special hit reaction for hack response
    static const TArray<FName> HackResponseSections = {"Hack_Response", "Hit_Heavy", "Stagger_Heavy"};

    for (const FName& Section : HackResponseSections)
    {
        if (ReactionMontage->IsValidSectionName(Section))
        {
            PlayMontageSection(ReactionMontage, Section);
            UE_LOG(LogTemp, Warning, TEXT(">>> HACK RESPONSE <<<"));
            return;
        }
    }

    // Fallback to heavy hit reaction
    PlayHitReaction(2);
}

void UAnimationComponentSimplified::PlayStagger()
{
    if (!ReactionMontage || !AnimInstance) return;

    static const TArray<FName> StaggerSections = {"Stagger", "Stagger_Light", "Stagger_Heavy", "Hit_Heavy"};

    for (const FName& Section : StaggerSections)
    {
        if (ReactionMontage->IsValidSectionName(Section))
        {
            PlayMontageSection(ReactionMontage, Section);
            return;
        }
    }

    // Fallback to heavy hit
    PlayHitReaction(2);
}

// Legacy adapter methods for backward compatibility
bool UAnimationComponentSimplified::PlayAnimation(EAnimationType AnimType, EAnimationPriority Priority)
{
    if (AnimType == EAnimationType::None) return false;

    UE_LOG(LogTemp, Warning, TEXT("PlayAnimation called with AnimType: %d, Priority: %d"), (int32)AnimType, (int32)Priority);

    // Store current animation state for queries
    CurrentAnimationType = AnimType;
    CurrentPriority = Priority;

    // Map legacy enum to new methods
    switch (AnimType)
    {
        case EAnimationType::AttackLeft:
        case EAnimationType::AttackRight:
        case EAnimationType::AttackOverhead:
        case EAnimationType::AttackFront:
            UE_LOG(LogTemp, Warning, TEXT("PlayAnimation: Calling PlayAttack for attack type"));
            PlayAttack(-1);  // Random attack
            return true;

        case EAnimationType::DodgeForward:
            PlayDodge(0);
            return true;
        case EAnimationType::DodgeBack:
            PlayDodge(1);
            return true;
        case EAnimationType::DodgeLeft:
            PlayDodge(2);
            return true;
        case EAnimationType::DodgeRight:
            PlayDodge(3);
            return true;

        case EAnimationType::BlockLeft:
            PlayBlock(0);
            return true;
        case EAnimationType::BlockCenter:
            PlayBlock(1);
            return true;
        case EAnimationType::BlockRight:
            PlayBlock(2);
            return true;

        case EAnimationType::HackCast:
            PlayHackCast();
            return true;
        case EAnimationType::HackResponse:
            PlayHackResponse();
            return true;

        case EAnimationType::Stagger:
            PlayStagger();
            return true;

        case EAnimationType::FinisherExecute:
            PlayFinisher(false);
            return true;
        case EAnimationType::FinisherReceive:
            PlayFinisher(true);
            return true;

        default:
            return false;
    }
}

void UAnimationComponentSimplified::StopAnimation(EAnimationType AnimType)
{
    if (CurrentAnimationType == AnimType)
    {
        StopCurrentMontage();
        CurrentAnimationType = EAnimationType::None;
        CurrentPriority = EAnimationPriority::Low;
    }
}

void UAnimationComponentSimplified::StopAllAnimations()
{
    StopCurrentMontage();
    CurrentAnimationType = EAnimationType::None;
    CurrentPriority = EAnimationPriority::Low;
}

bool UAnimationComponentSimplified::IsAnimationPlaying(EAnimationType AnimType) const
{
    return CurrentAnimationType == AnimType && IsPlayingMontage();
}

float UAnimationComponentSimplified::GetAnimationTimeRemaining(EAnimationType AnimType) const
{
    if (CurrentAnimationType == AnimType)
    {
        return GetMontageTimeRemaining();
    }
    return 0.0f;
}