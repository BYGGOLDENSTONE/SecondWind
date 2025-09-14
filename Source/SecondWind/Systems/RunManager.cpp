#include "RunManager.h"
#include "FragmentSystem.h"
#include "MemorySystem.h"
#include "Engine/World.h"
#include "Engine/GameInstance.h"
#include "Kismet/GameplayStatics.h"
#include "SecondWind/SecondWindCharacter.h"
#include "SecondWind/Components/HealthComponent.h"

void URunManager::Initialize(FSubsystemCollectionBase& Collection)
{
    Super::Initialize(Collection);

    CurrentRunNumber = 0;
    bRunActive = false;

    // Start first run automatically
    StartNewRun();

    UE_LOG(LogTemp, Warning, TEXT("RunManager initialized - Starting first run"));
}

void URunManager::Deinitialize()
{
    if (bRunActive)
    {
        EndCurrentRun(false);
    }

    Super::Deinitialize();
}

void URunManager::StartNewRun()
{
    if (bRunActive)
    {
        EndCurrentRun(false);
    }

    CurrentRunNumber++;
    bRunActive = true;

    // Reset player but keep fragments and memories
    if (UFragmentSystem* FragmentSystem = GetGameInstance()->GetSubsystem<UFragmentSystem>())
    {
        FragmentSystem->ResetForNewRun();
    }

    if (UMemorySystem* MemorySystem = GetGameInstance()->GetSubsystem<UMemorySystem>())
    {
        MemorySystem->ResetForNewRun();
    }

    ResetPlayerToHub();

    OnRunStarted.Broadcast(CurrentRunNumber);

    UE_LOG(LogTemp, Warning, TEXT("Run %d started! Fragments and memories preserved from previous run."),
        CurrentRunNumber);
}

void URunManager::EndCurrentRun(bool bCompleted)
{
    if (!bRunActive)
    {
        return;
    }

    bRunActive = false;

    OnRunEnded.Broadcast(CurrentRunNumber, bCompleted);

    if (bCompleted)
    {
        UE_LOG(LogTemp, Warning, TEXT("Run %d completed successfully!"), CurrentRunNumber);
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("Run %d ended (death/quit)"), CurrentRunNumber);
    }
}

void URunManager::OnPlayerDeath()
{
    if (!bRunActive)
    {
        return;
    }

    UE_LOG(LogTemp, Warning, TEXT("Player died! Ending run %d..."), CurrentRunNumber);

    // End current run
    EndCurrentRun(false);

    // Start new run after a delay
    FTimerHandle NewRunTimer;
    GetWorld()->GetTimerManager().SetTimer(NewRunTimer, [this]()
    {
        StartNewRun();
    }, 3.0f, false);
}

void URunManager::ResetPlayerToHub()
{
    // Reset player position to starting hub
    if (ASecondWindCharacter* Player = Cast<ASecondWindCharacter>(
        UGameplayStatics::GetPlayerCharacter(GetWorld(), 0)))
    {
        // Reset player health
        if (UHealthComponent* HealthComp = Player->FindComponentByClass<UHealthComponent>())
        {
            HealthComp->ResetHealth();
            HealthComp->HealToFull();
        }

        // Teleport to starting position (0,0,0 or wherever the hub is)
        Player->SetActorLocation(FVector(0, 0, 100));
        Player->SetActorRotation(FRotator(0, 0, 0));

        // Apply memory effects
        if (UMemorySystem* MemorySystem = GetGameInstance()->GetSubsystem<UMemorySystem>())
        {
            MemorySystem->ApplyMemoryEffects(Player);
        }

        UE_LOG(LogTemp, Warning, TEXT("Player reset to Starting Hub for new run"));
    }
}