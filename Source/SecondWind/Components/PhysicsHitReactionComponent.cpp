#include "PhysicsHitReactionComponent.h"
#include "AnimationComponent.h"
#include "PhysicsEngine/PhysicalAnimationComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/Character.h"
#include "Engine/World.h"
#include "Camera/PlayerCameraManager.h"
#include "Kismet/GameplayStatics.h"

UPhysicsHitReactionComponent::UPhysicsHitReactionComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

	// Default bone profiles
	PhysicsProfiles.Add({TEXT("spine_01"), 1.0f, true, true});
	PhysicsProfiles.Add({TEXT("spine_02"), 1.2f, true, true});
	PhysicsProfiles.Add({TEXT("head"), 1.5f, true, false});
	PhysicsProfiles.Add({TEXT("upperarm_l"), 0.8f, true, true});
	PhysicsProfiles.Add({TEXT("upperarm_r"), 0.8f, true, true});
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

	SkeletalMeshComponent = OwnerCharacter->GetMesh();
	if (!SkeletalMeshComponent)
	{
		UE_LOG(LogTemp, Error, TEXT("PhysicsHitReactionComponent: No skeletal mesh found!"));
		return;
	}

	// Create or find physical animation component
	PhysicalAnimationComponent = OwnerCharacter->FindComponentByClass<UPhysicalAnimationComponent>();
	if (!PhysicalAnimationComponent)
	{
		PhysicalAnimationComponent = NewObject<UPhysicalAnimationComponent>(OwnerCharacter);
		PhysicalAnimationComponent->RegisterComponent();
		OwnerCharacter->AddInstanceComponent(PhysicalAnimationComponent);
	}

	// Set the skeletal mesh for physical animation
	PhysicalAnimationComponent->SetSkeletalMeshComponent(SkeletalMeshComponent);

	InitializePhysicsProfiles();
}

void UPhysicsHitReactionComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (!bPhysicsActive)
	{
		return;
	}

	CurrentPhysicsTime += DeltaTime;

	// Calculate blend weight based on time
	if (CurrentPhysicsTime < PhysicsTakeoverTime)
	{
		// Ramp up physics
		CurrentBlendWeight = CurrentPhysicsTime / PhysicsTakeoverTime;
	}
	else if (CurrentPhysicsTime < BlendBackTime)
	{
		// Hold physics at full
		CurrentBlendWeight = 1.0f;
	}
	else if (CurrentPhysicsTime < MaxPhysicsTime)
	{
		// Blend back to animation
		float BlendOutTime = MaxPhysicsTime - BlendBackTime;
		float BlendOutProgress = (CurrentPhysicsTime - BlendBackTime) / BlendOutTime;
		CurrentBlendWeight = 1.0f - BlendOutProgress;
		
		// Apply mobility gamestyle bonus
		CurrentBlendWeight *= (1.0f - MobilityRecoveryBonus);
	}
	else
	{
		// Physics complete
		ResetPhysics();
	}

	// Update physics blend weight
	if (SkeletalMeshComponent)
	{
		SkeletalMeshComponent->SetAllBodiesBelowPhysicsBlendWeight(TEXT("pelvis"), CurrentBlendWeight);
	}

	// Update LOD
	UpdateLOD();
}

void UPhysicsHitReactionComponent::ApplyHitReaction(const FVector& HitLocation, const FVector& HitDirection, EHitReactionType ReactionType, float DamageAmount)
{
	if (!SkeletalMeshComponent || !PhysicalAnimationComponent)
	{
		return;
	}

	// Reset any existing physics
	if (bPhysicsActive)
	{
		ResetPhysics();
	}

	// Start physics reaction
	bPhysicsActive = true;
	CurrentPhysicsTime = 0.0f;
	LastReactionType = ReactionType;

	// Calculate impulse
	float ImpulseStrength = CalculateImpulseStrength(ReactionType, DamageAmount);
	FVector ImpulseDirection = CalculateImpulseDirection(HitLocation, HitDirection, ReactionType);
	FVector FinalImpulse = ImpulseDirection * ImpulseStrength;

	// Apply defense gamestyle reduction
	FinalImpulse *= (1.0f - DefenseImpulseReduction);

	// Find closest bone to hit location
	FName ClosestBone = SkeletalMeshComponent->FindClosestBone(HitLocation);
	if (ClosestBone == NAME_None)
	{
		ClosestBone = TEXT("spine_02"); // Default to spine
	}

	// Apply impulse to hit bone and nearby bones
	ApplyImpulseToBone(ClosestBone, FinalImpulse, 1.0f);

	// Apply reduced impulse to neighboring bones for more natural reaction
	if (ReactionType == EHitReactionType::Heavy || ReactionType == EHitReactionType::WeakSide)
	{
		TArray<FName> ChildBones;
		SkeletalMeshComponent->GetBoneNames(ChildBones);
		for (const FName& BoneName : ChildBones)
		{
			if (BoneName != ClosestBone)
			{
				FVector BoneLocation = SkeletalMeshComponent->GetBoneLocation(BoneName);
				float Distance = FVector::Dist(HitLocation, BoneLocation);
				if (Distance < 50.0f) // Within 50 units
				{
					float Falloff = 1.0f - (Distance / 50.0f);
					ApplyImpulseToBone(BoneName, FinalImpulse * Falloff * 0.5f, 1.0f);
				}
			}
		}
	}

	// Enable physics simulation on affected bodies
	SkeletalMeshComponent->SetAllBodiesBelowSimulatePhysics(TEXT("pelvis"), true);

	UE_LOG(LogTemp, Verbose, TEXT("PhysicsHitReaction: Applied %s reaction with impulse %.1f"), 
		*UEnum::GetValueAsString(ReactionType), ImpulseStrength);
}

void UPhysicsHitReactionComponent::ApplyHackReaction(AActor* Target)
{
	if (!Target)
	{
		return;
	}

	UPhysicsHitReactionComponent* TargetPhysics = Target->FindComponentByClass<UPhysicsHitReactionComponent>();
	if (!TargetPhysics)
	{
		return;
	}

	// Apply special head impulse for hack
	FVector UpwardImpulse = FVector::UpVector * HackHeadImpulse;
	TargetPhysics->ApplyImpulseToBone(TEXT("head"), UpwardImpulse, 1.5f);

	// Play hack response animation on target
	if (UAnimationComponent* AnimComp = Target->FindComponentByClass<UAnimationComponent>())
	{
		AnimComp->PlayAnimation(EAnimationType::HackResponse, EAnimationPriority::Critical);
	}

	UE_LOG(LogTemp, Verbose, TEXT("PhysicsHitReaction: Applied hack reaction to %s"), *Target->GetName());
}

void UPhysicsHitReactionComponent::ResetPhysics()
{
	bPhysicsActive = false;
	CurrentPhysicsTime = 0.0f;
	CurrentBlendWeight = 0.0f;

	if (SkeletalMeshComponent)
	{
		// Reset physics blend weight
		SkeletalMeshComponent->SetAllBodiesBelowPhysicsBlendWeight(TEXT("pelvis"), 0.0f);
		
		// Disable physics simulation
		SkeletalMeshComponent->SetAllBodiesBelowSimulatePhysics(TEXT("pelvis"), false);
	}
}

void UPhysicsHitReactionComponent::SetPhysicsEnabled(bool bEnabled)
{
	if (!bEnabled && bPhysicsActive)
	{
		ResetPhysics();
	}
}

void UPhysicsHitReactionComponent::SetPhysicsBlendWeight(float Weight)
{
	CurrentBlendWeight = FMath::Clamp(Weight, 0.0f, 1.0f);
	if (SkeletalMeshComponent)
	{
		SkeletalMeshComponent->SetAllBodiesBelowPhysicsBlendWeight(TEXT("pelvis"), CurrentBlendWeight);
	}
}

void UPhysicsHitReactionComponent::UpdateGamestyleModifiers(int32 DefenseStacks, int32 MobilityStacks)
{
	// Defense reduces impulse by 10% per stack (max 50% reduction)
	DefenseImpulseReduction = FMath::Min(DefenseStacks * 0.1f, 0.5f);
	
	// Mobility speeds up recovery by 5% per stack (max 50% faster)
	MobilityRecoveryBonus = FMath::Min(MobilityStacks * 0.05f, 0.5f);
}

void UPhysicsHitReactionComponent::InitializePhysicsProfiles()
{
	if (!PhysicalAnimationComponent || !SkeletalMeshComponent)
	{
		return;
	}

	// Apply physics profiles to bones
	for (const FPhysicsProfile& Profile : PhysicsProfiles)
	{
		if (Profile.BoneName == NAME_None)
		{
			continue;
		}

		FPhysicalAnimationData AnimData;
		AnimData.bIsLocalSimulation = true;
		AnimData.OrientationStrength = 500.0f;
		AnimData.AngularVelocityStrength = 100.0f;
		AnimData.PositionStrength = 500.0f;
		AnimData.VelocityStrength = 100.0f;

		PhysicalAnimationComponent->ApplyPhysicalAnimationSettingsBelow(Profile.BoneName, AnimData, Profile.bIncludeBelow);
	}
}

void UPhysicsHitReactionComponent::ApplyImpulseToBone(const FName& BoneName, const FVector& Impulse, float StrengthMultiplier)
{
	if (!SkeletalMeshComponent)
	{
		return;
	}

	// Find the profile for this bone
	float ProfileMultiplier = 1.0f;
	for (const FPhysicsProfile& Profile : PhysicsProfiles)
	{
		if (Profile.BoneName == BoneName)
		{
			ProfileMultiplier = Profile.StrengthMultiplier;
			break;
		}
	}

	FVector FinalImpulse = Impulse * StrengthMultiplier * ProfileMultiplier;

	// Apply the impulse
	SkeletalMeshComponent->AddImpulseAtLocation(FinalImpulse, SkeletalMeshComponent->GetBoneLocation(BoneName), BoneName);
}

float UPhysicsHitReactionComponent::CalculateImpulseStrength(EHitReactionType ReactionType, float DamageAmount)
{
	float BaseImpulse = 0.0f;

	switch (ReactionType)
	{
		case EHitReactionType::Light:
			BaseImpulse = LightHitImpulse;
			break;
		case EHitReactionType::Medium:
			BaseImpulse = MediumHitImpulse;
			break;
		case EHitReactionType::Heavy:
			BaseImpulse = HeavyHitImpulse;
			break;
		case EHitReactionType::Blocked:
			BaseImpulse = BlockedHitImpulse;
			break;
		case EHitReactionType::WeakSide:
			BaseImpulse = WeakSideImpulse;
			break;
		case EHitReactionType::Hack:
			BaseImpulse = HackHeadImpulse;
			break;
		case EHitReactionType::Knockback:
			BaseImpulse = KnockbackImpulse;
			break;
	}

	// Scale by damage amount if provided
	if (DamageAmount > 0.0f)
	{
		float DamageScale = FMath::Clamp(DamageAmount / 50.0f, 0.5f, 2.0f);
		BaseImpulse *= DamageScale;
	}

	return BaseImpulse;
}

FVector UPhysicsHitReactionComponent::CalculateImpulseDirection(const FVector& HitLocation, const FVector& HitDirection, EHitReactionType ReactionType)
{
	FVector Direction = -HitDirection; // Default: away from hit

	if (ReactionType == EHitReactionType::Hack)
	{
		// Hack pulls head upward and back
		Direction = (FVector::UpVector + (-HitDirection * 0.5f)).GetSafeNormal();
	}
	else if (ReactionType == EHitReactionType::Knockback)
	{
		// Strong pushback
		Direction = -HitDirection;
	}
	else if (ReactionType == EHitReactionType::WeakSide)
	{
		// Weak side hits add some upward force
		Direction = (-HitDirection + FVector::UpVector * 0.3f).GetSafeNormal();
	}

	return Direction;
}

void UPhysicsHitReactionComponent::UpdateLOD()
{
	if (!OwnerCharacter)
	{
		return;
	}

	// Calculate distance to camera
	if (APlayerCameraManager* CameraManager = UGameplayStatics::GetPlayerCameraManager(GetWorld(), 0))
	{
		DistanceToCamera = FVector::Dist(OwnerCharacter->GetActorLocation(), CameraManager->GetCameraLocation());
	}

	// Determine LOD level
	if (DistanceToCamera < FullPhysicsDistance)
	{
		CurrentLODLevel = 0; // Full physics
	}
	else if (DistanceToCamera < SimplifiedPhysicsDistance)
	{
		CurrentLODLevel = 1; // Simplified physics
	}
	else
	{
		CurrentLODLevel = 2; // Animation only
		
		// Disable physics at far distances
		if (bPhysicsActive)
		{
			ResetPhysics();
		}
	}
}