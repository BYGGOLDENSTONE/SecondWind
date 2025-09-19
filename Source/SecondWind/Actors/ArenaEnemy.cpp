#include "ArenaEnemy.h"
#include "../Components/HealthComponent.h"
#include "../Components/CombatComponent.h"
#include "../Components/WeakSideComponent.h"
#include "../Components/FragmentComponent.h"
#include "../SecondWindCharacter.h"
#include "../Systems/EnemyManager.h"
#include "../Systems/GamestyleSystem.h"
#include "../Systems/MemorySystem.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Engine/GameInstance.h"
#include "ArenaZone.h"
#include "EnemySpawnPoint.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/DamageEvents.h"

AArenaEnemy::AArenaEnemy()
{
    PrimaryActorTick.bCanEverTick = true;

    HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("HealthComponent"));
    CombatComponent = CreateDefaultSubobject<UCombatComponent>(TEXT("CombatComponent"));
    WeakSideComponent = CreateDefaultSubobject<UWeakSideComponent>(TEXT("WeakSideComponent"));

    GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);
    GetCharacterMovement()->MaxWalkSpeed = 400.f;

    OwnerZone = nullptr;
    SpawnPoint = nullptr;
}

void AArenaEnemy::BeginPlay()
{
    Super::BeginPlay();

    // Ensure AI controller is spawned if not already present
    if (!GetController())
    {
        SpawnDefaultController();
        UE_LOG(LogTemp, Warning, TEXT("ArenaEnemy: Spawned default controller in BeginPlay"));
    }

    // Bind to damage event to track damage taken
    OnTakeAnyDamage.AddDynamic(this, &AArenaEnemy::OnTakeDamage);

    // Ensure movement component is properly initialized
    if (GetCharacterMovement())
    {
        GetCharacterMovement()->MaxWalkSpeed = 400.0f;
        GetCharacterMovement()->bOrientRotationToMovement = true;
        GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.0f, 0.0f);
        UE_LOG(LogTemp, Warning, TEXT("ArenaEnemy: Movement component initialized"));
    }

    // Register with enemy manager
    if (UGameInstance* GameInstance = GetGameInstance())
    {
        if (UEnemyManager* EnemyManager = GameInstance->GetSubsystem<UEnemyManager>())
        {
            EnemyManager->RegisterEnemy(this);
        }

        // Check if Tactical Analysis memory is unlocked and activate weak side
        if (UMemorySystem* MemorySystem = GameInstance->GetSubsystem<UMemorySystem>())
        {
            if (MemorySystem->IsMemoryUnlocked(TEXT("MEMORY_WEAK_SIDE")))
            {
                if (WeakSideComponent)
                {
                    WeakSideComponent->ActivateWeakSide();
                    UE_LOG(LogTemp, Warning, TEXT("Weak side activated on enemy due to Tactical Analysis memory"));
                }
            }
        }
    }

    if (HealthComponent)
    {
        HealthComponent->OnPhaseTransition.AddDynamic(this, &AArenaEnemy::OnPhaseTransition);
        HealthComponent->OnDeath.AddDynamic(this, &AArenaEnemy::OnEnemyDeath);
        HealthComponent->OnEnterFinisherState.AddDynamic(this, &AArenaEnemy::EnterFinisherState);
        UE_LOG(LogTemp, Warning, TEXT("ArenaEnemy: Health delegates bound successfully"));
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("ERROR: ArenaEnemy has no HealthComponent!"));
    }

    // Mark combat start time
    CombatStartTime = GetWorld()->GetTimeSeconds();

    // Start attacking every 2-3 seconds
    GetWorldTimerManager().SetTimer(AttackTimerHandle, this, &AArenaEnemy::PerformAttack,
        FMath::RandRange(2.0f, 3.0f), true, 1.0f);
}

void AArenaEnemy::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    // Unregister from enemy manager
    if (UGameInstance* GameInstance = GetGameInstance())
    {
        if (UEnemyManager* EnemyManager = GameInstance->GetSubsystem<UEnemyManager>())
        {
            EnemyManager->UnregisterEnemy(this);
        }
    }

    Super::EndPlay(EndPlayReason);
}

void AArenaEnemy::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // Continuously face and move toward player when in combat
    if (!IsDefeated() && !HealthComponent->IsInFinisherState())
    {
        AActor* Player = FindPlayer();
        if (Player)
        {
            float Distance = FVector::Dist(GetActorLocation(), Player->GetActorLocation());

            // Face the player
            FVector DirectionToPlayer = (Player->GetActorLocation() - GetActorLocation()).GetSafeNormal();
            FRotator NewRotation = DirectionToPlayer.Rotation();
            NewRotation.Pitch = 0.0f; // Keep enemy upright
            NewRotation.Roll = 0.0f;
            SetActorRotation(NewRotation);

            // Move toward player if not in attack range
            if (Distance > AttackRange && Distance <= 800.0f)
            {
                // Use character movement for smoother motion
                if (GetCharacterMovement())
                {
                    // Clear any existing movement input first
                    GetCharacterMovement()->StopMovementImmediately();

                    // Add fresh movement input toward player
                    GetCharacterMovement()->AddInputVector(DirectionToPlayer);

                    // Force movement update if not moving
                    if (GetVelocity().Size() < 10.0f)
                    {
                        // Try alternative movement approach
                        FVector NewLocation = GetActorLocation() + (DirectionToPlayer * GetCharacterMovement()->MaxWalkSpeed * DeltaTime);
                        SetActorLocation(NewLocation, true);
                        UE_LOG(LogTemp, VeryVerbose, TEXT("Enemy forcing movement toward player"));
                    }
                }
            }
            else if (Distance <= AttackRange)
            {
                // Stop when in attack range
                if (GetCharacterMovement())
                {
                    GetCharacterMovement()->StopMovementImmediately();
                }
            }
        }
    }
}

void AArenaEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void AArenaEnemy::InitializeEnemy(int32 ArenaNumber)
{
    UE_LOG(LogTemp, Warning, TEXT("=== INITIALIZING ENEMY FOR ARENA %d ==="), ArenaNumber);

    ArenaLevel = ArenaNumber;
    MaxPhases = ArenaNumber;
    CurrentPhase = 1;

    SetupPhases();

    // Verify initialization
    UE_LOG(LogTemp, Warning, TEXT("ArenaEnemy Initialized:"));
    UE_LOG(LogTemp, Warning, TEXT("  - ArenaLevel: %d"), ArenaLevel);
    UE_LOG(LogTemp, Warning, TEXT("  - MaxPhases: %d"), MaxPhases);
    UE_LOG(LogTemp, Warning, TEXT("  - CurrentPhase: %d"), CurrentPhase);
    UE_LOG(LogTemp, Warning, TEXT("  - Has HealthComponent: %s"), HealthComponent ? TEXT("YES") : TEXT("NO"));
    UE_LOG(LogTemp, Warning, TEXT("  - Has Controller: %s"), GetController() ? TEXT("YES") : TEXT("NO"));
}

void AArenaEnemy::OnPhaseTransition()
{
    UE_LOG(LogTemp, Warning, TEXT("=== PHASE TRANSITION: Old phase %d/%d ==="), CurrentPhase, MaxPhases);

    // Store the old phase before syncing
    int32 CompletedPhase = CurrentPhase;

    // Update our phase counter to match the HealthComponent's phase
    // The HealthComponent has already incremented its phase
    if (HealthComponent)
    {
        CurrentPhase = HealthComponent->GetCurrentPhase();
        UE_LOG(LogTemp, Warning, TEXT("Updated to new phase %d/%d from HealthComponent"), CurrentPhase, MaxPhases);
    }

    // Award fragments for the phase we just completed (CompletedPhase, not CurrentPhase)
    UE_LOG(LogTemp, Warning, TEXT("PHASE TRANSITION: About to award fragments for phase %d"), CompletedPhase);
    AwardPhaseFragments(CompletedPhase);
    UE_LOG(LogTemp, Warning, TEXT("PHASE TRANSITION: Awarded fragments for completing phase %d"), CompletedPhase);

    // Reset damage taken for potential no-hit bonus on next phase
    DamageTakenThisLife = 0.0f;
    // Reset combat timer for quick kill tracking
    CombatStartTime = GetWorld()->GetTimeSeconds();

    // Start the next phase (re-enable movement, adjust stats, etc.)
    StartNextPhase();

    // Restart attack timer for next phase
    GetWorldTimerManager().SetTimer(AttackTimerHandle, this, &AArenaEnemy::PerformAttack,
        FMath::RandRange(2.0f, 3.0f), true, 1.0f);
}

void AArenaEnemy::OnEnemyDeath()
{
    // Sync phase with HealthComponent before checking
    if (HealthComponent)
    {
        CurrentPhase = HealthComponent->GetCurrentPhase();
    }

    UE_LOG(LogTemp, Warning, TEXT("=== OnEnemyDeath Called: Phase %d/%d ==="), CurrentPhase, MaxPhases);

    if (CurrentPhase >= MaxPhases)
    {
        // Award fragments for defeating the enemy
        // The final phase reward is the number of phases (MaxPhases)
        // For 1-phase enemy: 1 fragment
        // For 2-phase enemy: 2 fragments (phase 1 already gave 1)
        // For 3-phase enemy: 3 fragments (phases 1&2 already gave 1+2)
        UE_LOG(LogTemp, Warning, TEXT("ENEMY DEATH: About to award fragments for final phase %d"), MaxPhases);
        AwardPhaseFragments(MaxPhases);
        UE_LOG(LogTemp, Warning, TEXT("ENEMY DEATH: Awarded fragments for final phase %d"), MaxPhases);

        UE_LOG(LogTemp, Warning, TEXT("=== ENEMY DEATH ==="));
        UE_LOG(LogTemp, Warning, TEXT("Enemy defeated in Arena %d! MaxPhases: %d"),
            ArenaLevel, MaxPhases);
        UE_LOG(LogTemp, Warning, TEXT("OwnerZone is %s"), OwnerZone ? TEXT("SET") : TEXT("NULL"));

        // Stop attacking when dead
        GetWorldTimerManager().ClearTimer(AttackTimerHandle);

        // Notify the spawn point that this enemy is dead
        if (SpawnPoint)
        {
            UE_LOG(LogTemp, Warning, TEXT("Notifying SpawnPoint that enemy is dead"));
            SpawnPoint->OnSpawnedEnemyDied();
        }

        // Notify the zone if using LevelLayoutManager system
        if (OwnerZone)
        {
            UE_LOG(LogTemp, Warning, TEXT("Notifying OwnerZone of enemy defeat"));
            OwnerZone->OnEnemyDefeated(this);
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("ERROR: OwnerZone is NULL - cannot notify zone of enemy defeat!"));
        }

        // Add gamestyle stack for this enemy kill
        if (UGameInstance* GameInstance = GetGameInstance())
        {
            if (UGamestyleSystem* GamestyleSystem = GameInstance->GetSubsystem<UGamestyleSystem>())
            {
                GamestyleSystem->AddGamestyleStack();
                UE_LOG(LogTemp, Warning, TEXT("Added gamestyle stack for enemy kill"));
            }
        }

        // Unregister from enemy manager on death
        if (UGameInstance* GameInstance = GetGameInstance())
        {
            if (UEnemyManager* EnemyManager = GameInstance->GetSubsystem<UEnemyManager>())
            {
                EnemyManager->UnregisterEnemy(this);
            }
        }

        // Hide and disable collision like TrainingDummy, but schedule destruction instead of respawn
        SetActorEnableCollision(false);
        GetMesh()->SetVisibility(false);

        // Schedule despawn/destruction after a short delay (2 seconds)
        FTimerHandle DespawnTimerHandle;
        GetWorldTimerManager().SetTimer(DespawnTimerHandle, this, &AArenaEnemy::DespawnEnemy, 2.0f, false);

        UE_LOG(LogTemp, Warning, TEXT("Enemy will despawn in 2 seconds..."));
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("Enemy not fully defeated yet (Phase %d/%d)"), CurrentPhase, MaxPhases);
    }
}

void AArenaEnemy::ExecuteFinisher()
{
    if (!HealthComponent || !HealthComponent->IsInFinisherState())
    {
        return;
    }

    // Let the HealthComponent handle the finisher
    HealthComponent->ExecuteFinisher();
}

int32 AArenaEnemy::CalculateFragmentReward() const
{
    // This is only called when enemy is fully defeated (final phase)
    // Return the fragment reward for completing the final phase
    return GetPhaseFragmentReward(MaxPhases);
}

int32 AArenaEnemy::GetPhaseFragmentReward(int32 Phase) const
{
    // Phase-based rewards: phase number = fragments
    // Phase 1 = 1 fragment, Phase 2 = 2 fragments, etc.
    return Phase;
}

void AArenaEnemy::OnTakeDamage(AActor* DamagedActor, float Damage, const class UDamageType* DamageType,
    class AController* InstigatedBy, AActor* DamageCauser)
{
    // Track damage taken for no-hit bonus calculation
    DamageTakenThisLife += Damage;
    UE_LOG(LogTemp, Warning, TEXT("ArenaEnemy took %.1f damage (total this phase: %.1f)"),
        Damage, DamageTakenThisLife);
}

void AArenaEnemy::AwardPhaseFragments(int32 PhaseCompleted)
{
    UE_LOG(LogTemp, Warning, TEXT("*** AWARDING FRAGMENTS for Phase %d completion (MaxPhases: %d) ***"),
        PhaseCompleted, MaxPhases);

    int32 BaseFragments = GetPhaseFragmentReward(PhaseCompleted);
    int32 BonusFragments = 0;

    // Calculate bonuses only for final phase (enemy defeated)
    if (PhaseCompleted == MaxPhases)
    {
        // No-hit bonus: +1 fragment
        if (DamageTakenThisLife <= 0.0f)
        {
            BonusFragments += 1;
            UE_LOG(LogTemp, Warning, TEXT("No-hit kill bonus! +1 fragment"));
        }

        // Quick kill bonus: +1 fragment if killed under 2 seconds (reduced for testing)
        float CombatDuration = GetWorld()->GetTimeSeconds() - CombatStartTime;
        if (CombatDuration < 2.0f && CombatStartTime > 0.0f)
        {
            BonusFragments += 1;
            UE_LOG(LogTemp, Warning, TEXT("Quick kill bonus (%.1fs)! +1 fragment"), CombatDuration);
        }
    }

    int32 TotalFragments = BaseFragments + BonusFragments;

    // Award fragments to player
    if (ASecondWindCharacter* PlayerCharacter = Cast<ASecondWindCharacter>(
        GetWorld()->GetFirstPlayerController()->GetPawn()))
    {
        if (UFragmentComponent* FragComponent = PlayerCharacter->FindComponentByClass<UFragmentComponent>())
        {
            FragComponent->AddFragments(TotalFragments);
            UE_LOG(LogTemp, Warning, TEXT("Awarded %d fragments (base: %d, bonus: %d) for Phase %d completion"),
                TotalFragments, BaseFragments, BonusFragments, PhaseCompleted);
        }
    }
}

void AArenaEnemy::SetupPhases()
{
    if (HealthComponent)
    {
        HealthComponent->SetMaxPhases(MaxPhases);
        HealthComponent->ResetHealth();

        // Make sure our phase counter is synchronized with HealthComponent
        CurrentPhase = HealthComponent->GetCurrentPhase();

        UE_LOG(LogTemp, Warning, TEXT("ArenaEnemy: Set up %d phases for health component, current phase: %d"),
            MaxPhases, CurrentPhase);
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("ERROR: Cannot setup phases - no HealthComponent!"));
    }
}

void AArenaEnemy::StartNextPhase()
{
    // Re-enable movement
    if (GetCharacterMovement())
    {
        GetCharacterMovement()->SetMovementMode(MOVE_Walking);
        GetCharacterMovement()->MaxWalkSpeed = 400.f + (CurrentPhase - 1) * 50.f;
    }

    // Scale up damage for new phase
    BaseDamage = 10 + (CurrentPhase - 1) * 5;

    UE_LOG(LogTemp, Warning, TEXT("Phase %d started: Speed=%f, Damage=%d, Movement re-enabled"),
        CurrentPhase, GetCharacterMovement()->MaxWalkSpeed, BaseDamage);
}

void AArenaEnemy::EnterFinisherState()
{
    // Stop all movement when entering finisher state
    if (GetCharacterMovement())
    {
        GetCharacterMovement()->DisableMovement();
        GetCharacterMovement()->StopMovementImmediately();
    }

    // Stop attack timer
    GetWorldTimerManager().ClearTimer(AttackTimerHandle);

    UE_LOG(LogTemp, Warning, TEXT("Enemy stunned! Waiting for finisher..."));
}

bool AArenaEnemy::IsDefeated() const
{
    return HealthComponent && !HealthComponent->IsAlive();
}

void AArenaEnemy::SetPhaseCount(int32 PhaseCount)
{
    MaxPhases = FMath::Max(1, PhaseCount);
    if (HealthComponent)
    {
        HealthComponent->SetMaxPhases(MaxPhases);
    }
    UE_LOG(LogTemp, Warning, TEXT("Enemy phases set to %d"), MaxPhases);
}

void AArenaEnemy::SetOwnerZone(AArenaZone* Zone)
{
    OwnerZone = Zone;
    if (Zone)
    {
        UE_LOG(LogTemp, Warning, TEXT("Enemy OwnerZone set to Zone (ptr: %p)"), Zone);
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("ERROR: SetOwnerZone called with NULL zone!"));
    }
}

void AArenaEnemy::SetSpawnPoint(AEnemySpawnPoint* InSpawnPoint)
{
    SpawnPoint = InSpawnPoint;
    if (SpawnPoint)
    {
        UE_LOG(LogTemp, Warning, TEXT("Enemy SpawnPoint set (Arena %d)"), SpawnPoint->ArenaNumber);
    }
}

void AArenaEnemy::PerformAttack()
{
    if (!IsDefeated() && HealthComponent && !HealthComponent->IsInFinisherState())
    {
        AActor* Player = FindPlayer();
        if (Player)
        {
            // Check if player is in finisher state first
            if (UHealthComponent* PlayerHealth = Player->FindComponentByClass<UHealthComponent>())
            {
                if (PlayerHealth->IsInFinisherState())
                {
                    float Distance = FVector::Dist(GetActorLocation(), Player->GetActorLocation());

                    // Use CombatComponent's attack range if available, otherwise use legacy value
                    float FinisherRange = CombatComponent ? 150.0f * 1.5f : AttackRange;

                    if (Distance <= FinisherRange)
                    {
                        // Execute finisher on player
                        PlayerHealth->ExecuteFinisher();
                        UE_LOG(LogTemp, Warning, TEXT("ArenaEnemy executed FINISHER on player!"));
                        return;
                    }
                }
            }

            // Use CombatComponent for normal attack if available
            if (CombatComponent && CombatComponent->CanAttack())
            {
                // Face the player before attacking
                FVector DirectionToPlayer = (Player->GetActorLocation() - GetActorLocation()).GetSafeNormal();
                SetActorRotation(DirectionToPlayer.Rotation());

                // Perform attack using CombatComponent
                CombatComponent->PerformAttack();
                UE_LOG(LogTemp, Warning, TEXT("ArenaEnemy attacking using CombatComponent"));
            }
            else if (!CombatComponent)
            {
                // Fallback to legacy attack system if no CombatComponent
                float Distance = FVector::Dist(GetActorLocation(), Player->GetActorLocation());
                if (Distance <= AttackRange)
                {
                    UGameplayStatics::ApplyPointDamage(
                        Player,
                        BaseDamage,
                        Player->GetActorLocation(),
                        FHitResult(),
                        nullptr,
                        this,
                        UDamageType::StaticClass()
                    );
                    UE_LOG(LogTemp, Warning, TEXT("ArenaEnemy attacking with legacy system for %d damage"), BaseDamage);
                }
            }
        }
    }
}

AActor* AArenaEnemy::FindPlayer() const
{
    ACharacter* PlayerCharacter = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
    return PlayerCharacter;
}

bool AArenaEnemy::IsInFinisherState() const
{
    return HealthComponent && HealthComponent->IsInFinisherState();
}

void AArenaEnemy::DespawnEnemy()
{
    UE_LOG(LogTemp, Warning, TEXT("ArenaEnemy despawning - destroying actor"));

    // Final cleanup before destruction
    GetWorldTimerManager().ClearAllTimersForObject(this);

    // Destroy the actor
    Destroy();
}