#include "ArenaEnemy.h"
#include "../Components/HealthComponent.h"
#include "../Systems/EnemyManager.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "ArenaZone.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/DamageEvents.h"

AArenaEnemy::AArenaEnemy()
{
    PrimaryActorTick.bCanEverTick = true;

    HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("HealthComponent"));

    GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);
    GetCharacterMovement()->MaxWalkSpeed = 400.f;

    OwnerZone = nullptr;
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

    // Update our phase counter to match the HealthComponent's phase
    // The HealthComponent has already incremented its phase
    if (HealthComponent)
    {
        CurrentPhase = HealthComponent->GetCurrentPhase();
        UE_LOG(LogTemp, Warning, TEXT("Updated to new phase %d/%d from HealthComponent"), CurrentPhase, MaxPhases);
    }

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
        int32 Fragments = CalculateFragmentReward();
        UE_LOG(LogTemp, Warning, TEXT("=== ENEMY DEATH ==="));
        UE_LOG(LogTemp, Warning, TEXT("Enemy defeated in Arena %d! MaxPhases: %d, Fragments: %d"),
            ArenaLevel, MaxPhases, Fragments);
        UE_LOG(LogTemp, Warning, TEXT("OwnerZone is %s"), OwnerZone ? TEXT("SET") : TEXT("NULL"));

        // Stop attacking when dead
        GetWorldTimerManager().ClearTimer(AttackTimerHandle);

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

        // Unregister from enemy manager on death
        if (UGameInstance* GameInstance = GetGameInstance())
        {
            if (UEnemyManager* EnemyManager = GameInstance->GetSubsystem<UEnemyManager>())
            {
                EnemyManager->UnregisterEnemy(this);
            }
        }
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
    // New formula: 3 base fragments + phase number for each phase
    // Phase 1: 3 + 1 = 4 fragments
    // Phase 2: 3 + 2 = 5 fragments
    // Phase 3: 3 + 3 = 6 fragments, etc.
    int32 TotalFragments = 0;
    for (int32 i = 1; i <= MaxPhases; i++)
    {
        TotalFragments += (3 + i);
    }
    return TotalFragments;
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

void AArenaEnemy::PerformAttack()
{
    if (!IsDefeated() && HealthComponent && !HealthComponent->IsInFinisherState())
    {
        AActor* Player = FindPlayer();
        if (Player)
        {
            float Distance = FVector::Dist(GetActorLocation(), Player->GetActorLocation());

            if (Distance <= AttackRange)
            {
                // Check if player is in finisher state
                if (UHealthComponent* PlayerHealth = Player->FindComponentByClass<UHealthComponent>())
                {
                    if (PlayerHealth->IsInFinisherState())
                    {
                        // Execute finisher on player
                        PlayerHealth->ExecuteFinisher();
                        UE_LOG(LogTemp, Warning, TEXT("ArenaEnemy executed FINISHER on player!"));
                        return;
                    }
                }

                // Normal attack
                UGameplayStatics::ApplyPointDamage(
                    Player,
                    BaseDamage,
                    Player->GetActorLocation(),
                    FHitResult(),
                    nullptr,
                    this,
                    UDamageType::StaticClass()
                );

                UE_LOG(LogTemp, Warning, TEXT("ArenaEnemy attacking player for %d damage"), BaseDamage);
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