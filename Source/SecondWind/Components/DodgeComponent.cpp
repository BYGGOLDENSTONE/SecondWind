#include "DodgeComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "CombatComponent.h"
#include "AnimationComponentSimplified.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"
#include "SecondWind/Systems/GamestyleSystem.h"
#include "Engine/GameInstance.h"

UDodgeComponent::UDodgeComponent()
{
    PrimaryComponentTick.bCanEverTick = true;

    CurrentMovementInput = FVector2D::ZeroVector;
    MovementHoldTime = 0.0f;
    PendingDodgeDirection = EDodgeDirection::None;

    bIsInCounterWindow = false;
    CounterWindowTimer = 0.0f;

    bIsInDash = false;
    DashTimer = 0.0f;
    bHasPerformedLeapAttack = false;

    LastDodgeTime = -DodgeCooldown;
}

void UDodgeComponent::BeginPlay()
{
    Super::BeginPlay();

    OwnerCharacter = Cast<ACharacter>(GetOwner());
    if (OwnerCharacter)
    {
        CombatComponent = OwnerCharacter->FindComponentByClass<UCombatComponent>();

        // Find the properly configured animation component
        TArray<UAnimationComponentSimplified*> AnimComponents;
        OwnerCharacter->GetComponents<UAnimationComponentSimplified>(AnimComponents);

        for (UAnimationComponentSimplified* AnimComp : AnimComponents)
        {
            if (AnimComp && AnimComp->IsProperlyConfigured())
            {
                AnimationSystem = AnimComp;
                break;
            }
        }

        if (!AnimationSystem && AnimComponents.Num() > 0)
        {
            AnimationSystem = AnimComponents[0];
        }
    }
}

void UDodgeComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    // Track movement hold time for dodge detection
    if (!CurrentMovementInput.IsNearlyZero())
    {
        MovementHoldTime += DeltaTime;

        // Apply mobility gamestyle bonus to reduce hold threshold
        float EffectiveThreshold = DirectionHoldThreshold;
        if (UGameInstance* GameInstance = GetWorld()->GetGameInstance())
        {
            if (UGamestyleSystem* GamestyleSystem = GameInstance->GetSubsystem<UGamestyleSystem>())
            {
                float MobilityBonus = GamestyleSystem->GetMobilitySpeedBonus();
                EffectiveThreshold = FMath::Max(0.01f, DirectionHoldThreshold - MobilityBonus);
            }
        }

        // Update pending dodge direction if threshold met
        if (MovementHoldTime >= EffectiveThreshold)
        {
            PendingDodgeDirection = GetDodgeDirectionFromInput();
        }
    }
    else
    {
        MovementHoldTime = 0.0f;
        PendingDodgeDirection = EDodgeDirection::None;
    }

    // Handle counter window timer
    if (bIsInCounterWindow)
    {
        CounterWindowTimer -= DeltaTime;
        if (CounterWindowTimer <= 0.0f)
        {
            CloseCounterWindow();
        }
    }

    // Handle dash timer
    if (bIsInDash)
    {
        DashTimer -= DeltaTime;
        if (DashTimer <= 0.0f)
        {
            bIsInDash = false;
            bHasPerformedLeapAttack = false;
        }
    }

    // Debug visualization
#if WITH_EDITOR
    if (OwnerCharacter)
    {
        FVector CharacterLocation = OwnerCharacter->GetActorLocation();

        // Show counter window state
        if (bIsInCounterWindow)
        {
            DrawDebugSphere(GetWorld(), CharacterLocation + FVector(0, 0, 150), 30, 12,
                FColor::Yellow, false, -1.0f, 0, 2.0f);
        }

        // Show dash state
        if (bIsInDash)
        {
            DrawDebugSphere(GetWorld(), CharacterLocation + FVector(0, 0, 100), 20, 12,
                FColor::Cyan, false, -1.0f, 0, 2.0f);
        }
    }
#endif
}

void UDodgeComponent::HandleMovementInput(const FInputActionValue& Value)
{
    CurrentMovementInput = Value.Get<FVector2D>();
}

void UDodgeComponent::HandleDodgeInput()
{
    // Check for dash (W + Space)
    if (CurrentMovementInput.Y > 0.5f && FMath::Abs(CurrentMovementInput.X) < 0.3f)
    {
        if (CanDash())
        {
            PerformDash();
        }
    }
    // Check for strategic dodge (A/S/D + Space with hold threshold)
    else if (PendingDodgeDirection != EDodgeDirection::None && PendingDodgeDirection != EDodgeDirection::Forward)
    {
        if (CanDodge())
        {
            PerformDodge(PendingDodgeDirection);
        }
    }
}

void UDodgeComponent::HandleDashInput()
{
    // Alternative input method for dash
    if (CanDash())
    {
        PerformDash();
    }
}

void UDodgeComponent::PerformDodge(EDodgeDirection Direction)
{
    if (!OwnerCharacter)
        return;

    // Log mobility bonus if active
    if (UGameInstance* GameInstance = GetWorld()->GetGameInstance())
    {
        if (UGamestyleSystem* GamestyleSystem = GameInstance->GetSubsystem<UGamestyleSystem>())
        {
            float MobilityBonus = GamestyleSystem->GetMobilitySpeedBonus();
            if (MobilityBonus > 0)
            {
                float EffectiveThreshold = FMath::Max(0.01f, DirectionHoldThreshold - MobilityBonus);
                UE_LOG(LogTemp, Warning, TEXT(">>> MOBILITY BONUS: Dodge activated faster! %.2fs -> %.2fs (-%.2fs) <<<"),
                    DirectionHoldThreshold, EffectiveThreshold, MobilityBonus);
            }
        }
    }

    LastDodgeTime = GetWorld()->GetTimeSeconds();

    // Calculate dodge direction in world space
    FVector DodgeDirection = FVector::ZeroVector;
    FRotator CharacterRotation = OwnerCharacter->GetActorRotation();

    switch (Direction)
    {
        case EDodgeDirection::Left:
            DodgeDirection = -OwnerCharacter->GetActorRightVector();
            UE_LOG(LogTemp, Warning, TEXT("Dodging Left"));
            break;
        case EDodgeDirection::Right:
            DodgeDirection = OwnerCharacter->GetActorRightVector();
            UE_LOG(LogTemp, Warning, TEXT("Dodging Right"));
            break;
        case EDodgeDirection::Back:
            DodgeDirection = -OwnerCharacter->GetActorForwardVector();
            UE_LOG(LogTemp, Warning, TEXT("Dodging Back"));
            break;
        default:
            return;
    }

    // Play dodge animation based on direction
    if (AnimationSystem)
    {
        EAnimationType DodgeAnim = EAnimationType::DodgeBack;
        switch (Direction)
        {
            case EDodgeDirection::Left:
                DodgeAnim = EAnimationType::DodgeLeft;
                break;
            case EDodgeDirection::Right:
                DodgeAnim = EAnimationType::DodgeRight;
                break;
            case EDodgeDirection::Back:
                DodgeAnim = EAnimationType::DodgeBack;
                break;
            case EDodgeDirection::Forward:
                DodgeAnim = EAnimationType::DodgeForward;
                break;
        }
        AnimationSystem->PlayAnimation(DodgeAnim, EAnimationPriority::High);
    }

    // Apply dodge impulse (animation will handle actual movement)
    if (UCharacterMovementComponent* MovementComp = OwnerCharacter->GetCharacterMovement())
    {
        // Launch character for initial dodge momentum
        // Animation will control the actual dodge distance
        MovementComp->Launch(DodgeDirection * 500.0f);
    }

    // Open counter window after dodge
    OpenCounterWindow();

    // Check if this is a weak side dodge (will be determined by enemy position later)
    if (IsWeakSideDodge(Direction))
    {
        UE_LOG(LogTemp, Warning, TEXT("Weak side dodge performed!"));
        // Future: Build hack meter faster
    }

    // Reset movement tracking
    MovementHoldTime = 0.0f;
    PendingDodgeDirection = EDodgeDirection::None;
}

void UDodgeComponent::PerformDash()
{
    if (!OwnerCharacter)
        return;

    // Play forward dodge animation (acts as dash)
    if (AnimationSystem)
    {
        AnimationSystem->PlayAnimation(EAnimationType::DodgeForward, EAnimationPriority::High);
    }

    // Log mobility bonus if active
    if (UGameInstance* GameInstance = GetWorld()->GetGameInstance())
    {
        if (UGamestyleSystem* GamestyleSystem = GameInstance->GetSubsystem<UGamestyleSystem>())
        {
            float MobilityBonus = GamestyleSystem->GetMobilitySpeedBonus();
            if (MobilityBonus > 0)
            {
                UE_LOG(LogTemp, Warning, TEXT(">>> MOBILITY BONUS: Dash activated faster! Reduced cast time by %.2fs <<<"),
                    MobilityBonus);
            }
        }
    }

    bIsInDash = true;
    DashTimer = DashDuration;
    bHasPerformedLeapAttack = false;

    UE_LOG(LogTemp, Warning, TEXT("Performing Dash"));

    // Apply forward dash impulse (animation will handle actual movement)
    if (UCharacterMovementComponent* MovementComp = OwnerCharacter->GetCharacterMovement())
    {
        FVector DashDirection = OwnerCharacter->GetActorForwardVector();
        MovementComp->Launch(DashDirection * 800.0f);
    }
}

void UDodgeComponent::PerformLeapAttack()
{
    if (!CanPerformLeapAttack())
        return;

    bHasPerformedLeapAttack = true;

    UE_LOG(LogTemp, Warning, TEXT("Performing Leap Attack"));

    // Trigger leap attack through combat component
    if (CombatComponent)
    {
        // Future: Add special leap attack logic
        CombatComponent->PerformAttack();
    }
}

void UDodgeComponent::OpenCounterWindow()
{
    bIsInCounterWindow = true;
    CounterWindowTimer = CounterWindowDuration;

    // Don't add counter here - only when player actually attacks during the window
    UE_LOG(LogTemp, Warning, TEXT("*** DODGE COUNTER WINDOW OPEN for %.1f seconds! Press LMB to counter! ***"), CounterWindowDuration);
}

void UDodgeComponent::CloseCounterWindow()
{
    bIsInCounterWindow = false;
    CounterWindowTimer = 0.0f;

    UE_LOG(LogTemp, Warning, TEXT("Counter window closed"));
}

bool UDodgeComponent::IsWeakSideDodge(EDodgeDirection Direction) const
{
    // TODO: This will need to check enemy position and attack direction
    // For now, just return false
    // In Phase 5, we'll implement proper weak side detection based on enemy state
    return false;
}

EDodgeDirection UDodgeComponent::GetDodgeDirectionFromInput() const
{
    // Check for forward (W key)
    if (CurrentMovementInput.Y > 0.5f && FMath::Abs(CurrentMovementInput.X) < 0.3f)
    {
        return EDodgeDirection::Forward;
    }
    // Check for back (S key)
    else if (CurrentMovementInput.Y < -0.5f && FMath::Abs(CurrentMovementInput.X) < 0.3f)
    {
        return EDodgeDirection::Back;
    }
    // Check for left (A key)
    else if (CurrentMovementInput.X < -0.5f && FMath::Abs(CurrentMovementInput.Y) < 0.3f)
    {
        return EDodgeDirection::Left;
    }
    // Check for right (D key)
    else if (CurrentMovementInput.X > 0.5f && FMath::Abs(CurrentMovementInput.Y) < 0.3f)
    {
        return EDodgeDirection::Right;
    }

    return EDodgeDirection::None;
}

bool UDodgeComponent::CanDodge() const
{
    if (!OwnerCharacter)
        return false;

    // Check cooldown
    float CurrentTime = GetWorld()->GetTimeSeconds();
    if (CurrentTime - LastDodgeTime < DodgeCooldown)
        return false;

    // Check if not already in dash
    if (bIsInDash)
        return false;

    // Future: Check if not in attack animation, not stunned, etc.

    return true;
}

bool UDodgeComponent::CanDash() const
{
    if (!OwnerCharacter)
        return false;

    // Can't dash if already in dash
    if (bIsInDash)
        return false;

    // Future: Check if not in attack animation, not stunned, etc.

    return true;
}