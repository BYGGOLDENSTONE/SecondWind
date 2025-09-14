#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FragmentComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFragmentsChanged, int32, NewTotal);

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class SECONDWIND_API UFragmentComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    UFragmentComponent();

protected:
    virtual void BeginPlay() override;

public:
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

    void AddFragments(int32 Amount);
    bool SpendFragments(int32 Amount);
    int32 GetFragmentCount() const { return CurrentFragments; }

    void SaveFragments();
    void LoadFragments();

    UPROPERTY(BlueprintAssignable)
    FOnFragmentsChanged OnFragmentsChanged;

protected:
    UPROPERTY(VisibleAnywhere, Category = "Fragments")
    int32 CurrentFragments = 0;

    UPROPERTY(EditDefaultsOnly, Category = "Fragments")
    int32 MaxFragments = 99999;
};