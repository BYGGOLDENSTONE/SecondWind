#include "PhysicsHitReactionComponent.h"
#include "AnimationComponentSimplified.h"
#include "PhysicsEngine/PhysicalAnimationComponent.h"
#include "PhysicsEngine/BodyInstance.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Engine/World.h"
#include "Camera/PlayerCameraManager.h"
#include "Kismet/GameplayStatics.h"

UPhysicsHitReactionComponent::UPhysicsHitReactionComponent()
{
	PrimaryComponentTick.bCanEverTick = false;  // No tick needed without physics
}

void UPhysicsHitReactionComponent::BeginPlay()
{
	Super::BeginPlay();

	OwnerCharacter = Cast<ACharacter>(GetOwner());
	if (!OwnerCharacter)
	{
		UE_LOG(LogTemp, Error, TEXT("PhysicsHitReactionComponent: Owner is not a Character!"));
		return;
	}
}

void UPhysicsHitReactionComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	// No tick needed anymore
}

void UPhysicsHitReactionComponent::ApplyHitReaction(const FVector& HitLocation, const FVector& HitDirection, EHitReactionType ReactionType, float DamageAmount)
{
	if (!OwnerCharacter)
	{
		return;
	}

	// Calculate knockback force based on reaction type
	float KnockbackStrength = 0.0f;
	switch (ReactionType)
	{
	case EHitReactionType::Light:
		KnockbackStrength = 100.0f;
		break;
	case EHitReactionType::Medium:
		KnockbackStrength = 200.0f;
		break;
	case EHitReactionType::Heavy:
		KnockbackStrength = 400.0f;
		break;
	case EHitReactionType::Blocked:
		KnockbackStrength = 50.0f;
		break;
	case EHitReactionType::WeakSide:
		KnockbackStrength = 600.0f;
		break;
	case EHitReactionType::Hack:
		KnockbackStrength = 800.0f;
		break;
	case EHitReactionType::Knockback:
		KnockbackStrength = 1000.0f;
		break;
	default:
		KnockbackStrength = 150.0f;
	}

	// Apply defense gamestyle reduction if any
	KnockbackStrength *= (1.0f - DefenseImpulseReduction);

	// Apply knockback through character movement
	FVector Knockback = HitDirection * KnockbackStrength;
	Knockback.Z = FMath::Max(Knockback.Z, 50.0f);  // Add slight upward force

	OwnerCharacter->LaunchCharacter(Knockback, false, false);

	UE_LOG(LogTemp, Warning, TEXT("HitReaction: Applied knockback %.1f to %s (Type: %s)"),
		KnockbackStrength, *OwnerCharacter->GetName(), *UEnum::GetValueAsString(ReactionType));
}

void UPhysicsHitReactionComponent::ApplyHackReaction(AActor* Target)
{
	if (!Target)
	{
		return;
	}

	ACharacter* TargetCharacter = Cast<ACharacter>(Target);
	if (!TargetCharacter)
	{
		return;
	}

	// Strong upward knockback for hack
	FVector HackKnockback = FVector(0, 0, 1200.0f);
	TargetCharacter->LaunchCharacter(HackKnockback, false, true);

	// Play hack response animation on target
	if (UAnimationComponentSimplified* AnimComp = Target->FindComponentByClass<UAnimationComponentSimplified>())
	{
		AnimComp->PlayAnimation(EAnimationType::HackResponse, EAnimationPriority::Critical);
	}

	UE_LOG(LogTemp, Warning, TEXT("HitReaction: Applied hack knockback to %s"), *Target->GetName());
}

void UPhysicsHitReactionComponent::ResetPhysics()
{
	// No physics to reset anymore
	bPhysicsActive = false;
}

void UPhysicsHitReactionComponent::SetPhysicsEnabled(bool bEnabled)
{
	// No physics to enable/disable
}

void UPhysicsHitReactionComponent::SetPhysicsBlendWeight(float Weight)
{
	// No physics blend weight needed
}

void UPhysicsHitReactionComponent::UpdateGamestyleModifiers(int32 DefenseStacks, int32 MobilityStacks)
{
	// Defense reduces knockback by 10% per stack (max 50% reduction)
	DefenseImpulseReduction = FMath::Min(DefenseStacks * 0.1f, 0.5f);
}

// Removed physics-related functions
void UPhysicsHitReactionComponent::InitializePhysicsProfiles()
{
	// No longer needed
}

void UPhysicsHitReactionComponent::ApplyImpulseToBone(const FName& BoneName, const FVector& Impulse, float StrengthMultiplier)
{
	// No longer using physics impulses
}

float UPhysicsHitReactionComponent::CalculateImpulseStrength(EHitReactionType ReactionType, float DamageAmount)
{
	// No longer needed, knockback strength is handled directly
	return 0.0f;
}

FVector UPhysicsHitReactionComponent::CalculateImpulseDirection(const FVector& HitLocation, const FVector& HitDirection, EHitReactionType ReactionType)
{
	// No longer needed
	return FVector::ZeroVector;
}

void UPhysicsHitReactionComponent::UpdateLOD()
{
	// No LOD updates needed without physics
}