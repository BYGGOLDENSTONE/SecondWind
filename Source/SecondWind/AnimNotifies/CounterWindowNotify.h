#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "CounterWindowNotify.generated.h"

UCLASS()
class SECONDWIND_API UCounterWindowNotify : public UAnimNotify
{
	GENERATED_BODY()

public:
	UCounterWindowNotify();

	virtual void Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) override;
	virtual FString GetNotifyName_Implementation() const override;

	UPROPERTY(EditAnywhere, Category = "Counter")
	bool bStartWindow = true;

	UPROPERTY(EditAnywhere, Category = "Counter")
	float WindowDuration = 0.5f;
};