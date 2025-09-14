# SecondWind - Project Knowledge Base

## 🎮 Project Overview
**Game Type:** Single-player Roguelike/Soulslike Boss Rush
**Engine:** Unreal Engine 5.5 (ThirdPerson template)
**Core Focus:** 1v1 close-quarters combat with deep mechanics from simple abilities

## 📍 Current Status
**Phase:** 2 of 8 - Blocking System ✅ COMPLETED
**Next:** Phase 3 - Dodge & Movement (Week 4-5)
**Timeline:** 8 phases over 11 weeks

### Phase 1 Completed Components
- ✅ `UCombatComponent` - Basic attack (5 damage) - Functional
- ✅ `UHealthComponent` - 100 HP, 2-phase system - Functional
- ✅ `ATrainingDummy` - Test enemy with respawn - Functional
- ✅ Character modifications - Attack input, movement adjustments - Configured
- ✅ Enhanced Input System - IA_Attack, IA_Move, IA_Look - Configured
- ✅ Testing Complete - All Phase 1 requirements verified working

### Phase 2 Completed Components
- ✅ `UBlockingComponent` - Directional blocking system - Functional
- ✅ 1D horizontal mouse control (left/center/right zones)
- ✅ 40% damage reduction when blocking correctly
- ✅ Counter-attack window system (0.5s)
- ✅ Block zone threshold: 0.5 (±50% from center for side blocks)

## ⚙️ Technical Requirements

### CRITICAL RULES
- **Pure C++ Implementation** - NO Blueprints for gameplay logic
- **Single-Player Only** - NO multiplayer/networking/replication
- **NO GAS** - Direct C++ components only
- **UI Framework:** Slate (C++ only)
- **Blueprints:** Asset references only

### Combat System
- **Movement:** 300 walk speed, no jump
- **Camera:** Auto lock-on, no manual toggle
  - Training Dummy: 600 units lock range (for testing)
  - Arena Enemies: 1500 units lock range
  - **NOTE:** Camera lock not yet implemented - blocking system designed for locked camera
- **Input:** Enhanced Input with 100-300ms buffer
- **Blocking:** RMB + horizontal mouse movement
  - Center zone: ±50% from center (easier to trigger)
  - Side zones: Beyond ±50% threshold

## 📁 Project Structure
```
Source/SecondWind/
├── Components/
│   ├── CombatComponent.cpp/h    [Attack system]
│   ├── HealthComponent.cpp/h    [Health/phases]
│   ├── BlockingComponent.cpp/h  [Directional blocking]
├── Actors/
│   ├── TrainingDummy.cpp/h      [Test enemy]
├── SecondWindCharacter.cpp/h    [Player character]
└── SecondWindGameMode.cpp/h     [Game mode]
```

## 📋 Implementation Phases

### Phase 1: Combat Foundation ✅ COMPLETED
Basic attack, health system, training dummy - All tested and working

### Phase 2: Blocking System ✅ COMPLETED
- Directional blocking (RMB + horizontal mouse movement)
- 1D horizontal axis control (left/center/right zones)
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
2. **Block:** RMB + horizontal mouse (left/center/right zones)
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