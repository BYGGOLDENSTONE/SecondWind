#include "ArenaEnemy.h"
#include "../Components/HealthComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "ArenaZone.h"
#include "SimplifiedArenaSystem.h"
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

    if (HealthComponent)
    {
        HealthComponent->OnPhaseTransition.AddDynamic(this, &AArenaEnemy::OnPhaseTransition);
        HealthComponent->OnDeath.AddDynamic(this, &AArenaEnemy::OnEnemyDeath);
    }

    // Start attacking every 2-3 seconds
    GetWorldTimerManager().SetTimer(AttackTimerHandle, this, &AArenaEnemy::PerformAttack,
        FMath::RandRange(2.0f, 3.0f), true, 1.0f);
}

void AArenaEnemy::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // Continuously face and move toward player when in combat
    if (!IsDefeated() && !bInFinisherState)
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
                    GetCharacterMovement()->AddInputVector(DirectionToPlayer);
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
    ArenaLevel = ArenaNumber;
    MaxPhases = ArenaNumber;
    CurrentPhase = 1;

    SetupPhases();

    UE_LOG(LogTemp, Warning, TEXT("ArenaEnemy: Initialized for Arena %d with %d phases"), ArenaLevel, MaxPhases);
}

void AArenaEnemy::OnPhaseTransition()
{
    if (CurrentPhase < MaxPhases)
    {
        EnterFinisherState();
    }
}

void AArenaEnemy::OnEnemyDeath()
{
    if (CurrentPhase >= MaxPhases)
    {
        int32 Fragments = CalculateFragmentReward();
        UE_LOG(LogTemp, Warning, TEXT("Enemy defeated! Awarding %d fragments"), Fragments);

        // Stop attacking when dead
        GetWorldTimerManager().ClearTimer(AttackTimerHandle);

        // Notify the zone if using LevelLayoutManager system
        if (OwnerZone)
        {
            OwnerZone->OnEnemyDefeated(this);
        }

        // Also notify SimplifiedArenaSystem if it exists
        TArray<AActor*> FoundSystems;
        UGameplayStatics::GetAllActorsOfClass(GetWorld(), ASimplifiedArenaSystem::StaticClass(), FoundSystems);
        if (FoundSystems.Num() > 0)
        {
            if (ASimplifiedArenaSystem* ArenaSystem = Cast<ASimplifiedArenaSystem>(FoundSystems[0]))
            {
                ArenaSystem->OnEnemyDefeated(this);
            }
        }
    }
}

void AArenaEnemy::ExecuteFinisher()
{
    if (!bInFinisherState)
    {
        return;
    }

    bInFinisherState = false;
    CurrentPhase++;

    UE_LOG(LogTemp, Warning, TEXT("Finisher executed! Moving to phase %d/%d"), CurrentPhase, MaxPhases);

    StartNextPhase();
}

int32 AArenaEnemy::CalculateFragmentReward() const
{
    int32 TotalFragments = 0;
    for (int32 i = 1; i <= MaxPhases; i++)
    {
        TotalFragments += i;
    }
    return TotalFragments;
}

void AArenaEnemy::SetupPhases()
{
    if (HealthComponent)
    {
        HealthComponent->SetMaxPhases(MaxPhases);
        HealthComponent->ResetHealth();
    }
}

void AArenaEnemy::StartNextPhase()
{
    if (HealthComponent)
    {
        HealthComponent->ResetHealth();
    }

    GetCharacterMovement()->MaxWalkSpeed = 400.f + (CurrentPhase - 1) * 50.f;
    BaseDamage = 10 + (CurrentPhase - 1) * 5;

    UE_LOG(LogTemp, Warning, TEXT("Phase %d started: Speed=%f, Damage=%d"),
        CurrentPhase, GetCharacterMovement()->MaxWalkSpeed, BaseDamage);
}

void AArenaEnemy::EnterFinisherState()
{
    bInFinisherState = true;
    GetCharacterMovement()->DisableMovement();

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
}

void AArenaEnemy::PerformAttack()
{
    if (!IsDefeated() && !bInFinisherState)
    {
        AActor* Player = FindPlayer();
        if (Player)
        {
            float Distance = FVector::Dist(GetActorLocation(), Player->GetActorLocation());

            if (Distance <= AttackRange)
            {
                // Apply damage to player
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