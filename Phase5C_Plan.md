# Phase 5C: Pre-Placed Level Design System

## Overview
Transform the arena system from runtime-spawned to editor-placed, giving level designers full control over arena layout, size, and progression flow.

## Current State (Phase 5B - Completed)
- ✅ Physical room-based progression with doors and corridors
- ✅ SimplifiedArenaSystem spawns all geometry at runtime
- ✅ Linear progression through 5 arenas
- ✅ Combat-locked doors (must defeat enemies to progress)
- ✅ Safe zone corridors with healing

## Phase 5C Goals
- Pre-place all level geometry in editor
- Visual level design with full control
- Enemy spawn point system
- Discovery-based management
- Support for non-linear layouts
- Maintain all Phase 5B functionality

## Architecture Design

### New Classes to Create

#### 1. AArenaZone
```cpp
class AArenaZone : public AActor
{
    // Properties:
    int32 ZoneNumber;                    // Arena identifier
    FName ZoneName;                       // Optional custom name
    TArray<AEnemySpawnPoint*> SpawnPoints;
    AArenaDoor* EntryDoor;               // Reference to entry door
    AArenaDoor* ExitDoor;                // Reference to exit door
    UBoxComponent* ZoneBounds;           // Defines arena area
    bool bIsCleared;                      // Track completion

    // Methods:
    void RegisterWithManager();
    void ActivateZone();
    void DeactivateZone();
    void OnEnemyDefeated();
    bool IsZoneActive();
}
```

#### 2. AEnemySpawnPoint
```cpp
class AEnemySpawnPoint : public AActor
{
    // Properties:
    int32 ArenaNumber;                   // Which arena this belongs to
    TSubclassOf<AArenaEnemy> EnemyClass; // Enemy type to spawn
    int32 PhaseOverride;                 // Override phase count (-1 = use arena default)
    bool bIsTrainingDummy;               // Special flag for training dummy
    UArrowComponent* DirectionIndicator; // Visual spawn direction

    // Methods:
    AArenaEnemy* SpawnEnemy();
    void ClearSpawnPoint();
    void SetEnemyPhases(int32 Phases);
}
```

#### 3. ALevelLayoutManager (Replaces SimplifiedArenaSystem)
```cpp
class ALevelLayoutManager : public AActor
{
    // Properties:
    TMap<int32, AArenaZone*> ArenaZones;
    TMap<int32, AEnemySpawnPoint*> SpawnPoints;
    TArray<AArenaDoor*> AllDoors;
    TArray<ASafeZoneCorridor*> AllCorridors;
    int32 CurrentArenaNumber;
    bool bInCombat;

    // Methods:
    void DiscoverLevelActors();
    void RegisterArenaZone(AArenaZone* Zone);
    void RegisterSpawnPoint(AEnemySpawnPoint* Point);
    void OnPlayerEnterZone(int32 ZoneNumber);
    void OnEnemyDefeated(int32 ZoneNumber);
    void SpawnEnemiesForZone(int32 ZoneNumber);
    void UpdateDoorStates();
}
```

### Level Design Workflow

#### 1. Initial Setup
```
1. Create empty level or use template
2. Place ALevelLayoutManager actor (only one)
3. Begin placing arena components
```

#### 2. Arena Creation
```
For each arena:
1. Place AArenaZone actor
2. Scale ZoneBounds to desired arena size
3. Set ZoneNumber (1, 2, 3, etc.)
4. Place AEnemySpawnPoint inside zone
5. Link spawn point to zone
6. Place entry and exit doors
7. Link doors to zone
```

#### 3. Corridor Creation
```
Between arenas:
1. Place ASafeZoneCorridor actor
2. Scale to desired corridor size
3. Set healing properties
4. Place marketplace props (optional)
```

#### 4. Starting Hub
```
1. Place special AArenaZone with ZoneNumber = 0
2. Place training dummy spawn point
3. Set bIsTrainingDummy = true
4. No exit door required
```

### Discovery System Implementation

#### BeginPlay Flow
```cpp
void ALevelLayoutManager::BeginPlay()
{
    // 1. Find all pre-placed actors
    DiscoverArenaZones();
    DiscoverSpawnPoints();
    DiscoverDoors();
    DiscoverCorridors();

    // 2. Validate level setup
    ValidateZoneConnections();
    ValidateDoorPairs();

    // 3. Initialize starting state
    SpawnTrainingDummy();
    SetInitialDoorStates();

    // 4. Begin gameplay
    EnablePlayerMovement();
}
```

#### Zone Discovery
```cpp
void ALevelLayoutManager::DiscoverArenaZones()
{
    TArray<AActor*> FoundActors;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), AArenaZone::StaticClass(), FoundActors);

    for (AActor* Actor : FoundActors)
    {
        AArenaZone* Zone = Cast<AArenaZone>(Actor);
        if (Zone)
        {
            RegisterArenaZone(Zone);
        }
    }
}
```

### Combat Flow

#### Player Enters Arena
```
1. Zone detects player overlap
2. Notifies LevelLayoutManager
3. Manager spawns enemies at spawn points
4. Locks entry door
5. Sets exit door to require combat clear
```

#### Enemy Defeated
```
1. Enemy notifies manager
2. Manager checks if all enemies defeated
3. If yes: unlock exit door, mark zone cleared
4. Allow progression to next area
```

### Advantages of Phase 5C

1. **Visual Design**
   - See exact arena layout in editor
   - Adjust sizes without recompiling
   - Place props and decorations

2. **Flexibility**
   - Non-linear progression possible
   - Multiple paths through levels
   - Secret areas and shortcuts

3. **Testing**
   - Start from any arena in editor
   - Test specific encounters easily
   - Debug visualization in editor

4. **Scalability**
   - Easy to add more arenas
   - Duplicate and modify existing setups
   - Create arena variants

5. **Performance**
   - Only spawn what's needed
   - Unload distant arenas
   - Better memory management

## Implementation Steps

### Session 1: Core Classes
1. Create AArenaZone class
2. Create AEnemySpawnPoint class
3. Create ALevelLayoutManager class
4. Add discovery methods

### Session 2: Integration
1. Update door system for zone awareness
2. Implement spawn point system
3. Connect combat flow
4. Test basic progression

### Session 3: Polish
1. Add editor visualization
2. Implement validation checks
3. Create example layouts
4. Documentation and cleanup

## Testing Checklist

- [ ] Zones discovered correctly on startup
- [ ] Enemies spawn at designated points
- [ ] Doors lock/unlock based on combat state
- [ ] Training dummy respawns correctly
- [ ] Safe zones heal player
- [ ] Progression tracking works
- [ ] Multiple arena layouts supported
- [ ] Editor preview accurate

## Migration Guide

### From Phase 5B to 5C
1. Keep existing door and enemy classes
2. Remove SimplifiedArenaSystem from level
3. Place LevelLayoutManager
4. Manually place doors and zones
5. Set up spawn points
6. Test progression

## Blueprint Setup Required

### BP_ArenaZone
- Set zone bounds size
- Assign zone number
- Link doors (optional)

### BP_EnemySpawnPoint
- Choose enemy class
- Set phase override
- Position and rotation

### BP_LevelLayoutManager
- Assign enemy blueprints
- Configure spawn settings

## Next Session Goals
1. Implement core classes (ArenaZone, EnemySpawnPoint)
2. Create LevelLayoutManager
3. Test discovery system
4. Create first pre-placed arena layout
5. Validate combat flow works as expected