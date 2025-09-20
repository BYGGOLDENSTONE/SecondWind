# SecondWind - Phase 10 Animation Mapping

## Available Animation Assets Summary
- **Fight Animations:** 239 total animations
- **Finisher Animations:** 60 animations (15 counters, 15 finishers, plus hit reactions)

## Animation Mapping to Game Requirements

### 1. ATTACK ANIMATIONS (3 Required)

#### Player/Enemy Front Attack Options:
- **PRIMARY:** `A_Jab_L` → Quick straight punch
- **ALTERNATIVE:** `A_Punch_L` → Heavier punch
- **COMBO OPTIONS:**
  - `A_JabPunchKick_L` → 3-hit combo (save for later phases)
  - `A_FrontKickPunch_L` → Kick-punch combo

#### Enemy Left Attack:
- **PRIMARY:** `A_90L_Punch` → Clear left-side attack
- **ALTERNATIVE:** `A_90L_BackFist` → Spinning left attack
- **KICK OPTION:** `A_90L_SideKick_Mid` → Left side kick

#### Enemy Right Attack:
- **PRIMARY:** `A_90R_Punch` → Clear right-side attack
- **ALTERNATIVE:** `A_90R_BackFist` → Spinning right attack
- **KICK OPTION:** `A_90R_SideKick_Mid` → Right side kick

### 2. BLOCK POSES (3 Required)

#### Block Center:
- **PRIMARY:** `A_Block_Idle` → Standard block stance

#### Block Left:
- **CREATE FROM:** `A_BlockHit_L_IP` → Use first frame as static pose
- **ALTERNATIVE:** Modify `A_Block_Idle` in engine

#### Block Right:
- **CREATE FROM:** `A_BlockHit_R_IP` → Use first frame as static pose
- **ALTERNATIVE:** Mirror Block Left pose

### 3. DODGE ANIMATIONS (4 Required)

Perfect matches found:
- **Dodge Forward:** `A_Dodge_F`
- **Dodge Back:** `A_Dodge_B`
- **Dodge Left:** `A_Dodge_L`
- **Dodge Right:** `A_Dodge_R`

### 4. HACK ANIMATIONS (2 Required)

#### Hack Attack:
- **PRIMARY:** `A_UpperCut_Jump` → Powerful upward strike
- **ALTERNATIVE:** `A_SuperMan_R` → Flying punch
- **DRAMATIC:** `A_BTwist_Kick` → Butterfly twist kick

#### Hack Hit Response:
- **PRIMARY:** `A_FallBack_Twist_L` → Dramatic knockback
- **ALTERNATIVE:** `A_FallBack_HalfTwist_R` → Spinning fall
- **HEAVY:** `A_FallBack_Up_Roll` → Full knockback with roll

### 5. MOVEMENT ANIMATIONS (5 Required)

#### Idle Combat:
- **PRIMARY:** `A_Idle_Active` → Combat-ready stance
- **ALTERNATIVE:** `A_Idle_Base` → Neutral idle

#### Walk Forward:
- **PRIMARY:** `A_Move_F` → Standard forward walk
- **RUN OPTION:** `A_Run_F` → For sprint mechanic

#### Walk Back (Strafe):
- **PRIMARY:** `A_Move_B` → Backward walk
- **DEFENSIVE:** `A_Step_B` → Careful backstep

#### Walk Left (Strafe):
- **PRIMARY:** `A_Move_L` → Left strafe
- **QUICK:** `A_Step_Left` → Quick sidestep

#### Walk Right (Strafe):
- **PRIMARY:** `A_Move_R` → Right strafe
- **QUICK:** `A_Step_Right` → Quick sidestep

### 6. COUNTER ANIMATIONS (Bonus)

From Finisher_Animations folder:
- **Counter Attacks:** `A_Counter_1` through `A_Counter_15`
- **RECOMMENDED:**
  - `A_Counter_3` → Quick counter strike
  - `A_Counter_7` → Defensive counter
  - `A_Counter_11` → Heavy counter

### 7. FINISHER ANIMATIONS (For Phase Transitions)

From Finisher_Animations folder:
- **Finishers:** `A_Finisher_1` through `A_Finisher_15`
- **Victim Reactions:** `A_Hit_Finisher_1` through `A_Hit_Finisher_15`
- **RECOMMENDED PAIRS:**
  - `A_Finisher_3` + `A_Hit_Finisher_3`
  - `A_Finisher_7` + `A_Hit_Finisher_7`
  - `A_Finisher_12` + `A_Hit_Finisher_12`

### 8. HIT REACTIONS (Bonus - Physics Enhanced)

Great variety for different hit types:
- **Head Hits:** `A_HitHead_F_IP`, `A_HitHead_L_IP`, `A_HitHead_R_IP`
- **Body Hits:** `A_HitBody_F_IP`, `A_HitBody_L_IP`, `A_HitBody_R_IP`
- **Heavy Hits:** `A_HitHead_Down_M`, `A_HitHead_Side_L_M`
- **Block Reactions:** `A_BlockHit_F_IP`, `A_BlockHit_L_IP`, `A_BlockHit_R_IP`

### 9. DEATH ANIMATIONS (Before Ragdoll)

- **Fall Back:** `A_FallBack` → Standard death
- **Fall Front:** `A_FallFront` → Forward death
- **Fall Side:** `A_FallSide_L`, `A_FallSide_R` → Side deaths
- **Dramatic:** `A_FallBack_Mid_Roll` → With roll

## Implementation Priority

### Phase 10 Essential (17 animations):
1. ✅ `A_Jab_L` → Attack_Front
2. ✅ `A_90L_Punch` → Attack_Left
3. ✅ `A_90R_Punch` → Attack_Right
4. ✅ `A_Block_Idle` → Block_Pose_Center
5. ⚠️ `A_BlockHit_L_IP` (first frame) → Block_Pose_Left
6. ⚠️ `A_BlockHit_R_IP` (first frame) → Block_Pose_Right
7. ✅ `A_Dodge_F` → Dodge_Forward
8. ✅ `A_Dodge_B` → Dodge_Back
9. ✅ `A_Dodge_L` → Dodge_Left
10. ✅ `A_Dodge_R` → Dodge_Right
11. ✅ `A_UpperCut_Jump` → Hack_Attack
12. ✅ `A_FallBack_Twist_L` → Hack_Hit_Response
13. ✅ `A_Idle_Active` → Idle_Combat
14. ✅ `A_Move_F` → Walk_Forward
15. ✅ `A_Move_B` → Walk_Back
16. ✅ `A_Move_L` → Walk_Left
17. ✅ `A_Move_R` → Walk_Right

### Future Enhancements:
- **Combo System:** `A_JabPunchKick_L`, `A_Kick_3xCombo`, `A_Punch_3xCombo`
- **Advanced Counters:** Use full Counter_1-15 set
- **Finisher Variety:** Rotate through Finisher_1-15
- **Hit Reaction Variety:** Use directional hit reactions
- **Crouch System:** Full crouch animation set available

## Notes for Implementation

1. **Block Poses:** The marketplace doesn't have static left/right block poses. Extract first frames from `A_BlockHit_L_IP` and `A_BlockHit_R_IP` or create in Animation Blueprint.

2. **Dash Mechanic:** As discussed, use `A_Dodge_F` + attack window instead of separate dash animation.

3. **Death System:** Start with animation (`A_FallBack`), then blend to ragdoll physics.

4. **Counter Window:** Can use actual counter animations (`A_Counter_X`) instead of reusing Attack_Front.

5. **Combo Potential:** The pack has excellent combo animations that can be used in future phases for combo system implementation.

## Animation Blueprint Setup

```
State Machine:
├── Locomotion
│   ├── Idle (A_Idle_Active)
│   ├── Walk_Forward (A_Move_F)
│   ├── Walk_Back (A_Move_B)
│   ├── Walk_Left (A_Move_L)
│   └── Walk_Right (A_Move_R)
├── Combat
│   ├── Attack (Montage Slot)
│   ├── Block (Blend by CurrentBlockZone)
│   └── Dodge (Montage Slot)
└── Hit Reaction (Physics Blend)
```

## Montage Organization

Create these montages:
1. **AM_Attacks** → Sections: Front, Left, Right
2. **AM_Dodges** → Sections: Forward, Back, Left, Right
3. **AM_Counters** → Sections: Counter1-15
4. **AM_Finishers** → Sections: Finisher1-15
5. **AM_HackAttack** → Single animation
6. **AM_HitReactions** → Multiple sections by hit type