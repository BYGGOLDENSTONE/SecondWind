#include "TrainingDummy.h"
#include "../Components/HealthComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "TimerManager.h"
#include "Engine/World.h"

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

	Tags.Add(FName("TrainingDummy"));
}

void ATrainingDummy::BeginPlay()
{
	Super::BeginPlay();

	if (HealthComponent)
	{
		HealthComponent->OnHealthDepleted.AddDynamic(this, &ATrainingDummy::OnHealthDepleted);
		HealthComponent->OnPhaseChanged.AddDynamic(this, &ATrainingDummy::OnPhaseChanged);
	}
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
}

void ATrainingDummy::PlayHitReaction()
{
	// TODO: Play hit reaction animation
	UE_LOG(LogTemp, Log, TEXT("Training Dummy hit reaction"));
}