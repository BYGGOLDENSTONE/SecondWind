#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HackUIComponent.generated.h"

class UHackComponent;

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class SECONDWIND_API UHackUIComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    UHackUIComponent();

protected:
    virtual void BeginPlay() override;

public:
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
    UPROPERTY()
    UHackComponent* HackComponent;

    // UI State
    int32 LastCounterCount = 0;
    bool bWasAvailable = false;

    // Display hack progress
    void DisplayHackProgress();

    // Callbacks
    UFUNCTION()
    void OnCounterProgressChanged(int32 CurrentCounters);

    UFUNCTION()
    void OnHackAvailable();

    UFUNCTION()
    void OnHackExecuted();

    UFUNCTION()
    void OnCountersReset();
};