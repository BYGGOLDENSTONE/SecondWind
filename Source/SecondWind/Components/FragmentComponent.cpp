#include "FragmentComponent.h"

UFragmentComponent::UFragmentComponent()
{
    PrimaryComponentTick.bCanEverTick = false;
}

void UFragmentComponent::BeginPlay()
{
    Super::BeginPlay();
    LoadFragments();
}

void UFragmentComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void UFragmentComponent::AddFragments(int32 Amount)
{
    if (Amount <= 0)
    {
        return;
    }

    int32 OldFragments = CurrentFragments;
    CurrentFragments = FMath::Clamp(CurrentFragments + Amount, 0, MaxFragments);

    if (CurrentFragments != OldFragments)
    {
        OnFragmentsChanged.Broadcast(CurrentFragments);
        SaveFragments();
        UE_LOG(LogTemp, Warning, TEXT("Fragments added: %d (Total: %d)"), Amount, CurrentFragments);
    }
}

bool UFragmentComponent::SpendFragments(int32 Amount)
{
    if (Amount <= 0 || CurrentFragments < Amount)
    {
        return false;
    }

    CurrentFragments -= Amount;
    OnFragmentsChanged.Broadcast(CurrentFragments);
    SaveFragments();

    UE_LOG(LogTemp, Warning, TEXT("Fragments spent: %d (Remaining: %d)"), Amount, CurrentFragments);
    return true;
}

void UFragmentComponent::SaveFragments()
{
    UE_LOG(LogTemp, Warning, TEXT("Fragments saved: %d"), CurrentFragments);
}

void UFragmentComponent::LoadFragments()
{
    UE_LOG(LogTemp, Warning, TEXT("Fragments loaded: %d"), CurrentFragments);
    OnFragmentsChanged.Broadcast(CurrentFragments);
}