# Phase 8: Gamestyle System Implementation Plan

## Overview
A streamlined automatic progression system where each run is assigned a random "gamestyle" that determines how the player grows stronger with each arena victory. No player choices - pure gameplay focus.

## Core Design
- **One gamestyle per run** - Randomly chosen at Starting Hub
- **Linear progression** - Each arena enemy kill grants a stacking bonus
- **No selection UI** - Progression is automatic based on the gamestyle
- **Temporary** - All bonuses reset on death (roguelike)
- **Clear feedback** - UI shows current gamestyle and stack count

## The 5 Gamestyles

### 1. Defense Gamestyle
- **Bonus:** +20 max HP per arena completion
- **Smart Healing:** When HP increases, current HP scales proportionally
  - Example: 60/100 HP → kill enemy → 80/120 HP (not 60/120)
- **Progression:** 100 → 120 → 140 → 160 → 180+ HP
- **Impact:** Enables more aggressive playstyles, forgives mistakes

### 2. Offense Gamestyle
- **Bonus:** +10 attack damage per arena completion
- **Progression:** 5 → 15 → 25 → 35 → 45+ damage
- **Impact:** Shorter fights, faster phase transitions, risk/reward gameplay

### 3. Mobility Gamestyle
- **Bonus:** -0.1s ability casting/recovery time per arena completion
- **Affects:**
  - Attack recovery time (time before next attack)
  - Block activation delay
  - Dodge execution time
  - Overall "snappiness" of combat
- **Note:** Full animation speed increases will come in Phase 10
- **Impact:** Faster, more reactive combat flow

### 4. Utility Gamestyle
- **Bonus:** +0.1s counter window duration per arena completion
- **Progression:** 0.5s → 0.6s → 0.7s → 0.8s → 0.9s+ windows
- **Impact:** More forgiving timing, easier counter-attacks, smoother hack buildup

### 5. Technomancer Gamestyle
- **Bonus:** -1 hack counter requirement per arena completion
- **Progression:** 6 → 5 → 4 → 3 → 2 → 1 counters needed
- **Impact:** Hack becomes primary damage source in later arenas

## Implementation Components

### 1. GamestyleComponent (New)
```cpp
class UGamestyleComponent : public UActorComponent
{
    // Gamestyle enum (Defense, Offense, Mobility, Utility, Technomancer)
    // Current gamestyle
    // Stack count (number of upgrades)
    // Apply upgrade on enemy death
    // Reset on player death
    // Random selection at run start
};
```

### 2. Integration Points
- **HealthComponent:** Modify for Defense gamestyle max HP increases
- **CombatComponent:** Modify for Offense damage bonuses
- **BlockingComponent:** Modify for Utility counter windows
- **DodgeComponent:** Modify for Mobility timing adjustments
- **HackComponent:** Modify for Technomancer counter requirements
- **ArenaZone:** Hook OnEnemyDefeated to trigger upgrades
- **RunManager:** Reset gamestyle on new run, select random style

### 3. UI Requirements
- Display current gamestyle name (e.g., "DEFENSE RUN")
- Show stack count (e.g., "+3 UPGRADES")
- Position: Top-left corner below fragment counter
- Style: Match existing combat HUD aesthetic
- Update in real-time when upgrades occur

## Technical Considerations

### Important Rules
1. **Training dummies DO NOT trigger upgrades** - Only arena enemies count
2. **Multi-phase enemies count as ONE upgrade** - Triggered on final phase defeat
3. **No save/load** - Gamestyle resets with run (session-based)
4. **No caps initially** - Balance through playtesting

### Edge Cases
- Player dies mid-combat: Full reset, new random gamestyle
- Zone 0 (Starting Hub): Where gamestyle is selected
- Safe zones: No upgrades triggered here
- Memory interactions: Memories and gamestyles stack (e.g., Quick Hack + Technomancer)

## Implementation Order

1. **Core System**
   - Create GamestyleComponent
   - Add to SecondWindCharacter
   - Implement random selection at spawn

2. **Individual Gamestyles**
   - Defense (HealthComponent integration)
   - Offense (CombatComponent integration)
   - Utility (BlockingComponent integration)
   - Technomancer (HackComponent integration)
   - Mobility (timing system adjustments)

3. **Hook System**
   - Connect to ArenaZone enemy death events
   - Filter out training dummies
   - Trigger appropriate upgrade

4. **UI Implementation**
   - Create gamestyle display widget
   - Add to CombatHUDWidget
   - Real-time updates

5. **Testing**
   - Verify each gamestyle works independently
   - Test stacking through multiple arenas
   - Ensure proper reset on death
   - Balance pass on upgrade values

## Future Considerations (Post-Phase 8)
- Phase 10: Mobility will benefit from animation speed increases
- Phase 9: Consider gamestyle-specific memory synergies
- Phase 12: Enemy AI could adapt to player's gamestyle

## Success Criteria
- [ ] All 5 gamestyles functional
- [ ] Proper stacking per arena completion
- [ ] Training dummies correctly excluded
- [ ] UI clearly shows current style and stacks
- [ ] Full reset on death working
- [ ] No selection UI - purely automatic
- [ ] Integration with existing systems seamless