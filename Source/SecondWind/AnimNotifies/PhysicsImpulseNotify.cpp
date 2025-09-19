#include "PhysicsImpulseNotify.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/Character.h"
#include "../Components/PhysicsHitReactionComponent.h"

UPhysicsImpulseNotify::UPhysicsImpulseNotify()
{
	ReactionType = EHitReactionType::Light;
	ImpulseMultiplier = 1.0f;
	ImpulseDirection = FVector(1.0f, 0.0f, 0.0f);
	bUseHitLocation = true;
}

void UPhysicsImpulseNotify::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	if (!MeshComp)
	{
		return;
	}

	ACharacter* Character = Cast<ACharacter>(MeshComp->GetOwner());
	if (!Character)
	{
		return;
	}

	UPhysicsHitReactionComponent* PhysicsComp = Character->FindComponentByClass<UPhysicsHitReactionComponent>();
	if (!PhysicsComp)
	{
		return;
	}

	// Calculate hit location (use chest bone if available)
	FVector HitLocation = Character->GetActorLocation();
	if (bUseHitLocation)
	{
		FVector ChestLocation = MeshComp->GetBoneLocation(TEXT("spine_02"));
		if (!ChestLocation.IsZero())
		{
			HitLocation = ChestLocation;
		}
	}

	// Apply the physics reaction
	FVector FinalDirection = Character->GetActorRotation().RotateVector(ImpulseDirection);
	PhysicsComp->ApplyHitReaction(HitLocation, FinalDirection, ReactionType, 0.0f);

	UE_LOG(LogTemp, Verbose, TEXT("PhysicsImpulseNotify: Applied %s impulse"), 
		*UEnum::GetValueAsString(ReactionType));
}

FString UPhysicsImpulseNotify::GetNotifyName_Implementation() const
{
	return FString::Printf(TEXT("PhysicsImpulse_%s"), *UEnum::GetValueAsString(ReactionType));
}