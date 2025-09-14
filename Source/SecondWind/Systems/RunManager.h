#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "RunManager.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRunStarted, int32, RunNumber);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnRunEnded, int32, RunNumber, bool, bCompleted);

UCLASS()
class SECONDWIND_API URunManager : public UGameInstanceSubsystem
{
    GENERATED_BODY()

public:
    virtual void Initialize(FSubsystemCollectionBase& Collection) override;
    virtual void Deinitialize() override;

    UFUNCTION(BlueprintCallable, Category = "Run")
    void StartNewRun();

    UFUNCTION(BlueprintCallable, Category = "Run")
    void EndCurrentRun(bool bCompleted = false);

    UFUNCTION(BlueprintCallable, Category = "Run")
    void OnPlayerDeath();

    UFUNCTION(BlueprintCallable, Category = "Run")
    int32 GetCurrentRunNumber() const { return CurrentRunNumber; }

    UFUNCTION(BlueprintCallable, Category = "Run")
    bool IsRunActive() const { return bRunActive; }

    UPROPERTY(BlueprintAssignable, Category = "Run")
    FOnRunStarted OnRunStarted;

    UPROPERTY(BlueprintAssignable, Category = "Run")
    FOnRunEnded OnRunEnded;

private:
    UPROPERTY()
    int32 CurrentRunNumber;

    UPROPERTY()
    bool bRunActive;

    void ResetPlayerToHub();
};