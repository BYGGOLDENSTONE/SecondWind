#include "Components/CombatComponent.h"
#include "GameFramework/Character.h"
#include "Components/CapsuleComponent.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"
#include "Kismet/GameplayStatics.h"

UCombatComponent::UCombatComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UCombatComponent::BeginPlay()
{
	Super::BeginPlay();
}

void UCombatComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (bIsAttacking)
	{
		AttackTimer -= DeltaTime;
		if (AttackTimer <= 0.0f)
		{
			ResetAttack();
		}
	}
}

void UCombatComponent::PerformAttack()
{
	if (!CanAttack())
	{
		return;
	}

	bIsAttacking = true;
	AttackTimer = AttackCooldown;

	ExecuteAttack();
}

bool UCombatComponent::CanAttack() const
{
	return !bIsAttacking;
}

void UCombatComponent::ExecuteAttack()
{
	AActor* Owner = GetOwner();
	if (!Owner)
	{
		return;
	}

	AActor* Target = GetTargetInRange();
	if (Target)
	{
		ApplyDamageToTarget(Target);
	}

	#if WITH_EDITOR
	FVector AttackLocation = Owner->GetActorLocation() + Owner->GetActorForwardVector() * AttackRange;
	DrawDebugSphere(GetWorld(), AttackLocation, 50.0f, 12, FColor::Red, false, 0.5f);
	#endif
}

void UCombatComponent::ResetAttack()
{
	bIsAttacking = false;
	AttackTimer = 0.0f;
}

AActor* UCombatComponent::GetTargetInRange() const
{
	AActor* Owner = GetOwner();
	if (!Owner)
	{
		return nullptr;
	}

	FVector StartLocation = Owner->GetActorLocation();
	FVector EndLocation = StartLocation + Owner->GetActorForwardVector() * AttackRange;

	FCollisionQueryParams QueryParams;
	QueryParams.AddIgnoredActor(Owner);

	FHitResult HitResult;
	bool bHit = GetWorld()->LineTraceSingleByChannel(
		HitResult,
		StartLocation,
		EndLocation,
		ECC_Pawn,
		QueryParams
	);

	if (bHit && HitResult.GetActor())
	{
		return HitResult.GetActor();
	}

	return nullptr;
}

void UCombatComponent::ApplyDamageToTarget(AActor* Target)
{
	if (!Target)
	{
		return;
	}

	UGameplayStatics::ApplyPointDamage(
		Target,
		BaseDamage,
		Target->GetActorLocation(),
		FHitResult(),
		nullptr,
		GetOwner(),
		UDamageType::StaticClass()
	);
}