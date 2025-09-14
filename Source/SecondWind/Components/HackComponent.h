#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HackComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCounterProgressChanged, int32, CurrentCounters);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnHackAvailable);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnHackExecuted);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCountersReset);

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class SECONDWIND_API UHackComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    UHackComponent();

protected:
    virtual void BeginPlay() override;

public:
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

    // Counter Management
    UFUNCTION()
    void AddCounter();

    UFUNCTION()
    void RegisterUnblockedHit();

    UFUNCTION()
    void ResetCounters();

    // Hack Attack Execution
    UFUNCTION()
    bool TryExecuteHack();

    UFUNCTION()
    bool IsHackAvailable() const { return CounterAttacks >= RequiredCounters; }

    UFUNCTION()
    int32 GetCurrentCounters() const { return CounterAttacks; }

    UFUNCTION()
    int32 GetRequiredCounters() const { return RequiredCounters; }

    UFUNCTION()
    int32 GetUnblockedHits() const { return UnblockedHits; }

    UFUNCTION()
    void SetRequiredCounters(int32 NewRequirement) { RequiredCounters = NewRequirement; }

    // Events
    UPROPERTY()
    FOnCounterProgressChanged OnCounterProgressChanged;

    UPROPERTY()
    FOnHackAvailable OnHackAvailable;

    UPROPERTY()
    FOnHackExecuted OnHackExecuted;

    UPROPERTY()
    FOnCountersReset OnCountersReset;

private:
    // Counter tracking
    UPROPERTY()
    int32 CounterAttacks = 0;

    UPROPERTY()
    int32 UnblockedHits = 0;

    // Configuration
    UPROPERTY(EditDefaultsOnly, Category = "Hack Attack")
    int32 RequiredCounters = 6;

    UPROPERTY(EditDefaultsOnly, Category = "Hack Attack")
    int32 UnblockedHitsToReset = 2;

    UPROPERTY(EditDefaultsOnly, Category = "Hack Attack")
    float HackDamage = 50.0f;

    UPROPERTY(EditDefaultsOnly, Category = "Hack Attack")
    float HackStunDuration = 2.0f;

    UPROPERTY(EditDefaultsOnly, Category = "Hack Attack")
    float HackRange = 1000.0f;

    // Hack execution state
    UPROPERTY()
    bool bIsExecutingHack = false;

    UPROPERTY()
    float HackExecutionTimer = 0.0f;

    UPROPERTY(EditDefaultsOnly, Category = "Hack Attack")
    float HackExecutionDuration = 0.5f;

    // Internal methods
    void ExecuteHack();
    class AActor* FindHackTarget() const;
    void ApplyHackEffects(AActor* Target);
};