#include "TrainingDummy.h"
#include "../Components/HealthComponent.h"
#include "../Components/CombatComponent.h"
#include "../Components/WeakSideComponent.h"
#include "../Systems/EnemyManager.h"
#include "../Systems/MemorySystem.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "TimerManager.h"
#include "Engine/World.h"
#include "Engine/GameInstance.h"
#include "Kismet/GameplayStatics.h"

ATrainingDummy::ATrainingDummy()
{
	PrimaryActorTick.bCanEverTick = true;

	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	GetCharacterMovement()->bOrientRotationToMovement = false;
	GetCharacterMovement()->MaxWalkSpeed = 0.f;

	HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("HealthComponent"));
	HealthComponent->SetMaxPhases(2);

	CombatComponent = CreateDefaultSubobject<UCombatComponent>(TEXT("CombatComponent"));

	WeakSideComponent = CreateDefaultSubobject<UWeakSideComponent>(TEXT("WeakSideComponent"));

	Tags.Add(FName("TrainingDummy"));
}

void ATrainingDummy::BeginPlay()
{
	Super::BeginPlay();

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
					UE_LOG(LogTemp, Warning, TEXT("Weak side activated on training dummy due to Tactical Analysis memory"));
				}
			}
		}
	}

	if (HealthComponent)
	{
		HealthComponent->OnHealthDepleted.AddDynamic(this, &ATrainingDummy::OnHealthDepleted);
		HealthComponent->OnPhaseChanged.AddDynamic(this, &ATrainingDummy::OnPhaseChanged);
		HealthComponent->OnEnterFinisherState.AddDynamic(this, &ATrainingDummy::OnEnterFinisherState);
		HealthComponent->OnPhaseTransition.AddDynamic(this, &ATrainingDummy::OnPhaseTransition);
	}

	if (bAutoAttackPlayer)
	{
		GetWorldTimerManager().SetTimer(AttackTimerHandle, this, &ATrainingDummy::PerformTestAttack, AttackInterval, true, AttackInterval);
	}
}

void ATrainingDummy::EndPlay(const EEndPlayReason::Type EndPlayReason)
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

void ATrainingDummy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ATrainingDummy::OnHealthDepleted()
{
	UE_LOG(LogTemp, Log, TEXT("Training Dummy health depleted"));

	if (HealthComponent->GetCurrentPhase() >= HealthComponent->GetMaxPhases())
	{
		UE_LOG(LogTemp, Log, TEXT("Training Dummy defeated! Respawning in %f seconds..."), RespawnDelay);

		GetWorldTimerManager().SetTimer(RespawnTimerHandle, this, &ATrainingDummy::Respawn, RespawnDelay, false);

		SetActorEnableCollision(false);
		GetMesh()->SetVisibility(false);
	}
}

void ATrainingDummy::OnPhaseChanged(int32 NewPhase)
{
	UE_LOG(LogTemp, Log, TEXT("Training Dummy entering phase %d"), NewPhase);
	PlayHitReaction();
}

void ATrainingDummy::Respawn()
{
	UE_LOG(LogTemp, Log, TEXT("Training Dummy respawning"));

	if (HealthComponent)
	{
		HealthComponent->ResetHealth();
	}

	SetActorEnableCollision(true);
	GetMesh()->SetVisibility(true);

	SetActorLocation(GetActorLocation() + FVector(0, 0, 100));
	SetActorLocation(GetActorLocation() - FVector(0, 0, 100));

	// Re-register with enemy manager after respawn
	if (UGameInstance* GameInstance = GetGameInstance())
	{
		if (UEnemyManager* EnemyManager = GameInstance->GetSubsystem<UEnemyManager>())
		{
			EnemyManager->RegisterEnemy(this);
		}
	}

	if (bAutoAttackPlayer)
	{
		GetWorldTimerManager().SetTimer(AttackTimerHandle, this, &ATrainingDummy::PerformTestAttack, AttackInterval, true, AttackInterval);
	}
}

void ATrainingDummy::PlayHitReaction()
{
	// TODO: Play hit reaction animation
	UE_LOG(LogTemp, Log, TEXT("Training Dummy hit reaction"));
}

void ATrainingDummy::OnEnterFinisherState()
{
	UE_LOG(LogTemp, Warning, TEXT("Training Dummy entered finisher state - waiting for finisher"));

	// Stop attacking when in finisher state
	GetWorldTimerManager().ClearTimer(AttackTimerHandle);
}

void ATrainingDummy::OnPhaseTransition()
{
	UE_LOG(LogTemp, Warning, TEXT("Training Dummy phase transition completed"));

	// Resume attacking after phase transition if auto-attack is enabled
	if (bAutoAttackPlayer && HealthComponent && HealthComponent->IsAlive())
	{
		GetWorldTimerManager().SetTimer(AttackTimerHandle, this, &ATrainingDummy::PerformTestAttack, AttackInterval, true, AttackInterval);
	}
}

void ATrainingDummy::PerformTestAttack()
{
	if (!CombatComponent || !HealthComponent->IsAlive() || HealthComponent->IsInFinisherState())
	{
		return;
	}

	APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
	if (!PlayerPawn)
	{
		return;
	}

	float DistanceToPlayer = FVector::Dist(GetActorLocation(), PlayerPawn->GetActorLocation());
	if (DistanceToPlayer > 200.0f)
	{
		return;
	}

	FVector DirectionToPlayer = (PlayerPawn->GetActorLocation() - GetActorLocation()).GetSafeNormal();
	SetActorRotation(DirectionToPlayer.Rotation());

	// Check if player is in finisher state
	if (UHealthComponent* PlayerHealth = PlayerPawn->FindComponentByClass<UHealthComponent>())
	{
		if (PlayerHealth->IsInFinisherState())
		{
			// Execute finisher on player
			PlayerHealth->ExecuteFinisher();
			UE_LOG(LogTemp, Warning, TEXT("Training Dummy executed FINISHER on player!"));
			return;
		}
	}

	// Normal attack
	if (CombatComponent)
	{
		CombatComponent->PerformAttack();
		UE_LOG(LogTemp, Log, TEXT("Training Dummy attacking player"));
	}
}