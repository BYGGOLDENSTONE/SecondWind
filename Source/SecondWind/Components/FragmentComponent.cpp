#include "FragmentComponent.h"
#include "SecondWind/Systems/FragmentSystem.h"
#include "Engine/World.h"
#include "Engine/GameInstance.h"
#include "SecondWind/UI/SecondWindHUD.h"
#include "GameFramework/PlayerController.h"

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

    if (UGameInstance* GameInstance = GetWorld()->GetGameInstance())
    {
        if (UFragmentSystem* FragmentSystem = GameInstance->GetSubsystem<UFragmentSystem>())
        {
            FragmentSystem->AddFragments(Amount);
            CurrentFragments = FragmentSystem->GetFragmentCount();
            OnFragmentsChanged.Broadcast(CurrentFragments);
            UE_LOG(LogTemp, Warning, TEXT("Fragments added via system: %d (Total: %d)"), Amount, CurrentFragments);

            // Update HUD
            if (APlayerController* PC = GetWorld()->GetFirstPlayerController())
            {
                if (ASecondWindHUD* HUD = Cast<ASecondWindHUD>(PC->GetHUD()))
                {
                    HUD->UpdateFragmentCount(CurrentFragments);
                }
            }
        }
    }
}

bool UFragmentComponent::SpendFragments(int32 Amount)
{
    if (UGameInstance* GameInstance = GetWorld()->GetGameInstance())
    {
        if (UFragmentSystem* FragmentSystem = GameInstance->GetSubsystem<UFragmentSystem>())
        {
            bool bSuccess = FragmentSystem->SpendFragments(Amount);
            if (bSuccess)
            {
                CurrentFragments = FragmentSystem->GetFragmentCount();
                OnFragmentsChanged.Broadcast(CurrentFragments);
            }
            return bSuccess;
        }
    }
    return false;
}

void UFragmentComponent::SaveFragments()
{
    if (UGameInstance* GameInstance = GetWorld()->GetGameInstance())
    {
        if (UFragmentSystem* FragmentSystem = GameInstance->GetSubsystem<UFragmentSystem>())
        {
            FragmentSystem->SaveFragments();
        }
    }
}

void UFragmentComponent::LoadFragments()
{
    if (UGameInstance* GameInstance = GetWorld()->GetGameInstance())
    {
        if (UFragmentSystem* FragmentSystem = GameInstance->GetSubsystem<UFragmentSystem>())
        {
            FragmentSystem->LoadFragments();
            CurrentFragments = FragmentSystem->GetFragmentCount();
            OnFragmentsChanged.Broadcast(CurrentFragments);
        }
    }
}