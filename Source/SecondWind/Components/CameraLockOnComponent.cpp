#include "CameraLockOnComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/PlayerController.h"
#include "Camera/CameraComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"
#include "SecondWind/Actors/TrainingDummy.h"
#include "SecondWind/Actors/ArenaEnemy.h"
#include "SecondWind/Systems/EnemyManager.h"
#include "HealthComponent.h"
#include "SecondWind/UI/SecondWindHUD.h"

UCameraLockOnComponent::UCameraLockOnComponent()
{
    PrimaryComponentTick.bCanEverTick = true;
    CurrentTarget = nullptr;
    LockOnTransitionTime = 0.0f;
}

void UCameraLockOnComponent::BeginPlay()
{
    Super::BeginPlay();

    OwnerCharacter = Cast<ACharacter>(GetOwner());
    if (OwnerCharacter)
    {
        PlayerController = Cast<APlayerController>(OwnerCharacter->GetController());

        // Find camera component
        TArray<UCameraComponent*> CameraComponents;
        OwnerCharacter->GetComponents<UCameraComponent>(CameraComponents);
        if (CameraComponents.Num() > 0)
        {
            CameraComponent = CameraComponents[0];
        }
    }
}

void UCameraLockOnComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    if (!OwnerCharacter || !PlayerController)
        return;

    // Auto lock-on system
    if (bAutoLockOn)
    {
        UpdateLockOnTarget();
    }

    // Update camera and character rotation when locked on
    if (IsLockedOn())
    {
        UpdateCameraRotation(DeltaTime);
        UpdateCharacterRotation(DeltaTime);

        // Check if target is still valid
        if (!IsValidTarget(CurrentTarget))
        {
            ClearLockOnTarget();
        }
    }

    // Debug visualization
#if WITH_EDITOR
    if (OwnerCharacter)
    {
        FVector CharacterLocation = OwnerCharacter->GetActorLocation();

        // Show lock-on state
        if (IsLockedOn())
        {
            DrawDebugLine(GetWorld(), CharacterLocation, CurrentTarget->GetActorLocation(),
                FColor::Red, false, -1.0f, 0, 2.0f);
            DrawDebugSphere(GetWorld(), CurrentTarget->GetActorLocation() + FVector(0, 0, 100),
                20, 12, FColor::Red, false, -1.0f, 0, 2.0f);
        }

        // Show lock-on range
        DrawDebugCircle(GetWorld(), CharacterLocation, TrainingDummyLockRange, 32,
            FColor::Yellow, false, -1.0f, 0, 1.0f, FVector(0, 1, 0), FVector(1, 0, 0));
    }
#endif
}

void UCameraLockOnComponent::UpdateLockOnTarget()
{
    if (!CurrentTarget)
    {
        // Try to find a target
        AActor* BestTarget = FindBestTarget();
        if (BestTarget)
        {
            SetLockOnTarget(BestTarget);
        }
    }
    else
    {
        // Check if current target is still in range
        float Distance = FVector::Dist(OwnerCharacter->GetActorLocation(), CurrentTarget->GetActorLocation());
        float MaxRange = GetLockOnRange(CurrentTarget);

        if (Distance > MaxRange)
        {
            ClearLockOnTarget();
        }
    }
}

void UCameraLockOnComponent::SetLockOnTarget(AActor* NewTarget)
{
    if (CurrentTarget != NewTarget)
    {
        CurrentTarget = NewTarget;
        LockOnTransitionTime = 0.0f;  // Reset transition timer when target changes

        if (CurrentTarget)
        {
            UE_LOG(LogTemp, Warning, TEXT("Locked onto target: %s"), *CurrentTarget->GetName());

            // Update HUD to show enemy health bar
            if (PlayerController)
            {
                if (ASecondWindHUD* HUD = Cast<ASecondWindHUD>(PlayerController->GetHUD()))
                {
                    HUD->BindToEnemy();
                }
            }
        }
    }
}

void UCameraLockOnComponent::ClearLockOnTarget()
{
    if (CurrentTarget)
    {
        UE_LOG(LogTemp, Warning, TEXT("Lock-on cleared"));
        CurrentTarget = nullptr;

        // Update HUD to hide enemy health bar
        if (PlayerController)
        {
            if (ASecondWindHUD* HUD = Cast<ASecondWindHUD>(PlayerController->GetHUD()))
            {
                HUD->ShowEnemyHealthBar(false);
            }
        }
    }
}

AActor* UCameraLockOnComponent::FindBestTarget() const
{
    if (!OwnerCharacter)
        return nullptr;

    TArray<AActor*> PotentialTargets;

    // Get all registered enemies from the enemy manager
    if (UGameInstance* GameInstance = OwnerCharacter->GetGameInstance())
    {
        if (UEnemyManager* EnemyManager = GameInstance->GetSubsystem<UEnemyManager>())
        {
            // Get enemies within max lock range (use arena enemy range as it's larger)
            PotentialTargets = EnemyManager->GetEnemiesInRange(OwnerCharacter->GetActorLocation(), ArenaEnemyLockRange);
        }
    }

    AActor* BestTarget = nullptr;
    float BestScore = FLT_MAX;
    FVector CharacterLocation = OwnerCharacter->GetActorLocation();
    FVector CharacterForward = OwnerCharacter->GetActorForwardVector();

    for (AActor* Target : PotentialTargets)
    {
        if (!IsValidTarget(Target))
            continue;

        float Distance = FVector::Dist(CharacterLocation, Target->GetActorLocation());
        float MaxRange = GetLockOnRange(Target);

        if (Distance > MaxRange)
            continue;

        // Score based on distance and angle
        FVector ToTarget = (Target->GetActorLocation() - CharacterLocation).GetSafeNormal();
        float DotProduct = FVector::DotProduct(CharacterForward, ToTarget);

        // Prefer targets in front and closer
        float Score = Distance * (2.0f - DotProduct);

        if (Score < BestScore)
        {
            BestScore = Score;
            BestTarget = Target;
        }
    }

    return BestTarget;
}

float UCameraLockOnComponent::GetLockOnRange(AActor* Target) const
{
    if (!Target)
        return 0.0f;

    // Check if it's a training dummy
    if (Target->IsA<ATrainingDummy>())
    {
        return TrainingDummyLockRange;
    }

    // Default to arena enemy range
    return ArenaEnemyLockRange;
}

bool UCameraLockOnComponent::IsValidTarget(AActor* Target) const
{
    if (!Target)
        return false;

    // Check if it's a valid target type
    bool bIsValidType = Target->IsA<ATrainingDummy>() || Target->IsA<AArenaEnemy>();

    if (!bIsValidType)
        return false;

    // Check if target is alive (has health component)
    if (UHealthComponent* HealthComp = Target->FindComponentByClass<UHealthComponent>())
    {
        return HealthComp->IsAlive();
    }

    return true; // If no health component, assume valid (like training dummy)
}

bool UCameraLockOnComponent::IsInArenaRange() const
{
    if (!CurrentTarget)
        return false;

    float Distance = FVector::Dist(OwnerCharacter->GetActorLocation(), CurrentTarget->GetActorLocation());
    return Distance <= ArenaEnemyLockRange;
}

FVector UCameraLockOnComponent::GetModifiedMovementInput(const FVector& OriginalInput) const
{
    if (!IsLockedOn() || !OwnerCharacter)
        return OriginalInput;

    // Convert WASD to strafe movement when locked on
    FVector TargetDirection = (CurrentTarget->GetActorLocation() - OwnerCharacter->GetActorLocation()).GetSafeNormal();
    FVector RightVector = FVector::CrossProduct(FVector::UpVector, TargetDirection);

    // A/D becomes strafe left/right
    // W/S becomes move forward/back relative to target
    FVector ModifiedInput = TargetDirection * OriginalInput.X + RightVector * OriginalInput.Y;

    return ModifiedInput;
}

FRotator UCameraLockOnComponent::GetDesiredRotation() const
{
    if (!IsLockedOn() || !OwnerCharacter)
        return OwnerCharacter->GetActorRotation();

    FVector ToTarget = CurrentTarget->GetActorLocation() - OwnerCharacter->GetActorLocation();
    ToTarget.Z = 0; // Keep rotation on horizontal plane

    return ToTarget.Rotation();
}

void UCameraLockOnComponent::UpdateCameraRotation(float DeltaTime)
{
    if (!PlayerController || !CurrentTarget)
        return;

    // Update transition timer
    if (LockOnTransitionTime < LockOnTransitionDuration)
    {
        LockOnTransitionTime += DeltaTime;
    }

    // Get current camera rotation
    FRotator CurrentRotation = PlayerController->GetControlRotation();

    // Calculate desired yaw to face target (horizontal plane only)
    FVector CameraLocation = PlayerController->PlayerCameraManager->GetCameraLocation();
    FVector ToTarget = CurrentTarget->GetActorLocation() - CameraLocation;

    // Project to horizontal plane for yaw calculation
    FVector HorizontalToTarget = FVector(ToTarget.X, ToTarget.Y, 0.0f);
    FRotator DesiredRotation = HorizontalToTarget.Rotation();

    // Maintain consistent pitch when locked
    if (bMaintainPitchWhenLocked)
    {
        DesiredRotation.Pitch = LockedCameraPitch;
    }
    else
    {
        // Keep current pitch if not using fixed pitch
        DesiredRotation.Pitch = CurrentRotation.Pitch;
    }

    // Always maintain roll at 0
    DesiredRotation.Roll = 0.0f;

    // Use slower speed during initial lock-on transition, then normal speed
    float TransitionAlpha = FMath::Clamp(LockOnTransitionTime / LockOnTransitionDuration, 0.0f, 1.0f);
    float CurrentSpeed = FMath::Lerp(InitialLockOnSpeed, CameraLagSpeed, TransitionAlpha);

    // Smoothly interpolate to desired rotation with adaptive speed
    FRotator NewRotation = FMath::RInterpTo(CurrentRotation, DesiredRotation, DeltaTime, CurrentSpeed);

    PlayerController->SetControlRotation(NewRotation);
}

void UCameraLockOnComponent::UpdateCharacterRotation(float DeltaTime)
{
    if (!OwnerCharacter || !CurrentTarget)
        return;

    // Make character face the target (except during specific animations)
    FRotator DesiredRotation = GetDesiredRotation();
    FRotator CurrentRotation = OwnerCharacter->GetActorRotation();
    FRotator NewRotation = FMath::RInterpTo(CurrentRotation, DesiredRotation, DeltaTime, RotationSpeed);

    OwnerCharacter->SetActorRotation(NewRotation);
}