# Phase 10: Step-by-Step Implementation Guide

## Overview: Transform 299 Animations into 5 Master Montages

### What We're Building:
- **5 Master Montages** (instead of 299 individual files)
- **Animation Blueprint** for automatic movement
- **Simple DataTable** for variations
- **Clean integration** with existing combat

---

## STEP 1: Create Master Montages (30 mins)

### A. Create Combat Montage
1. **In Content Browser:**
   - Right-click in `Content/Characters/Montages/`
   - Create → Animation → Animation Montage
   - Pick any combat animation as base (e.g., `A_Jab_L`)
   - Name it: `AM_Combat_Master`

2. **Add Sections for Attacks:**
   - Open `AM_Combat_Master`
   - In Montage Sections panel (bottom):
   - Click "Clear" to remove default section
   - Add these sections:
   ```
   Section Names:
   - Attack_Jab_L
   - Attack_Punch_R
   - Attack_Hook_L
   - Attack_Uppercut
   - Attack_90L
   - Attack_90R
   ```

3. **Add Animation Segments:**
   - For each section, drag the corresponding animation onto timeline:
   - `A_Jab_L` → Attack_Jab_L section
   - `A_Punch_R` → Attack_Punch_R section
   - etc.

4. **Add Counter Sections:**
   ```
   Quick way for 15 counters:
   - Counter_1 → Counter_15
   - Drag A_Counter_X animations to matching sections
   ```

5. **Add Combo Sections:**
   ```
   - Combo_1_Hit1
   - Combo_1_Hit2
   - Combo_1_Hit3
   - (Add more as needed)
   ```

### B. Create Dodge Montage
1. Create `AM_Dodge_Master`
2. Add sections:
   ```
   - Dodge_Forward
   - Dodge_Back
   - Dodge_Left
   - Dodge_Right
   ```
3. Assign animations to sections

### C. Create Finisher Montage
1. Create `AM_Finisher_Master`
2. Add sections:
   ```
   - Finisher_1 through Finisher_15
   - Victim_1 through Victim_15
   ```

### D. Create Reaction Montage
1. Create `AM_Reaction_Master`
2. Add sections:
   ```
   - Hit_Light_F, Hit_Light_B, Hit_Light_L, Hit_Light_R
   - Hit_Heavy_F, Hit_Heavy_B, Hit_Heavy_L, Hit_Heavy_R
   - Stagger_Light, Stagger_Heavy
   - Death_1, Death_2, Death_3
   ```

### E. Create Block Montage
1. Create `AM_Block_Master`
2. Add sections:
   ```
   - Block_Idle
   - Block_Left
   - Block_Right
   - Block_Hit_L
   - Block_Hit_R
   ```

---

## STEP 2: Setup Animation Blueprint (20 mins)

### A. Create/Update AnimBP
1. Open `Content/Characters/ABP_SecondWindCharacter`
2. In AnimGraph, create this structure:

```
AnimGraph Structure:
├── State Machine (Locomotion)
│   ├── Entry → Idle
│   ├── Idle ←→ Walk/Run
│   └── Walk/Run ←→ Strafe
├── Slot 'DefaultSlot' (for montages)
└── Output Pose
```

### B. Setup Locomotion State Machine
1. **Idle State:**
   - Use `A_Idle_Active` animation

2. **Walk/Run State:**
   - Create Blend Space 1D: `BS_WalkRun`
   - 0 speed = `A_Move_F` (walk)
   - 600 speed = `A_Run_F` (if you have it)

3. **Strafe State:**
   - Create Blend Space 2D: `BS_Strafe`
   - X-axis: -1 to 1 (left/right)
   - Y-axis: -1 to 1 (back/forward)
   - Add animations at corners

### C. Add Montage Slot
1. After State Machine, add "Slot 'DefaultSlot'"
2. This is where combat montages play
3. Connect: State Machine → Slot → Output Pose

---

## STEP 3: Update Code to Use Simplified System (10 mins)

### A. Update AnimationComponent.h
```cpp
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AnimationComponent.generated.h"

UENUM(BlueprintType)
enum class EAnimationType : uint8
{
    None,
    AttackFront,
    AttackLeft,
    AttackRight,
    // ... keep existing enums
};

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class SECONDWIND_API UAnimationComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    // Keep existing interface
    bool PlayAnimation(EAnimationType AnimType, EAnimationPriority Priority);

protected:
    // Change from 20+ montages to just 5
    UPROPERTY(EditDefaultsOnly, Category = "Montages")
    UAnimMontage* CombatMontage;  // AM_Combat_Master

    UPROPERTY(EditDefaultsOnly, Category = "Montages")
    UAnimMontage* DodgeMontage;  // AM_Dodge_Master

    UPROPERTY(EditDefaultsOnly, Category = "Montages")
    UAnimMontage* FinisherMontage;  // AM_Finisher_Master

    UPROPERTY(EditDefaultsOnly, Category = "Montages")
    UAnimMontage* ReactionMontage;  // AM_Reaction_Master

    UPROPERTY(EditDefaultsOnly, Category = "Montages")
    UAnimMontage* BlockMontage;  // AM_Block_Master

private:
    void PlayMontageSection(UAnimMontage* Montage, FName Section);
    FName GetSectionForAnimationType(EAnimationType Type);
};
```

### B. Update AnimationComponent.cpp
```cpp
bool UAnimationComponent::PlayAnimation(EAnimationType AnimType, EAnimationPriority Priority)
{
    // Map animation types to sections
    UAnimMontage* Montage = nullptr;
    FName Section = NAME_None;

    switch(AnimType)
    {
        case EAnimationType::AttackFront:
            Montage = CombatMontage;
            Section = "Attack_Jab_L";
            break;

        case EAnimationType::AttackLeft:
            Montage = CombatMontage;
            Section = "Attack_90L";
            break;

        case EAnimationType::DodgeForward:
            Montage = DodgeMontage;
            Section = "Dodge_Forward";
            break;

        // ... map other types
    }

    if (Montage && AnimInstance)
    {
        AnimInstance->Montage_Play(Montage);
        AnimInstance->Montage_JumpToSection(Section, Montage);
        return true;
    }

    return false;
}
```

---

## STEP 4: Setup Animation Notifies (15 mins)

### A. Add Combat Notifies
1. Open `AM_Combat_Master`
2. For each attack section, add notifies:
   - **AttackStart** - Beginning of attack
   - **DamageWindow** - When damage should apply (0.2-0.4s)
   - **AttackEnd** - End of attack
   - **ComboWindow** - When combo input accepted (0.6-0.8s)

### B. Add Dodge Notifies
1. Open `AM_Dodge_Master`
2. Add to each dodge:
   - **InvincibilityStart** - 0.1s
   - **InvincibilityEnd** - 0.3s
   - **CounterWindow** - After dodge completes

### C. Create Custom Notify (if needed)
1. Create Blueprint: `ANS_DamageWindow`
2. Parent: AnimNotifyState
3. Add Begin/End logic

---

## STEP 5: Create Animation DataTable (10 mins)

### A. Create Structure
1. Create Structure: `FAnimationVariationRow`
```cpp
Structure:
- SectionName (Name)
- Weight (Float) = 1.0
- Category (String)
- MinCombo (Int32) = 0
- MaxCombo (Int32) = 3
```

### B. Create DataTable
1. Right-click → Miscellaneous → DataTable
2. Pick `FAnimationVariationRow`
3. Name: `DT_AnimationVariations`

### C. Fill Data (Can use CSV import!)
```csv
RowName,SectionName,Weight,Category,MinCombo,MaxCombo
Attack1,Attack_Jab_L,2.0,Light,0,3
Attack2,Attack_Punch_R,1.5,Medium,1,2
Attack3,Attack_Uppercut,0.5,Heavy,2,1
Counter1,Counter_1,1.0,Counter,0,0
...
```

---

## STEP 6: Test Integration (10 mins)

### A. In BP_ThirdPersonCharacter:
1. Select AnimationComponent
2. Assign the 5 master montages:
   - Combat Montage → AM_Combat_Master
   - Dodge Montage → AM_Dodge_Master
   - etc.

### B. Test Controls:
1. **LMB** → Should play attack from combat montage
2. **Direction + Space** → Should play dodge section
3. **RMB** → Should play block section

### C. Verify Notifies:
1. Add breakpoint on DamageWindow notify
2. Ensure damage applies at right time

---

## STEP 7: Add Variation System (Optional, 15 mins)

### A. Random Attack Selection
```cpp
void UAnimationComponent::PlayRandomAttack()
{
    TArray<FName> AttackSections = {
        "Attack_Jab_L",
        "Attack_Punch_R",
        "Attack_Hook_L"
    };

    int32 Random = FMath::RandRange(0, AttackSections.Num() - 1);
    PlayMontageSection(CombatMontage, AttackSections[Random]);
}
```

### B. Counter Selection
```cpp
void UAnimationComponent::PlayRandomCounter()
{
    int32 CounterNum = FMath::RandRange(1, 15);
    FName Section = FName(*FString::Printf(TEXT("Counter_%d"), CounterNum));
    PlayMontageSection(CombatMontage, Section);
}
```

---

## Quick Testing Checklist

### Phase 1 (Core):
- [ ] Combat montage plays with sections
- [ ] Can jump between sections
- [ ] Notifies trigger at right times
- [ ] AnimBP handles movement

### Phase 2 (Integration):
- [ ] Existing combat system works
- [ ] Dodge component triggers right sections
- [ ] Block system uses block montage
- [ ] Counter windows open correctly

### Phase 3 (Polish):
- [ ] Random variations work
- [ ] Combos chain properly
- [ ] Hit reactions blend well
- [ ] Performance is good (60 FPS)

---

## Common Issues & Fixes

### Montage Not Playing?
- Check slot name matches ("DefaultSlot")
- Ensure AnimBP is assigned to character
- Verify montage has content in section

### Section Not Found?
- Check section name spelling exactly
- Ensure section exists in montage
- Use Montage_GetSectionName to debug

### Animations Cutting Off?
- Check section length in montage
- Adjust blend out time
- Check for Montage_Stop calls

---

## Time Estimate: 2 Hours Total

1. Create Montages: 30 mins
2. Setup AnimBP: 20 mins
3. Update Code: 10 mins
4. Add Notifies: 15 mins
5. Create DataTable: 10 mins
6. Test Integration: 10 mins
7. Add Variations: 15 mins
8. Debug/Polish: 10 mins

**Result:** 299 animations organized professionally!