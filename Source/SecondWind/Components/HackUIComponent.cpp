#include "HackUIComponent.h"
#include "HackComponent.h"
#include "Engine/World.h"
#include "Engine/Canvas.h"
#include "Engine/Engine.h"
#include "GameFramework/PlayerController.h"

UHackUIComponent::UHackUIComponent()
{
    PrimaryComponentTick.bCanEverTick = true;
    PrimaryComponentTick.TickInterval = 0.1f; // Update UI less frequently
}

void UHackUIComponent::BeginPlay()
{
    Super::BeginPlay();

    // Find HackComponent on the same actor
    if (AActor* Owner = GetOwner())
    {
        HackComponent = Owner->FindComponentByClass<UHackComponent>();

        if (HackComponent)
        {
            // Subscribe to hack events (Dynamic delegates use AddDynamic)
            HackComponent->OnCounterProgressChanged.AddDynamic(this, &UHackUIComponent::OnCounterProgressChanged);
            HackComponent->OnHackAvailable.AddDynamic(this, &UHackUIComponent::OnHackAvailable);
            HackComponent->OnHackExecuted.AddDynamic(this, &UHackUIComponent::OnHackExecuted);
            HackComponent->OnCountersReset.AddDynamic(this, &UHackUIComponent::OnCountersReset);
        }
    }
}

void UHackUIComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    DisplayHackProgress();
}

void UHackUIComponent::DisplayHackProgress()
{
    if (!HackComponent || !GEngine) return;

    int32 CurrentCounters = HackComponent->GetCurrentCounters();
    int32 RequiredCounters = HackComponent->GetRequiredCounters();
    int32 UnblockedHits = HackComponent->GetUnblockedHits();
    bool bIsAvailable = HackComponent->IsHackAvailable();

    // Build progress string with visual indicators
    FString ProgressString = TEXT("HACK: ");

    // Show counter progress as arrows
    for (int32 i = 0; i < RequiredCounters; i++)
    {
        if (i < CurrentCounters)
        {
            // Filled arrow (cyan)
            ProgressString += TEXT("[>] ");
        }
        else
        {
            // Empty arrow
            ProgressString += TEXT("[ ] ");
        }
    }

    // Add numeric display
    ProgressString += FString::Printf(TEXT(" (%d/%d)"), CurrentCounters, RequiredCounters);

    // Add warning if close to reset
    if (UnblockedHits > 0)
    {
        ProgressString += FString::Printf(TEXT(" | WARNING: %d unblocked hit(s)!"), UnblockedHits);
    }

    // Display availability
    if (bIsAvailable)
    {
        ProgressString += TEXT(" | READY! Press Q");
    }

    // Set color based on state
    FColor DisplayColor = FColor::White;
    if (bIsAvailable)
    {
        DisplayColor = FColor::Cyan;
    }
    else if (UnblockedHits > 0)
    {
        DisplayColor = FColor::Yellow;
    }

    // Display on screen
    GEngine->AddOnScreenDebugMessage(
        100, // Key for this message
        0.2f, // Duration
        DisplayColor,
        ProgressString,
        true, // Newer on top
        FVector2D(1.2f, 1.2f) // Text scale
    );
}

void UHackUIComponent::OnCounterProgressChanged(int32 CurrentCounters)
{
    LastCounterCount = CurrentCounters;

    // Show feedback message
    if (CurrentCounters > 0)
    {
        FString Message = FString::Printf(TEXT("Counter %d/%d!"),
            CurrentCounters, HackComponent->GetRequiredCounters());

        GEngine->AddOnScreenDebugMessage(
            101,
            2.0f,
            FColor::Green,
            Message,
            true,
            FVector2D(1.5f, 1.5f)
        );
    }
}

void UHackUIComponent::OnHackAvailable()
{
    bWasAvailable = true;

    GEngine->AddOnScreenDebugMessage(
        102,
        3.0f,
        FColor::Cyan,
        TEXT("HACK ATTACK AVAILABLE!"),
        true,
        FVector2D(2.0f, 2.0f)
    );
}

void UHackUIComponent::OnHackExecuted()
{
    bWasAvailable = false;
    LastCounterCount = 0;

    GEngine->AddOnScreenDebugMessage(
        103,
        3.0f,
        FColor::Magenta,
        TEXT("HACK ATTACK EXECUTED!"),
        true,
        FVector2D(2.0f, 2.0f)
    );
}

void UHackUIComponent::OnCountersReset()
{
    LastCounterCount = 0;
    bWasAvailable = false;

    GEngine->AddOnScreenDebugMessage(
        104,
        3.0f,
        FColor::Red,
        TEXT("COUNTERS RESET!"),
        true,
        FVector2D(1.5f, 1.5f)
    );
}