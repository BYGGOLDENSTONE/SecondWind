# SecondWind - Project Knowledge Base

## 🎮 Project Overview
**Game Type:** Single-player Roguelike/Soulslike Boss Rush
**Engine:** Unreal Engine 5.5 (ThirdPerson template)
**Core Focus:** 1v1 close-quarters combat with deep mechanics from simple abilities

## 📍 Current Status
**Phase:** 1 of 8 - Combat Foundation ✅ COMPLETED & TESTED
**Next:** Phase 2 - Blocking System (Week 3)
**Timeline:** 8 phases over 11 weeks

### Phase 1 Completed Components
- ✅ `UCombatComponent` - Basic attack (5 damage) - Functional
- ✅ `UHealthComponent` - 100 HP, 2-phase system - Functional
- ✅ `ATrainingDummy` - Test enemy with respawn - Functional
- ✅ Character modifications - Attack input, movement adjustments - Configured
- ✅ Enhanced Input System - IA_Attack, IA_Move, IA_Look - Configured
- ✅ Testing Complete - All Phase 1 requirements verified working

## ⚙️ Technical Requirements

### CRITICAL RULES
- **Pure C++ Implementation** - NO Blueprints for gameplay logic
- **Single-Player Only** - NO multiplayer/networking/replication
- **NO GAS** - Direct C++ components only
- **UI Framework:** Slate (C++ only)
- **Blueprints:** Asset references only

### Combat System
- **Movement:** 300 walk speed, no jump
- **Camera:** Auto lock-on at 1500 units, no manual toggle
- **Input:** Enhanced Input with 100-300ms buffer

## 📁 Project Structure
```
Source/SecondWind/
├── Components/
│   ├── CombatComponent.cpp/h    [Attack system]
│   ├── HealthComponent.cpp/h    [Health/phases]
├── Actors/
│   ├── TrainingDummy.cpp/h      [Test enemy]
├── SecondWindCharacter.cpp/h    [Player character]
└── SecondWindGameMode.cpp/h     [Game mode]
```

## 📋 Implementation Phases

### Phase 1: Combat Foundation ✅ COMPLETED
Basic attack, health system, training dummy - All tested and working

### Phase 2: Blocking System 🔜
- Directional blocking (RMB + mouse delta)
- 40% damage reduction
- Counter-attack windows (0.5s)
- No parry mechanic

### Phase 3: Dodge & Movement
- Strategic dodge (A/S/D + Space)
- Dash & leap attack (W + Space)
- Weak side mechanics

### Phase 4: Special Abilities
- Hack attack (6 counter requirement)
- UI meter system
- Reset conditions

### Phase 5: Enemy AI
- Attack patterns
- Feints and combos
- Phase behaviors

### Phase 6: Arena System
- 5 arenas progression
- Fragment rewards
- Memory unlocks

### Phase 7: UI & Polish
- Slate UI implementation
- Visual effects
- Audio integration

### Phase 8: Finalization
- Balance tuning
- Bug fixes
- Performance optimization

## 🎯 Core Mechanics

### Combat Abilities
1. **Attack:** LMB, 5 damage base
2. **Block:** RMB + mouse for direction
3. **Dodge:** Direction + Space (0.1s hold)
4. **Dash:** W + Space
5. **Hack:** Special after 6 counters

### Health System
- Player: 100 HP × 2 phases
- Enemies: 100 HP × 1-5 phases
- Finisher system between phases

## 📚 Key Documents
- `GDD.txt` - Full game design details
- `ImplementationPlan.txt` - Phase-by-phase breakdown
- `CLAUDE.md` - This quick reference

## 🔧 Development Commands
```bash
# Build project (if needed)
UnrealBuildTool SecondWind Win64 Development

# Common file locations
Config/DefaultInput.ini     # Input mappings
Config/DefaultEngine.ini    # Project settings
```

## ⚠️ Important Notes
- Always check existing code style before modifications
- Use Animation Notifies for combat timing
- Input buffer essential for smooth combat
- Camera lock enforces 1v1 design philosophy
- Training dummy starts simple, complexity added later