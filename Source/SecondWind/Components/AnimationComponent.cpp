#include "AnimationComponent.h"
#include "PhysicsHitReactionComponent.h"
#include "GameFramework/Character.h"
#include "Components/SkeletalMeshComponent.h"
#include "Animation/AnimInstance.h"
#include "Animation/AnimMontage.h"

UAnimationComponent::UAnimationComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UAnimationComponent::BeginPlay()
{
	Super::BeginPlay();

	OwnerCharacter = Cast<ACharacter>(GetOwner());
	if (!OwnerCharacter)
	{
		UE_LOG(LogTemp, Error, TEXT("AnimationComponent: Owner is not a Character!"));
		return;
	}

	PhysicsReactionComponent = OwnerCharacter->FindComponentByClass<UPhysicsHitReactionComponent>();

	// Bind montage delegates if AnimInstance exists
	// Note: AnimInstance might not exist if no AnimBlueprint is set
	if (OwnerCharacter->GetMesh())
	{
		if (UAnimInstance* AnimInstance = OwnerCharacter->GetMesh()->GetAnimInstance())
		{
			AnimInstance->OnMontageEnded.AddDynamic(this, &UAnimationComponent::OnMontageEnded);
			AnimInstance->OnMontageBlendingOut.AddDynamic(this, &UAnimationComponent::OnMontageBlendOut);
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("AnimationComponent: No AnimInstance found. Montage delegates not bound."));
		}
	}
}

void UAnimationComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// Smooth block blending
	if (FMath::Abs(CurrentBlockBlend - TargetBlockBlend) > 0.01f)
	{
		CurrentBlockBlend = FMath::FInterpTo(CurrentBlockBlend, TargetBlockBlend, DeltaTime, 1.0f / BlockBlendTime);
	}

	// Process queued animations
	if (GetWorld()->GetTimeSeconds() - LastQueueProcessTime > InputBufferWindow)
	{
		ProcessAnimationQueue();
	}
}

bool UAnimationComponent::PlayAnimation(EAnimationType AnimType, EAnimationPriority Priority)
{
	if (!OwnerCharacter || AnimType == EAnimationType::None)
	{
		return false;
	}

	// Check if we can interrupt current animation
	if (CurrentAnimation != EAnimationType::None && !CanCancelCurrentAnimation(Priority))
	{
		// Queue the animation if priority is high enough
		if (Priority >= EAnimationPriority::Medium)
		{
			QueueAnimation(AnimType, Priority);
		}
		return false;
	}

	UAnimMontage* Montage = GetMontageForAnimation(AnimType);
	if (!Montage)
	{
		UE_LOG(LogTemp, Warning, TEXT("AnimationComponent: No montage set for animation type %d"), (int32)AnimType);
		return false;
	}

	// Check if mesh and AnimInstance exist
	if (!OwnerCharacter->GetMesh())
	{
		UE_LOG(LogTemp, Warning, TEXT("AnimationComponent: No mesh component found"));
		return false;
	}

	UAnimInstance* AnimInstance = OwnerCharacter->GetMesh()->GetAnimInstance();
	if (!AnimInstance)
	{
		UE_LOG(LogTemp, Verbose, TEXT("AnimationComponent: No AnimInstance found (AnimBlueprint might not be set)"));
		return false;
	}

	// Stop current animation if playing
	if (CurrentAnimation != EAnimationType::None)
	{
		StopAnimation(CurrentAnimation);
	}

	// Play the new animation
	float PlayRate = AnimationSpeedMultiplier;
	AnimInstance->Montage_Play(Montage, PlayRate);

	CurrentAnimation = AnimType;
	CurrentPriority = Priority;

	UE_LOG(LogTemp, Verbose, TEXT("AnimationComponent: Playing animation %d with priority %d"), (int32)AnimType, (int32)Priority);

	return true;
}

void UAnimationComponent::StopAnimation(EAnimationType AnimType)
{
	if (!OwnerCharacter || CurrentAnimation != AnimType)
	{
		return;
	}

	UAnimMontage* Montage = GetMontageForAnimation(AnimType);
	if (!Montage)
	{
		return;
	}

	if (OwnerCharacter->GetMesh())
	{
		if (UAnimInstance* AnimInstance = OwnerCharacter->GetMesh()->GetAnimInstance())
		{
			AnimInstance->Montage_Stop(0.2f, Montage);
		}
	}

	CurrentAnimation = EAnimationType::None;
	CurrentPriority = EAnimationPriority::Low;
}

void UAnimationComponent::StopAllAnimations()
{
	if (!OwnerCharacter)
	{
		return;
	}

	if (OwnerCharacter->GetMesh())
	{
		if (UAnimInstance* AnimInstance = OwnerCharacter->GetMesh()->GetAnimInstance())
		{
			AnimInstance->Montage_Stop(0.2f);
		}
	}

	CurrentAnimation = EAnimationType::None;
	CurrentPriority = EAnimationPriority::Low;
	AnimationQueue.Empty();
}

void UAnimationComponent::UpdateBlockBlend(float MouseDelta)
{
	// Convert mouse delta to blend target (0=left, 0.5=center, 1=right)
	if (MouseDelta < -40.0f)
	{
		TargetBlockBlend = 0.0f; // Left block
	}
	else if (MouseDelta > 40.0f)
	{
		TargetBlockBlend = 1.0f; // Right block
	}
	else
	{
		TargetBlockBlend = 0.5f; // Center block
	}

	// If blocking, update the blend between poses
	if (CurrentAnimation == EAnimationType::BlockLeft || 
		CurrentAnimation == EAnimationType::BlockCenter || 
		CurrentAnimation == EAnimationType::BlockRight)
	{
		if (OwnerCharacter->GetMesh() && OwnerCharacter->GetMesh()->GetAnimInstance())
		{
			UAnimInstance* AnimInstance = OwnerCharacter->GetMesh()->GetAnimInstance();
			// This would be connected to an Animation Blueprint blend space
			// For now, we'll switch between discrete poses
			EAnimationType NewBlockAnim = EAnimationType::BlockCenter;
			if (TargetBlockBlend < 0.33f)
			{
				NewBlockAnim = EAnimationType::BlockLeft;
			}
			else if (TargetBlockBlend > 0.66f)
			{
				NewBlockAnim = EAnimationType::BlockRight;
			}

			if (NewBlockAnim != CurrentAnimation)
			{
				PlayAnimation(NewBlockAnim, CurrentPriority);
			}
		}
	}
}

bool UAnimationComponent::IsAnimationPlaying(EAnimationType AnimType) const
{
	return CurrentAnimation == AnimType;
}

float UAnimationComponent::GetAnimationTimeRemaining(EAnimationType AnimType) const
{
	if (!OwnerCharacter || CurrentAnimation != AnimType)
	{
		return 0.0f;
	}

	UAnimMontage* Montage = GetMontageForAnimation(AnimType);
	if (!Montage)
	{
		return 0.0f;
	}

	if (OwnerCharacter->GetMesh())
	{
		if (UAnimInstance* AnimInstance = OwnerCharacter->GetMesh()->GetAnimInstance())
		{
			// Get the position of the montage to calculate remaining time
			float Position = AnimInstance->Montage_GetPosition(Montage);
			float Length = Montage->GetPlayLength();
			return FMath::Max(0.0f, Length - Position);
		}
	}

	return 0.0f;
}

bool UAnimationComponent::CanCancelCurrentAnimation(EAnimationPriority NewPriority) const
{
	if (!bEnableAnimationCanceling)
	{
		return false;
	}

	// Critical animations cannot be canceled
	if (CurrentPriority == EAnimationPriority::Critical)
	{
		return false;
	}

	// Higher priority can cancel lower priority
	return NewPriority > CurrentPriority;
}

void UAnimationComponent::QueueAnimation(EAnimationType AnimType, EAnimationPriority Priority)
{
	// Remove any existing queued animation of the same type
	AnimationQueue.RemoveAll([AnimType](const TPair<EAnimationType, EAnimationPriority>& Item)
	{
		return Item.Key == AnimType;
	});

	// Add to queue
	AnimationQueue.Add(TPair<EAnimationType, EAnimationPriority>(AnimType, Priority));
	LastQueueProcessTime = GetWorld()->GetTimeSeconds();
}

void UAnimationComponent::ProcessAnimationQueue()
{
	if (AnimationQueue.Num() == 0)
	{
		return;
	}

	// Sort by priority (highest first)
	AnimationQueue.Sort([](const TPair<EAnimationType, EAnimationPriority>& A, const TPair<EAnimationType, EAnimationPriority>& B)
	{
		return A.Value > B.Value;
	});

	// Try to play the highest priority animation
	for (const auto& QueuedAnim : AnimationQueue)
	{
		if (PlayAnimation(QueuedAnim.Key, QueuedAnim.Value))
		{
			AnimationQueue.Empty();
			return;
		}
	}

	// Clear old queue entries
	AnimationQueue.Empty();
}

UAnimMontage* UAnimationComponent::GetMontageForAnimation(EAnimationType AnimType) const
{
	switch (AnimType)
	{
		case EAnimationType::AttackLeft: return AttackLeftMontage;
		case EAnimationType::AttackRight: return AttackRightMontage;
		case EAnimationType::AttackOverhead: return AttackOverheadMontage;
		case EAnimationType::BlockLeft: return BlockLeftMontage;
		case EAnimationType::BlockCenter: return BlockCenterMontage;
		case EAnimationType::BlockRight: return BlockRightMontage;
		case EAnimationType::DodgeLeft: return DodgeLeftMontage;
		case EAnimationType::DodgeRight: return DodgeRightMontage;
		case EAnimationType::DodgeBack: return DodgeBackMontage;
		case EAnimationType::Dash: return DashMontage;
		case EAnimationType::HackCast: return HackCastMontage;
		case EAnimationType::HackResponse: return HackResponseMontage;
		case EAnimationType::Stagger: return StaggerMontage;
		case EAnimationType::FinisherExecute: return FinisherExecuteMontage;
		case EAnimationType::FinisherReceive: return FinisherReceiveMontage;
		default: return nullptr;
	}
}

void UAnimationComponent::OnMontageEnded(UAnimMontage* Montage, bool bInterrupted)
{
	if (!bInterrupted && CurrentAnimation != EAnimationType::None)
	{
		CurrentAnimation = EAnimationType::None;
		CurrentPriority = EAnimationPriority::Low;
		ProcessAnimationQueue();
	}
}

void UAnimationComponent::OnMontageBlendOut(UAnimMontage* Montage, bool bInterrupted)
{
	// Process queue when montage starts blending out for smoother transitions
	if (!bInterrupted)
	{
		ProcessAnimationQueue();
	}
}