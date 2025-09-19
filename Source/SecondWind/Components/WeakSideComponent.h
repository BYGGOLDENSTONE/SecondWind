#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WeakSideComponent.generated.h"

UENUM(BlueprintType)
enum class EWeakSide : uint8
{
    None,
    Left,
    Right
};

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class SECONDWIND_API UWeakSideComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    UWeakSideComponent();

protected:
    virtual void BeginPlay() override;

public:
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

    UFUNCTION(BlueprintCallable, Category = "WeakSide")
    void ActivateWeakSide();

    UFUNCTION(BlueprintCallable, Category = "WeakSide")
    void DeactivateWeakSide();

    UFUNCTION(BlueprintCallable, Category = "WeakSide")
    EWeakSide GetCurrentWeakSide() const { return CurrentWeakSide; }

    UFUNCTION(BlueprintCallable, Category = "WeakSide")
    bool IsWeakSideActive() const { return bWeakSideActive && CurrentWeakSide != EWeakSide::None; }

    UFUNCTION(BlueprintCallable, Category = "WeakSide")
    void OnWeakSideHit();

    UFUNCTION(BlueprintCallable, Category = "WeakSide")
    bool IsAttackFromWeakSide(const FVector& AttackerLocation) const;

private:
    UPROPERTY()
    bool bWeakSideActive;

    UPROPERTY()
    EWeakSide CurrentWeakSide;

    UPROPERTY()
    float WeakSideTimer;

    UPROPERTY()
    float CooldownTimer;

    UPROPERTY()
    float WeakSideDuration = 3.0f;

    UPROPERTY()
    float WeakSideCooldown = 2.0f;

    void SelectNewWeakSide();
    void UpdateVisualFeedback();
    void ClearVisualFeedback();
};