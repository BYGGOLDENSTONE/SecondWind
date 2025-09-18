#include "GamestyleSystem.h"
#include "SecondWind/SecondWindCharacter.h"
#include "SecondWind/Components/HealthComponent.h"
#include "SecondWind/Components/CombatComponent.h"
#include "SecondWind/Components/BlockingComponent.h"
#include "SecondWind/Components/DodgeComponent.h"
#include "SecondWind/Components/HackComponent.h"
#include "SecondWind/UI/SecondWindHUD.h"
#include "GameFramework/PlayerController.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"

void UGamestyleSystem::Initialize(FSubsystemCollectionBase& Collection)
{
    Super::Initialize(Collection);
    InitializeGamestyleDatabase();
    ResetForNewRun();

    UE_LOG(LogTemp, Log, TEXT("GamestyleSystem initialized"));
}

void UGamestyleSystem::Deinitialize()
{
    Super::Deinitialize();
}

void UGamestyleSystem::InitializeGamestyleDatabase()
{
    FGamestyleData Defense;
    Defense.Type = EGamestyleType::Defense;
    Defense.DisplayName = "Defense";
    Defense.Description = "+20 Max HP with smart healing per kill";
    Defense.StackCount = 0;
    GamestyleDatabase.Add(EGamestyleType::Defense, Defense);

    FGamestyleData Offense;
    Offense.Type = EGamestyleType::Offense;
    Offense.DisplayName = "Offense";
    Offense.Description = "+10 attack damage per kill";
    Offense.StackCount = 0;
    GamestyleDatabase.Add(EGamestyleType::Offense, Offense);

    FGamestyleData Mobility;
    Mobility.Type = EGamestyleType::Mobility;
    Mobility.DisplayName = "Mobility";
    Mobility.Description = "-0.1s ability casting time per kill";
    Mobility.StackCount = 0;
    GamestyleDatabase.Add(EGamestyleType::Mobility, Mobility);

    FGamestyleData Utility;
    Utility.Type = EGamestyleType::Utility;
    Utility.DisplayName = "Utility";
    Utility.Description = "+0.1s counter window duration per kill";
    Utility.StackCount = 0;
    GamestyleDatabase.Add(EGamestyleType::Utility, Utility);

    FGamestyleData Technomancer;
    Technomancer.Type = EGamestyleType::Technomancer;
    Technomancer.DisplayName = "Technomancer";
    Technomancer.Description = "-1 hack counter requirement per kill";
    Technomancer.StackCount = 0;
    GamestyleDatabase.Add(EGamestyleType::Technomancer, Technomancer);
}

void UGamestyleSystem::AssignRandomGamestyle()
{
    TArray<EGamestyleType> AllStyles = {
        EGamestyleType::Defense,
        EGamestyleType::Offense,
        EGamestyleType::Mobility,
        EGamestyleType::Utility,
        EGamestyleType::Technomancer
    };

    int32 RandomIndex = FMath::RandRange(0, AllStyles.Num() - 1);
    CurrentGamestyle = AllStyles[RandomIndex];
    CurrentStacks = 0;

    FGamestyleData* Data = GamestyleDatabase.Find(CurrentGamestyle);
    if (Data)
    {
        OnGamestyleAssigned.Broadcast(CurrentGamestyle, Data->DisplayName);

        UE_LOG(LogTemp, Warning, TEXT(""));
        UE_LOG(LogTemp, Warning, TEXT("========================================"));
        UE_LOG(LogTemp, Warning, TEXT("NEW RUN - GAMESTYLE ASSIGNED"));
        UE_LOG(LogTemp, Warning, TEXT("Gamestyle: %s"), *Data->DisplayName);
        UE_LOG(LogTemp, Warning, TEXT("Description: %s"), *Data->Description);
        UE_LOG(LogTemp, Warning, TEXT("========================================"));
        UE_LOG(LogTemp, Warning, TEXT(""));
    }
}

void UGamestyleSystem::AddGamestyleStack()
{
    CurrentStacks++;

    UE_LOG(LogTemp, Warning, TEXT(""));
    UE_LOG(LogTemp, Warning, TEXT("========================================"));
    UE_LOG(LogTemp, Warning, TEXT("GAMESTYLE STACK ADDED!"));
    UE_LOG(LogTemp, Warning, TEXT("Gamestyle: %s"), *GetCurrentGamestyleData().DisplayName);
    UE_LOG(LogTemp, Warning, TEXT("New Stack Count: %d"), CurrentStacks);

    if (UWorld* World = GetWorld())
    {
        if (ASecondWindCharacter* Player = Cast<ASecondWindCharacter>(UGameplayStatics::GetPlayerCharacter(World, 0)))
        {
            ApplyGamestyleEffects(Player);
        }
    }

    OnGamestyleStackAdded.Broadcast(CurrentStacks);
    UE_LOG(LogTemp, Warning, TEXT("========================================"));
    UE_LOG(LogTemp, Warning, TEXT(""));
}

FGamestyleData UGamestyleSystem::GetCurrentGamestyleData() const
{
    if (const FGamestyleData* Data = GamestyleDatabase.Find(CurrentGamestyle))
    {
        FGamestyleData Result = *Data;
        Result.StackCount = CurrentStacks;
        return Result;
    }
    return FGamestyleData();
}

void UGamestyleSystem::ApplyGamestyleEffects(AActor* Target)
{
    if (!Target || CurrentStacks == 0) return;

    ASecondWindCharacter* Character = Cast<ASecondWindCharacter>(Target);
    if (!Character) return;

    switch (CurrentGamestyle)
    {
    case EGamestyleType::Defense:
        {
            if (UHealthComponent* HealthComp = Character->FindComponentByClass<UHealthComponent>())
            {
                float CurrentHealth = HealthComp->GetCurrentHealth();
                float MaxHealth = HealthComp->GetMaxHealth();
                float HealthPercentage = CurrentHealth / MaxHealth;

                // Increase max health by 20
                float NewMaxHealth = MaxHealth + 20.0f;
                HealthComp->SetMaxHealth(NewMaxHealth);

                // Smart healing: if at 60/100, becomes 80/120 (same percentage + 20 healing)
                float NewHealth = FMath::Min(CurrentHealth + 20.0f, NewMaxHealth);
                HealthComp->SetCurrentHealth(NewHealth);

                UE_LOG(LogTemp, Warning, TEXT("DEFENSE BONUS APPLIED!"));
                UE_LOG(LogTemp, Warning, TEXT("  Max HP: %.0f -> %.0f (+20)"), MaxHealth, NewMaxHealth);
                UE_LOG(LogTemp, Warning, TEXT("  Current HP: %.0f -> %.0f (+20 heal)"), CurrentHealth, NewHealth);
                UE_LOG(LogTemp, Warning, TEXT("  Total Defense Bonus: +%.0f Max HP"), GetDefenseHealthBonus());
            }
        }
        break;

    case EGamestyleType::Offense:
        // Damage bonus handled in GetOffenseDamageBonus()
        UE_LOG(LogTemp, Warning, TEXT("OFFENSE BONUS ACTIVE!"));
        UE_LOG(LogTemp, Warning, TEXT("  Stack %d: Total +%.0f damage on all attacks"), CurrentStacks, GetOffenseDamageBonus());
        break;

    case EGamestyleType::Mobility:
        // Applied dynamically in ability components
        UE_LOG(LogTemp, Warning, TEXT("MOBILITY BONUS ACTIVE!"));
        UE_LOG(LogTemp, Warning, TEXT("  Stack %d: Total -%.1fs dodge cast time"), CurrentStacks, GetMobilitySpeedBonus());
        break;

    case EGamestyleType::Utility:
        // Applied dynamically in blocking component
        UE_LOG(LogTemp, Warning, TEXT("UTILITY BONUS ACTIVE!"));
        UE_LOG(LogTemp, Warning, TEXT("  Stack %d: Total +%.1fs counter window duration"), CurrentStacks, GetUtilityCounterBonus());
        break;

    case EGamestyleType::Technomancer:
        // Applied dynamically in hack component - need to update UI
        UE_LOG(LogTemp, Warning, TEXT("TECHNOMANCER BONUS ACTIVE!"));
        UE_LOG(LogTemp, Warning, TEXT("  Stack %d: Hack requirement %d -> %d"),
            CurrentStacks, 6, FMath::Max(1, 6 - GetTechnomancerHackReduction()));

        // Force HUD update for new hack requirement
        if (UHackComponent* HackComp = Character->FindComponentByClass<UHackComponent>())
        {
            // Trigger a HUD update with current counters and new requirement
            if (UWorld* World = GetWorld())
            {
                if (APlayerController* PC = World->GetFirstPlayerController())
                {
                    if (ASecondWindHUD* HUD = Cast<ASecondWindHUD>(PC->GetHUD()))
                    {
                        HUD->UpdateHackProgress(HackComp->GetCurrentCounters(), HackComp->GetRequiredCounters());
                        UE_LOG(LogTemp, Warning, TEXT("  Updated HUD to show %d required counters"), HackComp->GetRequiredCounters());
                    }
                }
            }
        }
        break;
    }
}

void UGamestyleSystem::ResetForNewRun()
{
    CurrentStacks = 0;
    AssignRandomGamestyle();
}

float UGamestyleSystem::GetOffenseDamageBonus() const
{
    if (CurrentGamestyle == EGamestyleType::Offense)
    {
        return CurrentStacks * 10.0f;
    }
    return 0.0f;
}

float UGamestyleSystem::GetDefenseHealthBonus() const
{
    if (CurrentGamestyle == EGamestyleType::Defense)
    {
        return CurrentStacks * 20.0f;
    }
    return 0.0f;
}

float UGamestyleSystem::GetMobilitySpeedBonus() const
{
    if (CurrentGamestyle == EGamestyleType::Mobility)
    {
        return CurrentStacks * 0.1f;
    }
    return 0.0f;
}

float UGamestyleSystem::GetUtilityCounterBonus() const
{
    if (CurrentGamestyle == EGamestyleType::Utility)
    {
        return CurrentStacks * 0.1f;
    }
    return 0.0f;
}

int32 UGamestyleSystem::GetTechnomancerHackReduction() const
{
    if (CurrentGamestyle == EGamestyleType::Technomancer)
    {
        return CurrentStacks;
    }
    return 0;
}