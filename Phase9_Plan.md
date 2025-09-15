# Phase 9: Blessing System (Temporary Upgrades)

## Overview
Implement a roguelike blessing system where players earn temporary upgrades after defeating enemies. These blessings are lost upon death, unlike fragments and memories which persist.

## Core Concepts

### Blessing vs Memory Distinction
- **Memories**: Permanent meta-progression upgrades purchased with fragments
- **Blessings**: Temporary run upgrades earned through combat, lost on death
- **Fragments**: Currency that persists between runs
- **Blessing Choices**: Appear after defeating arena enemies

## System Architecture

### New Classes

#### `UBlessingSystem` (Game Subsystem)
- Manages active blessings for current run
- Handles blessing generation and offering
- Clears all blessings on death/run reset
- Integrates with existing MemorySystem

#### `UBlessingData` (Data Asset)
- Defines individual blessing properties
- Categories: Offensive, Defensive, Utility
- Rarity tiers: Common, Rare, Epic
- Stack behavior: Replace, Stack, or Unique

#### `UBlessingComponent` (Actor Component)
- Attached to player character
- Applies blessing effects to combat stats
- Interfaces with existing components (Combat, Health, Block, Dodge, Hack)

#### `SBlessingSelectionWidget` (Slate UI)
- Post-combat blessing selection screen
- Shows 3 random blessing options
- Displays current active blessings
- Skip option if player doesn't want any

### Blessing Categories

#### Offensive Blessings
1. **Razor Edge** - +10% attack damage
2. **Swift Strike** - -0.1s attack recovery time
3. **Critical Mind** - 15% chance for 2x damage
4. **Hack Overflow** - Hack deals 25% more damage
5. **Counter Master** - Counter attacks deal +50% damage
6. **Combo Fury** - Third consecutive hit deals double damage

#### Defensive Blessings
1. **Iron Guard** - +10% block damage reduction
2. **Dodge Master** - +0.2s dodge invulnerability
3. **Second Wind** - Restore 25 HP on phase transition
4. **Counter Window** - +0.2s counter window duration
5. **Unbreakable** - First hit each phase deals 50% less damage
6. **Quick Recovery** - -0.5s on all cooldowns

#### Utility Blessings
1. **Fragment Finder** - +20% fragment rewards
2. **Hack Charge** - Start combat with 2 hack counters
3. **Movement Speed** - +15% movement speed
4. **Lock Range** - +300 camera lock-on range
5. **Blessing Synergy** - Next blessing is guaranteed rare or higher
6. **Experience** - All blessing effects +5%

### Blessing Rarity & Weighting
- **Common** (60%): Basic stat improvements
- **Rare** (30%): Significant improvements or new mechanics
- **Epic** (10%): Game-changing effects

### Implementation Details

#### Blessing Offering Rules
1. Appear after defeating all enemies in an arena zone
2. Player chooses 1 of 3 random options
3. Can skip selection (no blessing taken)
4. Blessings can stack (up to 3 of same type)
5. Maximum 10 active blessings per run

#### Integration Points
- `AArenaZone::OnAllEnemiesDefeated()` - Trigger blessing selection
- `ASecondWindCharacter::Die()` - Clear all blessings
- `UCombatComponent` - Apply damage modifiers
- `UBlockingComponent` - Apply block modifiers
- `UDodgeComponent` - Apply dodge modifiers
- `UHackComponent` - Apply hack modifiers
- `UFragmentComponent` - Apply fragment modifiers

#### Save System Updates
- Blessings NOT saved to disk
- Cleared on game exit
- Only exist during active run
- MemorySystem remains unchanged

## UI/UX Flow

### Blessing Selection Flow
1. Defeat all enemies in arena
2. Screen dims, blessing UI appears
3. Three blessing cards animate in
4. Player selects one or skips
5. UI dismisses, door unlocks
6. Continue to next zone

### HUD Integration
- Small icons showing active blessings
- Stack counter for duplicate blessings
- Tooltip on hover (if applicable)
- Position: Top-left below health bar

## Technical Requirements

### Pure C++ Implementation
- All blessing logic in C++
- Slate-based UI (no UMG)
- No Blueprint dependencies
- Data-driven blessing definitions

### Performance Considerations
- Blessing effects calculated once, cached
- Minimal per-frame overhead
- Efficient stat modification system

## Testing Checklist

### Core Functionality
- [ ] Blessing selection after combat
- [ ] Blessing effects apply correctly
- [ ] Blessings stack appropriately
- [ ] Blessings clear on death
- [ ] Skip option works

### Integration
- [ ] Combat damage modifiers work
- [ ] Block reduction modifiers work
- [ ] Dodge duration modifiers work
- [ ] Hack counter modifiers work
- [ ] Fragment reward modifiers work

### Edge Cases
- [ ] Maximum blessing limit (10)
- [ ] Stack limit per blessing (3)
- [ ] Blessing rarity weighting
- [ ] UI handles all resolutions

## File Structure
```
Source/SecondWind/
├── Systems/
│   ├── BlessingSystem.cpp/h       [Blessing subsystem]
│   └── BlessingData.cpp/h         [Blessing definitions]
├── Components/
│   └── BlessingComponent.cpp/h    [Player blessing effects]
├── UI/
│   └── BlessingSelectionWidget.cpp/h [Blessing selection UI]
└── Data/
    └── Blessings/                 [Blessing data assets]
        ├── Offensive/
        ├── Defensive/
        └── Utility/
```

## Dependencies
- Requires Phase 1-8 systems
- Builds on Memory System (Phase 6)
- Uses Combat HUD (Phase 7)
- Will benefit from Animation System (Phase 8)

## Success Metrics
- Player can earn and use blessings
- Blessings provide meaningful combat advantages
- Clear distinction between temporary (blessings) and permanent (memories)
- Smooth UI/UX for blessing selection
- No performance impact on combat