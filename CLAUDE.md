# SecondWind - Project Knowledge Base

## 🎮 Project Overview
**Game Type:** Single-player Roguelike/Soulslike Boss Rush
**Engine:** Unreal Engine 5.5 (ThirdPerson template)
**Core Focus:** 1v1 close-quarters combat with deep mechanics from simple abilities

## 📍 Current Status
**Phase:** 7 of 10 ✅ IN PROGRESS
**Previous:** Phase 6 - Memory System ✅ COMPLETED
**Current:** Phase 7 - UI & Polish (Combat HUD Implemented)
**Next:** Phase 8 - Animation System
**Timeline:** 10 phases over 11 weeks

### Recent Improvements (Phase 7 - UI System)
- ✅ Complete Combat HUD implemented in pure C++ Slate
- ✅ Player & Enemy health bars with phase indicators
- ✅ Counter attack indicators (6 vertical bars above health)
  - Dark black when empty (matches health bar background)
  - Cyan when filled (successful counter attacks)
  - Pulsing red warning after first unblocked hit (persistent)
  - "HACK READY" text appears when all 6 counters filled
  - 50px width, 12px height with 6px spacing
- ✅ Fragment counter display
- ✅ Damage numbers with floating animation
- ✅ All UI elements update in real-time during combat

### Phase 6 Completed Features
- ✅ Roguelike run system (session-based, no persistent saves)
- ✅ Memory shop system with 3 purchasable upgrades
- ✅ Fragment economy balanced for testing
- ✅ Fixed spawned enemy AI movement and phase transitions
- ✅ HackComponent now properly targets all enemy types

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
│   ├── CombatComponent.cpp/h          [Attack system]
│   ├── HealthComponent.cpp/h          [Health/phases]
│   ├── BlockingComponent.cpp/h        [Directional blocking]
│   ├── DodgeComponent.cpp/h           [Dodge & dash]
│   ├── CameraLockOnComponent.cpp/h    [Auto lock-on]
│   ├── HackComponent.cpp/h            [Hack ability]
│   ├── HackUIComponent.cpp/h          [Hack UI]
│   ├── FragmentComponent.cpp/h        [Fragments]
│   └── MemoryShopComponent.cpp/h      [Memory shop UI - Phase 6]
├── Actors/
│   ├── TrainingDummy.cpp/h            [Test enemy]
│   ├── ArenaEnemy.cpp/h               [Enemy with phases]
│   ├── ArenaDoor.cpp/h                [Doors - Phase 5B/5C]
│   ├── SafeZoneCorridor.cpp/h         [Corridors with shop - Phase 5B/6]
│   ├── SimplifiedArenaSystem.cpp/h    [Legacy room system - Phase 5B]
│   ├── ArenaZone.cpp/h                [Combat zones - Phase 5C]
│   ├── EnemySpawnPoint.cpp/h          [Enemy spawns - Phase 5C]
│   └── LevelLayoutManager.cpp/h       [Level discovery - Phase 5C]
├── Systems/
│   ├── FragmentSystem.cpp/h           [Fragment subsystem - Phase 6]
│   └── MemorySystem.cpp/h             [Memory subsystem - Phase 6]
├── SaveGame/
│   └── SecondWindSaveGame.cpp/h       [Save data - Phase 6]
├── UI/
│   ├── SecondWindHUD.cpp/h            [Main HUD class - Phase 7]
│   ├── CombatHUDWidget.cpp/h          [Combat UI Slate widget - Phase 7]
│   ├── MemoryShopWidget.cpp/h         [Slate shop UI - Phase 6]
├── GameModes/
│   └── SecondWindArenaGameMode.cpp/h  [Arena game flow]
├── SecondWindCharacter.cpp/h          [Player character]
└── SecondWindGameMode.cpp/h           [Base game mode]
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
- ✅ `AArena` - Arena management class
- ✅ `AArenaEnemy` - Enemy base class with phase system
- ✅ `AArenaManager` - Arena transitions and progression
- ✅ `UFragmentComponent` - Fragment currency system
- ✅ `ASecondWindArenaGameMode` - Game flow management
- ✅ 5 arena progression with scaling difficulty
- ✅ Fragment rewards based on enemy phases
- ✅ Safe zone and training area transitions

### Phase 5B: Physical Room System ✅ COMPLETED
- ✅ `AArenaDoor` - Interactive doors with proximity detection
- ✅ `ASafeZoneCorridor` - Marketplace corridors with healing
- ✅ `ASimplifiedArenaSystem` - Physical room progression
- ✅ 2-second door proximity requirement
- ✅ Combat-locked exit doors (must defeat enemies)
- ✅ Safe zone healing system
- ✅ Enemy spawn/despawn management
- ✅ Removed teleportation and debug keys

### Phase 5C: Pre-Placed Level Design System ✅ COMPLETED
- ✅ `AArenaZone` - Combat areas with bounds and zone management
- ✅ `AEnemySpawnPoint` - Enemy spawn locations with phase control
- ✅ `ALevelLayoutManager` - Discovery and management of pre-placed actors
- ✅ Editor-placed geometry support
- ✅ Discovery system for runtime initialization
- ✅ Flexible non-linear progression support
- ✅ Zone-based combat state tracking
- ✅ Game mode integration with toggle between systems
- ✅ Arena enemy AI improvements (face player, movement, attacks)
- ✅ Camera lock-on for arena enemies
- ✅ Player spawn in Starting Hub (Zone 0)
- ✅ Fixed duplicate zone registration
- ✅ Fixed dead enemy targeting
- ✅ Removed deprecated files: Arena.cpp/h, ArenaManager.cpp/h

### Phase 6: Memory System ✅ COMPLETED
- ✅ `URunManager` - Roguelike run system (session-based)
- ✅ `UFragmentSystem` - Fragment currency (session persistence only)
- ✅ `UMemorySystem` - Memory unlock tracking (session persistence only)
- ✅ NO disk saves - all progress lost on game close (by design)
- ✅ `SMemoryShopWidget` - Slate UI for memory purchases
- ✅ `UMemoryShopComponent` - Shop interaction component
- ✅ Three memories implemented:
  - Quick Hack: 1 fragment (reduces hack counters 6→4)
  - Sharpened Blade: 2 fragments (+25% attack damage)
  - Hardened Resolve: 3 fragments (block reduction 40%→60%)
- ✅ Safe zone auto-opens memory shop
- ✅ Memory effects reapply on run reset
- ✅ Player death → 3s delay → new run at hub
- ✅ Fragments/memories persist between runs (same session only)
- ✅ Fragment rewards: 3 + phase number per phase (e.g., 1-phase = 4, 2-phase = 9)
- ✅ Fixed spawned enemy movement and phase transitions
- ✅ Fixed multi-phase enemy fragment rewards and door unlocking
- ✅ HackComponent now targets both training dummies and arena enemies

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
- `Phase5C_Plan.md` - Pre-placed level design system plan

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