#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PhysicsHitReactionComponent.generated.h"

class UPhysicalAnimationComponent;
class USkeletalMeshComponent;

UENUM(BlueprintType)
enum class EHitReactionType : uint8
{
	Light,
	Medium,
	Heavy,
	Blocked,
	WeakSide,
	Hack,
	Knockback
};

USTRUCT(BlueprintType)
struct FPhysicsProfile
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly)
	FName BoneName = NAME_None;

	UPROPERTY(EditDefaultsOnly)
	float StrengthMultiplier = 1.0f;

	UPROPERTY(EditDefaultsOnly)
	bool bIncludeSelf = true;

	UPROPERTY(EditDefaultsOnly)
	bool bIncludeBelow = true;
};

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class SECONDWIND_API UPhysicsHitReactionComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPhysicsHitReactionComponent();

	virtual void BeginPlay() override;
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	// Main physics reaction interface
	void ApplyHitReaction(const FVector& HitLocation, const FVector& HitDirection, EHitReactionType ReactionType, float DamageAmount = 0.0f);
	void ApplyHackReaction(AActor* Target);
	void ResetPhysics();

	// Configuration
	void SetPhysicsEnabled(bool bEnabled);
	void SetPhysicsBlendWeight(float Weight);
	void UpdateGamestyleModifiers(int32 DefenseStacks, int32 MobilityStacks);

protected:
	// Impulse strengths for different hit types
	UPROPERTY(EditDefaultsOnly, Category = "Physics|Impulse")
	float LightHitImpulse = 500.0f;

	UPROPERTY(EditDefaultsOnly, Category = "Physics|Impulse")
	float MediumHitImpulse = 1000.0f;

	UPROPERTY(EditDefaultsOnly, Category = "Physics|Impulse")
	float HeavyHitImpulse = 1500.0f;

	UPROPERTY(EditDefaultsOnly, Category = "Physics|Impulse")
	float BlockedHitImpulse = 200.0f;

	UPROPERTY(EditDefaultsOnly, Category = "Physics|Impulse")
	float WeakSideImpulse = 2000.0f;

	UPROPERTY(EditDefaultsOnly, Category = "Physics|Impulse")
	float HackHeadImpulse = 2500.0f;

	UPROPERTY(EditDefaultsOnly, Category = "Physics|Impulse")
	float KnockbackImpulse = 3000.0f;

	// Blend timings
	UPROPERTY(EditDefaultsOnly, Category = "Physics|Blending")
	float PhysicsTakeoverTime = 0.2f;

	UPROPERTY(EditDefaultsOnly, Category = "Physics|Blending")
	float BlendBackTime = 0.4f;

	UPROPERTY(EditDefaultsOnly, Category = "Physics|Blending")
	float MaxPhysicsTime = 0.6f;

	// Bone profiles for physics
	UPROPERTY(EditDefaultsOnly, Category = "Physics|Bones")
	TArray<FPhysicsProfile> PhysicsProfiles;

	// LOD settings
	UPROPERTY(EditDefaultsOnly, Category = "Physics|Performance")
	float FullPhysicsDistance = 1000.0f;

	UPROPERTY(EditDefaultsOnly, Category = "Physics|Performance")
	float SimplifiedPhysicsDistance = 2000.0f;

	UPROPERTY(EditDefaultsOnly, Category = "Physics|Performance")
	int32 MaxSimultaneousBones = 10;

private:
	void InitializePhysicsProfiles();
	void ApplyImpulseToBone(const FName& BoneName, const FVector& Impulse, float StrengthMultiplier = 1.0f);
	float CalculateImpulseStrength(EHitReactionType ReactionType, float DamageAmount);
	FVector CalculateImpulseDirection(const FVector& HitLocation, const FVector& HitDirection, EHitReactionType ReactionType);
	void UpdateLOD();

	// Component references
	UPhysicalAnimationComponent* PhysicalAnimationComponent;
	USkeletalMeshComponent* SkeletalMeshComponent;
	class ACharacter* OwnerCharacter;

	// Current state
	bool bPhysicsActive = false;
	float CurrentPhysicsTime = 0.0f;
	float CurrentBlendWeight = 0.0f;
	EHitReactionType LastReactionType = EHitReactionType::Light;

	// Gamestyle modifiers
	float DefenseImpulseReduction = 0.0f;
	float MobilityRecoveryBonus = 0.0f;

	// Performance
	int32 CurrentLODLevel = 0;
	float DistanceToCamera = 0.0f;
};