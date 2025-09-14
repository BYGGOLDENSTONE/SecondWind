#include "ArenaEnemy.h"
#include "../Components/HealthComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

AArenaEnemy::AArenaEnemy()
{
    PrimaryActorTick.bCanEverTick = true;

    HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("HealthComponent"));

    GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);
    GetCharacterMovement()->MaxWalkSpeed = 400.f;
}

void AArenaEnemy::BeginPlay()
{
    Super::BeginPlay();

    if (HealthComponent)
    {
        HealthComponent->OnPhaseTransition.AddDynamic(this, &AArenaEnemy::OnPhaseTransition);
        HealthComponent->OnDeath.AddDynamic(this, &AArenaEnemy::OnEnemyDeath);
    }
}

void AArenaEnemy::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
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