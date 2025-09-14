#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "FragmentSystem.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFragmentSystemChanged, int32, NewTotal);

UCLASS()
class SECONDWIND_API UFragmentSystem : public UGameInstanceSubsystem
{
    GENERATED_BODY()

public:
    virtual void Initialize(FSubsystemCollectionBase& Collection) override;
    virtual void Deinitialize() override;

    UFUNCTION(BlueprintCallable, Category = "Fragments")
    void AddFragments(int32 Amount);

    UFUNCTION(BlueprintCallable, Category = "Fragments")
    bool SpendFragments(int32 Amount);

    UFUNCTION(BlueprintCallable, Category = "Fragments")
    int32 GetFragmentCount() const { return CurrentFragments; }

    UFUNCTION(BlueprintCallable, Category = "Fragments")
    void SaveFragments();

    UFUNCTION(BlueprintCallable, Category = "Fragments")
    void LoadFragments();

    UFUNCTION(BlueprintCallable, Category = "Fragments")
    void ResetForNewRun() { /* Fragments persist between runs in same session */ }

    UPROPERTY(BlueprintAssignable, Category = "Fragments")
    FOnFragmentSystemChanged OnFragmentSystemChanged;

private:
    UPROPERTY()
    int32 CurrentFragments;

    void UpdateSaveGame();
};