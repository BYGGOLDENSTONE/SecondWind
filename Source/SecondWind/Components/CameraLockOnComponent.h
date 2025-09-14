#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CameraLockOnComponent.generated.h"

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class SECONDWIND_API UCameraLockOnComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    UCameraLockOnComponent();

protected:
    virtual void BeginPlay() override;

public:
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

    // Lock-on management
    void UpdateLockOnTarget();
    void SetLockOnTarget(AActor* NewTarget);
    void ClearLockOnTarget();

    // Getters
    AActor* GetCurrentTarget() const { return CurrentTarget; }
    bool IsLockedOn() const { return CurrentTarget != nullptr; }
    bool IsInArenaRange() const;

    // Movement modifiers for strafe
    FVector GetModifiedMovementInput(const FVector& OriginalInput) const;
    FRotator GetDesiredRotation() const;

private:
    // Lock-on settings
    UPROPERTY(EditAnywhere, Category = "Lock-On Settings")
    float TrainingDummyLockRange = 600.0f;

    UPROPERTY(EditAnywhere, Category = "Lock-On Settings")
    float ArenaEnemyLockRange = 1500.0f;

    UPROPERTY(EditAnywhere, Category = "Lock-On Settings")
    float CameraLagSpeed = 3.0f;  // Reduced for smoother camera movement

    UPROPERTY(EditAnywhere, Category = "Lock-On Settings")
    float RotationSpeed = 5.0f;  // Reduced for smoother character rotation

    UPROPERTY(EditAnywhere, Category = "Lock-On Settings")
    float InitialLockOnSpeed = 2.0f;  // Even slower speed for initial lock-on

    UPROPERTY(EditAnywhere, Category = "Lock-On Settings")
    bool bAutoLockOn = true;

    UPROPERTY(EditAnywhere, Category = "Lock-On Settings")
    float LockedCameraPitch = -20.0f;

    UPROPERTY(EditAnywhere, Category = "Lock-On Settings")
    bool bMaintainPitchWhenLocked = true;

    // Current target
    UPROPERTY()
    AActor* CurrentTarget;

    // Lock-on transition timing
    float LockOnTransitionTime;
    static constexpr float LockOnTransitionDuration = 0.5f;

    // References
    class ACharacter* OwnerCharacter;
    class APlayerController* PlayerController;
    class UCameraComponent* CameraComponent;

    // Helper functions
    AActor* FindBestTarget() const;
    float GetLockOnRange(AActor* Target) const;
    bool IsValidTarget(AActor* Target) const;
    void UpdateCameraRotation(float DeltaTime);
    void UpdateCharacterRotation(float DeltaTime);
};