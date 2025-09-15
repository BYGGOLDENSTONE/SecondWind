#include "RunManager.h"
#include "FragmentSystem.h"
#include "MemorySystem.h"
#include "Engine/World.h"
#include "Engine/GameInstance.h"
#include "Kismet/GameplayStatics.h"
#include "SecondWind/SecondWindCharacter.h"
#include "SecondWind/Components/HealthComponent.h"
#include "SecondWind/Actors/LevelLayoutManager.h"
#include "SecondWind/Actors/ArenaZone.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/PlayerStart.h"

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
        // First, reset health BEFORE teleporting
        if (UHealthComponent* HealthComp = Player->FindComponentByClass<UHealthComponent>())
        {
            HealthComp->ResetHealth();
            HealthComp->HealToFull();
            UE_LOG(LogTemp, Warning, TEXT("Player health reset: %f/%f"),
                HealthComp->GetCurrentHealth(), HealthComp->GetMaxHealth());
        }

        // Re-enable player input and movement
        if (APlayerController* PC = Cast<APlayerController>(Player->GetController()))
        {
            Player->EnableInput(PC);
        }

        if (UCharacterMovementComponent* Movement = Player->GetCharacterMovement())
        {
            Movement->SetMovementMode(MOVE_Walking);
            UE_LOG(LogTemp, Warning, TEXT("Player movement re-enabled"));
        }

        // Find the proper spawn location
        FVector SpawnLocation = FVector(0, 0, 100); // Default fallback
        FRotator SpawnRotation = FRotator(0, 0, 0);

        // PRIORITY 1: Try to find a PlayerStart (this is the intended spawn point)
        TArray<AActor*> PlayerStarts;
        UGameplayStatics::GetAllActorsOfClass(GetWorld(), APlayerStart::StaticClass(), PlayerStarts);
        if (PlayerStarts.Num() > 0)
        {
            SpawnLocation = PlayerStarts[0]->GetActorLocation();
            SpawnRotation = PlayerStarts[0]->GetActorRotation();
            UE_LOG(LogTemp, Warning, TEXT("Using PlayerStart at %s"),
                *SpawnLocation.ToString());
        }
        else
        {
            // PRIORITY 2: If no PlayerStart, try to find Zone 0 center as fallback
            TArray<AActor*> FoundManagers;
            UGameplayStatics::GetAllActorsOfClass(GetWorld(), ALevelLayoutManager::StaticClass(), FoundManagers);
            if (FoundManagers.Num() > 0)
            {
                if (ALevelLayoutManager* LevelManager = Cast<ALevelLayoutManager>(FoundManagers[0]))
                {
                    if (AArenaZone* StartingHub = LevelManager->GetZone(0))
                    {
                        SpawnLocation = StartingHub->GetActorLocation();
                        SpawnRotation = StartingHub->GetActorRotation();
                        UE_LOG(LogTemp, Warning, TEXT("No PlayerStart found, using Starting Hub (Zone 0) center at %s"),
                            *SpawnLocation.ToString());
                    }
                }
            }

            // PRIORITY 3: Last resort fallback
            if (SpawnLocation == FVector(0, 0, 100))
            {
                UE_LOG(LogTemp, Warning, TEXT("No PlayerStart or Zone 0 found, using default spawn at %s"),
                    *SpawnLocation.ToString());
            }
        }

        // Teleport player to spawn location
        Player->SetActorLocation(SpawnLocation);
        Player->SetActorRotation(SpawnRotation);

        // Apply memory effects after respawn
        if (UMemorySystem* MemorySystem = GetGameInstance()->GetSubsystem<UMemorySystem>())
        {
            MemorySystem->ApplyMemoryEffects(Player);
        }

        UE_LOG(LogTemp, Warning, TEXT("Player reset to Starting Hub for new run at %s with %f health"),
            *SpawnLocation.ToString(),
            Player->FindComponentByClass<UHealthComponent>()->GetCurrentHealth());
    }
}