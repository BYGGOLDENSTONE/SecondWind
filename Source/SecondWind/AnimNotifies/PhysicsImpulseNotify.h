#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "../Components/PhysicsHitReactionComponent.h"
#include "PhysicsImpulseNotify.generated.h"

UCLASS()
class SECONDWIND_API UPhysicsImpulseNotify : public UAnimNotify
{
	GENERATED_BODY()

public:
	UPhysicsImpulseNotify();

	virtual void Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) override;
	virtual FString GetNotifyName_Implementation() const override;

	UPROPERTY(EditAnywhere, Category = "Physics")
	EHitReactionType ReactionType = EHitReactionType::Light;

	UPROPERTY(EditAnywhere, Category = "Physics")
	float ImpulseMultiplier = 1.0f;

	UPROPERTY(EditAnywhere, Category = "Physics")
	FVector ImpulseDirection = FVector(1.0f, 0.0f, 0.0f);

	UPROPERTY(EditAnywhere, Category = "Physics")
	bool bUseHitLocation = true;
};