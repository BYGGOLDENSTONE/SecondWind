#include "Arena.h"
#include "ArenaEnemy.h"
#include "../SecondWindCharacter.h"
#include "../Components/HealthComponent.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"

AArena::AArena()
{
    PrimaryActorTick.bCanEverTick = false;
}

void AArena::BeginPlay()
{
    Super::BeginPlay();

    PlayerCharacter = Cast<ASecondWindCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
}

void AArena::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void AArena::InitializeArena(int32 InArenaNumber)
{
    ArenaNumber = InArenaNumber;
    TransitionToState(EArenaState::Preparing);
}

void AArena::StartCombat()
{
    if (CurrentState != EArenaState::Preparing)
    {
        return;
    }

    TransitionToState(EArenaState::InCombat);
    SpawnEnemy();

    if (PlayerCharacter)
    {
        PlayerCharacter->SetActorLocation(GetActorLocation() + PlayerSpawnOffset);
        PlayerCharacter->SetActorRotation(FRotator(0, 90, 0));
    }
}

void AArena::EndCombat(bool bPlayerVictory)
{
    if (bPlayerVictory)
    {
        TransitionToState(EArenaState::Victory);
    }
    else
    {
        TransitionToState(EArenaState::Defeat);
    }

    CleanupArena();
}

void AArena::OnEnemyDefeated()
{
    EndCombat(true);
}

void AArena::OnPlayerDefeated()
{
    EndCombat(false);
}

FVector AArena::GetPlayerSpawnLocation() const
{
    return GetActorLocation() + PlayerSpawnOffset;
}

FVector AArena::GetEnemySpawnLocation() const
{
    return GetActorLocation() + EnemySpawnOffset;
}

void AArena::SpawnEnemy()
{
    if (!EnemyClass)
    {
        UE_LOG(LogTemp, Warning, TEXT("Arena %d: No enemy class set"), ArenaNumber);
        return;
    }

    FActorSpawnParameters SpawnParams;
    SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

    CurrentEnemy = GetWorld()->SpawnActor<AArenaEnemy>(
        EnemyClass,
        GetActorLocation() + EnemySpawnOffset,
        FRotator(0, -90, 0),
        SpawnParams
    );

    if (CurrentEnemy)
    {
        CurrentEnemy->InitializeEnemy(ArenaNumber);

        if (UHealthComponent* EnemyHealth = CurrentEnemy->FindComponentByClass<UHealthComponent>())
        {
            EnemyHealth->OnDeath.AddDynamic(this, &AArena::OnEnemyDefeated);
        }
    }
}

void AArena::CleanupArena()
{
    if (CurrentEnemy)
    {
        CurrentEnemy->Destroy();
        CurrentEnemy = nullptr;
    }
}

void AArena::TransitionToState(EArenaState NewState)
{
    CurrentState = NewState;

    switch (CurrentState)
    {
    case EArenaState::Preparing:
        UE_LOG(LogTemp, Warning, TEXT("Arena %d: Preparing for combat"), ArenaNumber);
        break;
    case EArenaState::InCombat:
        UE_LOG(LogTemp, Warning, TEXT("Arena %d: Combat started"), ArenaNumber);
        break;
    case EArenaState::Victory:
        UE_LOG(LogTemp, Warning, TEXT("Arena %d: Player victorious!"), ArenaNumber);
        break;
    case EArenaState::Defeat:
        UE_LOG(LogTemp, Warning, TEXT("Arena %d: Player defeated"), ArenaNumber);
        break;
    default:
        break;
    }
}