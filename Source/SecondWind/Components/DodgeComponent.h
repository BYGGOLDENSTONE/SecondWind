#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InputActionValue.h"
#include "DodgeComponent.generated.h"

UENUM(BlueprintType)
enum class EDodgeDirection : uint8
{
    None UMETA(DisplayName = "None"),
    Left UMETA(DisplayName = "Left"),
    Right UMETA(DisplayName = "Right"),
    Back UMETA(DisplayName = "Back"),
    Forward UMETA(DisplayName = "Forward")
};

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class SECONDWIND_API UDodgeComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    UDodgeComponent();

protected:
    virtual void BeginPlay() override;

public:
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

    // Input handlers
    void HandleMovementInput(const FInputActionValue& Value);
    void HandleDodgeInput();
    void HandleDashInput();

    // Dodge mechanics
    void PerformDodge(EDodgeDirection Direction);
    void PerformDash();
    void PerformLeapAttack();

    // Counter-attack window
    void OpenCounterWindow();
    void CloseCounterWindow();
    bool IsInCounterWindow() const { return bIsInCounterWindow; }

    // Weak side mechanics
    bool IsWeakSideDodge(EDodgeDirection Direction) const;
    float GetWeakSideDamageMultiplier() const { return WeakSideDamageMultiplier; }

    // Dash state
    bool IsInDash() const { return bIsInDash; }
    bool CanPerformLeapAttack() const { return bIsInDash && !bHasPerformedLeapAttack; }

private:
    // Dodge settings
    UPROPERTY(EditAnywhere, Category = "Dodge Settings")
    float DirectionHoldThreshold = 0.1f;

    UPROPERTY(EditAnywhere, Category = "Dodge Settings")
    float CounterWindowDuration = 1.0f;

    UPROPERTY(EditAnywhere, Category = "Dodge Settings")
    float WeakSideDamageMultiplier = 1.5f;

    UPROPERTY(EditAnywhere, Category = "Dodge Settings")
    float DodgeCooldown = 0.5f;

    // Dash settings
    UPROPERTY(EditAnywhere, Category = "Dash Settings")
    float DashDuration = 0.5f;

    UPROPERTY(EditAnywhere, Category = "Dash Settings")
    float LeapAttackWindow = 0.3f;

    // Movement tracking
    FVector2D CurrentMovementInput;
    float MovementHoldTime;
    EDodgeDirection PendingDodgeDirection;

    // State tracking
    bool bIsInCounterWindow;
    float CounterWindowTimer;

    bool bIsInDash;
    float DashTimer;
    bool bHasPerformedLeapAttack;

    float LastDodgeTime;

    // Helper functions
    EDodgeDirection GetDodgeDirectionFromInput() const;
    bool CanDodge() const;
    bool CanDash() const;

    // References
    class ACharacter* OwnerCharacter;
    class UCombatComponent* CombatComponent;
    class UAnimationComponent* AnimationComponent;
};