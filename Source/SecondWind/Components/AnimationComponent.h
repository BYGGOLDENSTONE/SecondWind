#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AnimationComponent.generated.h"

class UAnimMontage;
class UPhysicsHitReactionComponent;

UENUM(BlueprintType)
enum class EAnimationType : uint8
{
	None,
	AttackLeft,
	AttackRight,
	AttackOverhead,
	BlockLeft,
	BlockCenter,
	BlockRight,
	DodgeLeft,
	DodgeRight,
	DodgeBack,
	Dash,
	HackCast,
	HackResponse,
	Stagger,
	FinisherExecute,
	FinisherReceive
};

UENUM(BlueprintType)
enum class EAnimationPriority : uint8
{
	Low,
	Medium,
	High,
	Critical
};

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class SECONDWIND_API UAnimationComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UAnimationComponent();

	virtual void BeginPlay() override;
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	// Main animation interface
	bool PlayAnimation(EAnimationType AnimType, EAnimationPriority Priority = EAnimationPriority::Medium);
	void StopAnimation(EAnimationType AnimType);
	void StopAllAnimations();

	// Block blending
	void UpdateBlockBlend(float MouseDelta);

	// Animation queries
	bool IsAnimationPlaying(EAnimationType AnimType) const;
	float GetAnimationTimeRemaining(EAnimationType AnimType) const;
	bool CanCancelCurrentAnimation(EAnimationPriority NewPriority) const;

	// Animation speed modifiers (for gamestyle system)
	void SetAnimationSpeedMultiplier(float Multiplier) { AnimationSpeedMultiplier = Multiplier; }
	float GetAnimationSpeedMultiplier() const { return AnimationSpeedMultiplier; }

	// Input buffering
	void QueueAnimation(EAnimationType AnimType, EAnimationPriority Priority = EAnimationPriority::Medium);
	void ProcessAnimationQueue();

protected:
	// Animation montage references (set in Blueprint)
	UPROPERTY(EditDefaultsOnly, Category = "Animations|Attack")
	UAnimMontage* AttackLeftMontage;

	UPROPERTY(EditDefaultsOnly, Category = "Animations|Attack")
	UAnimMontage* AttackRightMontage;

	UPROPERTY(EditDefaultsOnly, Category = "Animations|Attack")
	UAnimMontage* AttackOverheadMontage;

	UPROPERTY(EditDefaultsOnly, Category = "Animations|Block")
	UAnimMontage* BlockLeftMontage;

	UPROPERTY(EditDefaultsOnly, Category = "Animations|Block")
	UAnimMontage* BlockCenterMontage;

	UPROPERTY(EditDefaultsOnly, Category = "Animations|Block")
	UAnimMontage* BlockRightMontage;

	UPROPERTY(EditDefaultsOnly, Category = "Animations|Dodge")
	UAnimMontage* DodgeLeftMontage;

	UPROPERTY(EditDefaultsOnly, Category = "Animations|Dodge")
	UAnimMontage* DodgeRightMontage;

	UPROPERTY(EditDefaultsOnly, Category = "Animations|Dodge")
	UAnimMontage* DodgeBackMontage;

	UPROPERTY(EditDefaultsOnly, Category = "Animations|Special")
	UAnimMontage* DashMontage;

	UPROPERTY(EditDefaultsOnly, Category = "Animations|Special")
	UAnimMontage* HackCastMontage;

	UPROPERTY(EditDefaultsOnly, Category = "Animations|Special")
	UAnimMontage* HackResponseMontage;

	UPROPERTY(EditDefaultsOnly, Category = "Animations|Reaction")
	UAnimMontage* StaggerMontage;

	UPROPERTY(EditDefaultsOnly, Category = "Animations|Finisher")
	UAnimMontage* FinisherExecuteMontage;

	UPROPERTY(EditDefaultsOnly, Category = "Animations|Finisher")
	UAnimMontage* FinisherReceiveMontage;

	// Configuration
	UPROPERTY(EditDefaultsOnly, Category = "Settings")
	float BlockBlendTime = 0.15f;

	UPROPERTY(EditDefaultsOnly, Category = "Settings")
	float InputBufferWindow = 0.2f;

	UPROPERTY(EditDefaultsOnly, Category = "Settings")
	bool bEnableAnimationCanceling = true;

private:
	UAnimMontage* GetMontageForAnimation(EAnimationType AnimType) const;

	UFUNCTION()
	void OnMontageEnded(UAnimMontage* Montage, bool bInterrupted);

	UFUNCTION()
	void OnMontageBlendOut(UAnimMontage* Montage, bool bInterrupted);

	// Current animation state
	EAnimationType CurrentAnimation = EAnimationType::None;
	EAnimationPriority CurrentPriority = EAnimationPriority::Low;
	float AnimationSpeedMultiplier = 1.0f;

	// Block blending
	float CurrentBlockBlend = 0.5f; // 0=left, 0.5=center, 1=right
	float TargetBlockBlend = 0.5f;

	// Animation queue
	TArray<TPair<EAnimationType, EAnimationPriority>> AnimationQueue;
	float LastQueueProcessTime = 0.0f;

	// Component references
	class UPhysicsHitReactionComponent* PhysicsReactionComponent;
	class ACharacter* OwnerCharacter;
};