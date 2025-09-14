# SecondWind - Project Knowledge Base

## 🎮 Project Overview
**Game Type:** Single-player Roguelike/Soulslike Boss Rush
**Engine:** Unreal Engine 5.5 (ThirdPerson template)
**Core Focus:** 1v1 close-quarters combat with deep mechanics from simple abilities

## 📍 Current Status
**Phase:** 5B of 10 - Physical Arena System (Room-based Progression)
**Previous:** Phase 5A - Basic Arena System ✅ COMPLETED
**Next:** Phase 6 - Memory System (Week 7)
**Timeline:** 10 phases over 11 weeks

### Phase 1 Completed Components
- ✅ `UCombatComponent` - Basic attack (5 damage) - Functional
- ✅ `UHealthComponent` - 100 HP, 2-phase system - Functional
- ✅ `ATrainingDummy` - Test enemy with respawn - Functional
- ✅ Character modifications - Attack input, movement adjustments - Configured
- ✅ Enhanced Input System - IA_Attack, IA_Move, IA_Look - Configured
- ✅ Testing Complete - All Phase 1 requirements verified working

### Phase 2 Completed Components
- ✅ `UBlockingComponent` - Directional blocking system - Functional
- ✅ Position-based mouse control (tracks relative position from block start)
- ✅ 40% damage reduction when blocking correctly
- ✅ Counter-attack window system (0.5s)
- ✅ Block zone threshold: 0.4 with 30 unit sensitivity

### Phase 3 Completed Components
- ✅ `UDodgeComponent` - Strategic dodge system - Functional
- ✅ `UCameraLockOnComponent` - Auto lock-on system - Functional
- ✅ Dodge mechanics (A/S/D + Space with 0.1s hold)
- ✅ Dash system (W + Space)
- ✅ Leap attack capability during dash
- ✅ 1 second counter windows after dodges
- ✅ Camera lock with fixed pitch, horizontal-only tracking
- ✅ Strafe movement when locked on
- ✅ Mouse input disabled for camera when locked (blocking only)

### Phase 4 Completed Components
- ✅ `UHackComponent` - Special ability system - Functional
- ✅ `UHackUIComponent` - Debug UI for hack progress - Functional
- ✅ Counter-attack tracking (only during counter windows)
- ✅ 6 counter requirement for hack activation
- ✅ Reset on 2 unblocked hits
- ✅ 50 damage hack attack with 1000 range
- ✅ Counter windows allow attacking while blocking
- ✅ Visual feedback for hack availability

## ⚙️ Technical Requirements

### CRITICAL RULES
- **Pure C++ Implementation** - NO Blueprints for gameplay logic
- **Single-Player Only** - NO multiplayer/networking/replication
- **NO GAS** - Direct C++ components only
- **UI Framework:** Slate (C++ only)
- **Blueprints:** Asset references only

### Combat System
- **Movement:** 300 walk speed, no jump
- **Camera:** Auto lock-on, no manual toggle ✅ IMPLEMENTED
  - Training Dummy: 600 units lock range
  - Arena Enemies: 1500 units lock range
  - Fixed pitch when locked (-20° default)
  - Mouse controls blocking only when locked
- **Input:** Enhanced Input with 100-300ms buffer
- **Blocking:** RMB + horizontal mouse movement
  - Position-based: tracks mouse position relative to block start
  - Center zone: ±40% from reference (default, easy to maintain)
  - Side zones: Move 12+ units left/right from reference

## 📁 Project Structure
```
Source/SecondWind/
├── Components/
│   ├── CombatComponent.cpp/h        [Attack system with counter-attack]
│   ├── HealthComponent.cpp/h        [Health/phases with finisher system]
│   ├── BlockingComponent.cpp/h      [Directional blocking]
│   ├── DodgeComponent.cpp/h          [Dodge & dash mechanics]
│   ├── CameraLockOnComponent.cpp/h  [Auto lock-on system]
│   ├── HackComponent.cpp/h           [Hack special ability]
│   ├── HackUIComponent.cpp/h        [Hack progress UI]
│   ├── FragmentComponent.cpp/h       [Fragment currency]
├── Actors/
│   ├── TrainingDummy.cpp/h          [Test enemy]
│   ├── Arena.cpp/h                   [Arena base class]
│   ├── ArenaEnemy.cpp/h              [Enemy with phases]
│   ├── ArenaManager.cpp/h            [Arena progression]
├── GameModes/
│   ├── SecondWindArenaGameMode.cpp/h [Arena game flow]
├── SecondWindCharacter.cpp/h        [Player character]
└── SecondWindGameMode.cpp/h         [Base game mode]
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

### Phase 3: Dodge & Movement ✅ COMPLETED
- Strategic dodge (A/S/D + Space with 0.1s hold)
- Dash & leap attack (W + Space, LMB during dash)
- Camera lock-on system (auto-targeting)
- Strafe movement when locked
- Counter windows after dodges (1 second)
- Weak side mechanics framework

### Phase 4: Special Abilities ✅ COMPLETED
- Hack attack (6 counter requirement)
- Counter-attack system (LMB during counter windows)
- Reset on 2 unblocked hits
- UI meter system (debug display)
- 50 damage with 1000 range
- Visual feedback for availability

### Phase 5A: Arena System (Basic) ✅ COMPLETED
- ✅ `AArena` - Arena management class - Functional
- ✅ `AArenaEnemy` - Enemy base class with phase system - Functional
- ✅ `AArenaManager` - Arena transitions and progression - Functional
- ✅ `UFragmentComponent` - Fragment currency system - Functional
- ✅ `ASecondWindArenaGameMode` - Game flow management - Functional
- ✅ 5 arena progression with scaling difficulty
- ✅ Fragment rewards based on enemy phases
- ✅ Safe zone and training area transitions

### Phase 5B: Physical Room System 🚧 IN PROGRESS
**Goal:** Replace teleport-based transitions with physical room navigation

#### Code Cleanup Required:
- **Remove**: ArenaManager teleportation logic
- **Remove**: Debug keys (1, 2) for transitions
- **Remove**: Complex state management
- **Keep**: FragmentComponent, ArenaEnemy base class

#### New Components:
- `AArenaDoor` - Interactive doors with proximity detection
- `ADoorProximityTrigger` - 2-second proximity requirement for activation
- `ASafeZoneCorridor` - Marketplace corridors between arenas
- `ASimplifiedArenaSystem` - Minimal door and enemy management

#### Gameplay Flow:
```
[Starting Hub] → [Door 1] → [Arena 1] → [Exit] → [Safe Zone Corridor 1] → [Door 2] → [Arena 2] → ...
      ↓            ↓           ↓          ↓              ↓                   ↓           ↓
Training Dummy  2sec wait   Enemy 1   Defeated      Marketplace         2sec wait    Enemy 2
                Door Opens                                              Door Opens   (Enemy 1 despawns)
```

#### Key Mechanics:
1. **Door Interaction**: Stand in proximity box for 2 seconds to activate
2. **Door Opening**: Animation plays while enemy spawns behind door
3. **Enemy Management**: Only current arena enemy exists (previous despawns on new arena entry)
4. **Safe Zone Corridors**: Linear marketplace hallways between arenas
5. **No Backtracking**: Doors lock after passing through
6. **Visual Feedback**: Door proximity UI shows 2-second timer
7. **Audio Cues**: Door opening sounds, enemy spawn alerts

### Phase 6: Memory System
- Save/load functionality
- Fragment currency
- Permanent upgrades

### Phase 7: UI & Polish
- Slate UI implementation
- Menu systems
- HUD elements

### Phase 8: Animation System
- Combat animations
- Animation notifies
- Smooth transitions

### Phase 9: SFX & VFX
- Sound effects
- Visual effects
- Game feel enhancements

### Phase 10: Enemy AI
- Attack patterns
- Feints and combos
- Phase-based behaviors

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
# IMPORTANT: NEVER attempt to build or compile the project
# The user will handle all compilation and building

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