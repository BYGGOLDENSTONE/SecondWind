#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AttackHitboxNotify.generated.h"

UCLASS()
class SECONDWIND_API UAttackHitboxNotify : public UAnimNotify
{
	GENERATED_BODY()

public:
	UAttackHitboxNotify();

	virtual void Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) override;
	virtual FString GetNotifyName_Implementation() const override;

	UPROPERTY(EditAnywhere, Category = "Attack")
	bool bStartHitbox = true;

	UPROPERTY(EditAnywhere, Category = "Attack")
	float DamageMultiplier = 1.0f;
};