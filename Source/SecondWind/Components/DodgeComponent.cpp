#include "DodgeComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "CombatComponent.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"

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
    }
}

void UDodgeComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    // Track movement hold time for dodge detection
    if (!CurrentMovementInput.IsNearlyZero())
    {
        MovementHoldTime += DeltaTime;

        // Update pending dodge direction if threshold met
        if (MovementHoldTime >= DirectionHoldThreshold)
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