#include "HackComponent.h"
#include "GameFramework/Character.h"
#include "Components/CapsuleComponent.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"
#include "../Actors/TrainingDummy.h"
#include "../Actors/ArenaEnemy.h"
#include "HealthComponent.h"
#include "Kismet/GameplayStatics.h"
#include "SecondWind/UI/SecondWindHUD.h"
#include "GameFramework/PlayerController.h"
#include "SecondWind/Systems/GamestyleSystem.h"
#include "Engine/GameInstance.h"

UHackComponent::UHackComponent()
{
    PrimaryComponentTick.bCanEverTick = true;
    PrimaryComponentTick.TickInterval = 0.0f;
}

void UHackComponent::BeginPlay()
{
    Super::BeginPlay();
    CounterAttacks = 0;
    UnblockedHits = 0;
    bIsExecutingHack = false;

    // Notify HUD of initial state
    if (UWorld* World = GetWorld())
    {
        if (APlayerController* PC = World->GetFirstPlayerController())
        {
            if (ASecondWindHUD* HUD = Cast<ASecondWindHUD>(PC->GetHUD()))
            {
                HUD->UpdateHackProgress(CounterAttacks, GetRequiredCounters());
            }
        }
    }
}

void UHackComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    // Handle hack execution timing
    if (bIsExecutingHack)
    {
        HackExecutionTimer -= DeltaTime;
        if (HackExecutionTimer <= 0.0f)
        {
            bIsExecutingHack = false;
        }
    }
}

void UHackComponent::AddCounter()
{
    if (bIsExecutingHack) return;

    CounterAttacks++;
    OnCounterProgressChanged.Broadcast(CounterAttacks);

    UE_LOG(LogTemp, Warning, TEXT("HackComponent: Counter added. Current: %d/%d"), CounterAttacks, GetRequiredCounters());

    // Update HUD
    if (UWorld* World = GetWorld())
    {
        if (APlayerController* PC = World->GetFirstPlayerController())
        {
            if (ASecondWindHUD* HUD = Cast<ASecondWindHUD>(PC->GetHUD()))
            {
                HUD->UpdateHackProgress(CounterAttacks, GetRequiredCounters(), UnblockedHits);
            }
        }
    }

    // Check if hack is now available
    if (IsHackAvailable())
    {
        OnHackAvailable.Broadcast();

        // Log Technomancer bonus if active
        int32 EffectiveReq = GetRequiredCounters();
        if (EffectiveReq < RequiredCounters)
        {
            UE_LOG(LogTemp, Warning, TEXT(">>> TECHNOMANCER BONUS: HACK READY with only %d counters (normally %d)! <<<"),
                EffectiveReq, RequiredCounters);
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("HackComponent: HACK ATTACK AVAILABLE!"));
        }
    }
}

void UHackComponent::RegisterUnblockedHit()
{
    if (bIsExecutingHack) return;

    UnblockedHits++;
    UE_LOG(LogTemp, Warning, TEXT("HackComponent: Unblocked hit registered. Count: %d/%d"), UnblockedHits, UnblockedHitsToReset);

    // Update HUD to show warning state
    if (UWorld* World = GetWorld())
    {
        if (APlayerController* PC = World->GetFirstPlayerController())
        {
            if (ASecondWindHUD* HUD = Cast<ASecondWindHUD>(PC->GetHUD()))
            {
                HUD->UpdateHackProgress(CounterAttacks, GetRequiredCounters(), UnblockedHits);
            }
        }
    }

    // Check if we need to reset
    if (UnblockedHits >= UnblockedHitsToReset)
    {
        ResetCounters();
    }
}

void UHackComponent::ResetCounters()
{
    if (CounterAttacks > 0)
    {
        UE_LOG(LogTemp, Warning, TEXT("HackComponent: Counters RESET! Was %d"), CounterAttacks);
    }

    CounterAttacks = 0;
    UnblockedHits = 0;
    OnCountersReset.Broadcast();

    // Update HUD
    if (UWorld* World = GetWorld())
    {
        if (APlayerController* PC = World->GetFirstPlayerController())
        {
            if (ASecondWindHUD* HUD = Cast<ASecondWindHUD>(PC->GetHUD()))
            {
                HUD->UpdateHackProgress(CounterAttacks, GetRequiredCounters(), UnblockedHits);
            }
        }
    }
    OnCounterProgressChanged.Broadcast(CounterAttacks);
}

bool UHackComponent::TryExecuteHack()
{
    // Check if hack is available
    if (!IsHackAvailable() || bIsExecutingHack)
    {
        UE_LOG(LogTemp, Warning, TEXT("HackComponent: Cannot execute hack. Available: %s, Executing: %s"),
            IsHackAvailable() ? TEXT("Yes") : TEXT("No"),
            bIsExecutingHack ? TEXT("Yes") : TEXT("No"));
        return false;
    }

    // Find target
    AActor* Target = FindHackTarget();
    if (!Target)
    {
        UE_LOG(LogTemp, Warning, TEXT("HackComponent: No valid target for hack attack"));
        return false;
    }

    // Execute the hack
    ExecuteHack();
    ApplyHackEffects(Target);

    return true;
}

void UHackComponent::ExecuteHack()
{
    bIsExecutingHack = true;
    HackExecutionTimer = HackExecutionDuration;

    // Reset counters after using hack
    CounterAttacks = 0;
    UnblockedHits = 0;

    OnHackExecuted.Broadcast();
    OnCounterProgressChanged.Broadcast(CounterAttacks);

    // Update HUD
    if (UWorld* World = GetWorld())
    {
        if (APlayerController* PC = World->GetFirstPlayerController())
        {
            if (ASecondWindHUD* HUD = Cast<ASecondWindHUD>(PC->GetHUD()))
            {
                HUD->UpdateHackProgress(CounterAttacks, GetRequiredCounters(), UnblockedHits);
            }
        }
    }

    UE_LOG(LogTemp, Warning, TEXT("HackComponent: HACK ATTACK EXECUTED!"));

    // Visual feedback
    if (ACharacter* OwnerCharacter = Cast<ACharacter>(GetOwner()))
    {
        // Draw debug sphere to show hack range
        DrawDebugSphere(
            GetWorld(),
            OwnerCharacter->GetActorLocation(),
            HackRange,
            32,
            FColor::Cyan,
            false,
            1.0f,
            0,
            2.0f
        );
    }
}

AActor* UHackComponent::FindHackTarget() const
{
    if (!GetOwner()) return nullptr;

    ACharacter* OwnerCharacter = Cast<ACharacter>(GetOwner());
    if (!OwnerCharacter) return nullptr;

    // Find all potential targets in range
    TArray<AActor*> FoundActors;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), ATrainingDummy::StaticClass(), FoundActors);

    // Also search for arena enemies
    TArray<AActor*> ArenaEnemies;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), AArenaEnemy::StaticClass(), ArenaEnemies);
    FoundActors.Append(ArenaEnemies);

    AActor* ClosestTarget = nullptr;
    float ClosestDistance = HackRange;

    for (AActor* Actor : FoundActors)
    {
        if (!Actor || Actor == GetOwner()) continue;

        float Distance = FVector::Dist(OwnerCharacter->GetActorLocation(), Actor->GetActorLocation());
        if (Distance <= HackRange && Distance < ClosestDistance)
        {
            // Check if target has health component (is damageable)
            if (Actor->FindComponentByClass<UHealthComponent>())
            {
                ClosestTarget = Actor;
                ClosestDistance = Distance;
            }
        }
    }

    return ClosestTarget;
}

void UHackComponent::ApplyHackEffects(AActor* Target)
{
    if (!Target) return;

    // Apply damage using the Unreal damage system
    UGameplayStatics::ApplyDamage(
        Target,
        HackDamage,
        nullptr, // No controller
        GetOwner(), // Damage causer is the owner of this component
        UDamageType::StaticClass()
    );

    UE_LOG(LogTemp, Warning, TEXT("HackComponent: Applied %f hack damage to %s"), HackDamage, *Target->GetName());

    // Apply stun effect (would need to be implemented in enemy AI later)
    // For now, we'll just log it
    UE_LOG(LogTemp, Warning, TEXT("HackComponent: Applied %f second stun to %s"), HackStunDuration, *Target->GetName());

    // Visual feedback on target
    DrawDebugSphere(
        GetWorld(),
        Target->GetActorLocation(),
        100.0f,
        16,
        FColor::Red,
        false,
        HackStunDuration,
        0,
        3.0f
    );

    // Draw line from player to target
    if (ACharacter* OwnerCharacter = Cast<ACharacter>(GetOwner()))
    {
        DrawDebugLine(
            GetWorld(),
            OwnerCharacter->GetActorLocation() + FVector(0, 0, 50),
            Target->GetActorLocation() + FVector(0, 0, 50),
            FColor::Cyan,
            false,
            1.0f,
            0,
            5.0f
        );
    }
}

bool UHackComponent::IsHackAvailable() const
{
    return CounterAttacks >= GetRequiredCounters();
}

int32 UHackComponent::GetRequiredCounters() const
{
    int32 EffectiveRequirement = RequiredCounters;

    // Apply Technomancer gamestyle reduction
    if (UWorld* World = GetWorld())
    {
        if (UGameInstance* GameInstance = World->GetGameInstance())
        {
            if (UGamestyleSystem* GamestyleSystem = GameInstance->GetSubsystem<UGamestyleSystem>())
            {
                int32 TechnomancerReduction = GamestyleSystem->GetTechnomancerHackReduction();
                EffectiveRequirement = FMath::Max(1, RequiredCounters - TechnomancerReduction);
            }
        }
    }

    return EffectiveRequirement;
}