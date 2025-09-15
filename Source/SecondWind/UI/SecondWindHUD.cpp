#include "SecondWindHUD.h"
#include "CombatHUDWidget.h"
#include "Engine/Canvas.h"
#include "Engine/World.h"
#include "GameFramework/PlayerController.h"
#include "SecondWind/SecondWindCharacter.h"
#include "SecondWind/Components/HealthComponent.h"
#include "SecondWind/Components/FragmentComponent.h"
#include "SecondWind/Components/HackComponent.h"
#include "SecondWind/Components/BlockingComponent.h"
#include "SecondWind/Components/CameraLockOnComponent.h"
#include "Widgets/SWeakWidget.h"
#include "Engine/Engine.h"
#include "TimerManager.h"

ASecondWindHUD::ASecondWindHUD()
{
    PrimaryActorTick.bCanEverTick = false;
}

void ASecondWindHUD::BeginPlay()
{
    Super::BeginPlay();

    InitializeCombatHUD();

    // Set default values first
    if (CombatHUDWidget.IsValid())
    {
        // Set initial values to expected defaults
        CombatHUDWidget->UpdatePlayerHealth(100.0f, 100.0f, 1, 2);
        CombatHUDWidget->UpdateEnemyHealth(100.0f, 100.0f, 1, 1);
        CombatHUDWidget->UpdateHackProgress(0, 6);
        CombatHUDWidget->UpdateFragmentCount(0);
        CombatHUDWidget->UpdateCounterIndicator(false, false);
        CombatHUDWidget->ShowEnemyHealthBar(false);
    }

    // Try to bind immediately
    BindToPlayer();

    // If binding failed, try again in next tick
    if (!PlayerCharacter && GetWorld())
    {
        GetWorld()->GetTimerManager().SetTimerForNextTick([this]()
        {
            BindToPlayer();
        });
    }
}

void ASecondWindHUD::DrawHUD()
{
    Super::DrawHUD();
}

void ASecondWindHUD::InitializeCombatHUD()
{
    if (!GEngine || !GEngine->GameViewport)
    {
        return;
    }

    CombatHUDWidget = SNew(SCombatHUDWidget);

    GEngine->GameViewport->AddViewportWidgetContent(
        SAssignNew(CombatHUDContainer, SWeakWidget)
        .PossiblyNullContent(CombatHUDWidget.ToSharedRef()),
        0
    );
}

void ASecondWindHUD::BindToPlayer()
{
    if (APlayerController* PC = GetOwningPlayerController())
    {
        if (APawn* Pawn = PC->GetPawn())
        {
            PlayerCharacter = Cast<ASecondWindCharacter>(Pawn);
            if (PlayerCharacter)
            {
                PlayerHealthComponent = PlayerCharacter->FindComponentByClass<UHealthComponent>();
                FragmentComponent = PlayerCharacter->FindComponentByClass<UFragmentComponent>();
                HackComponent = PlayerCharacter->FindComponentByClass<UHackComponent>();
                BlockingComponent = PlayerCharacter->FindComponentByClass<UBlockingComponent>();

                if (PlayerHealthComponent)
                {
                    UpdatePlayerHealth(
                        PlayerHealthComponent->GetCurrentHealth(),
                        PlayerHealthComponent->GetMaxHealth(),
                        PlayerHealthComponent->GetCurrentPhase(),
                        PlayerHealthComponent->GetMaxPhases()
                    );
                }

                if (FragmentComponent)
                {
                    UpdateFragmentCount(FragmentComponent->GetFragmentCount());
                }

                if (HackComponent)
                {
                    UpdateHackProgress(
                        HackComponent->GetCurrentCounters(),
                        HackComponent->GetRequiredCounters(),
                        HackComponent->GetUnblockedHits()
                    );
                }

                if (UCameraLockOnComponent* LockOn = PlayerCharacter->FindComponentByClass<UCameraLockOnComponent>())
                {
                    if (AActor* Target = LockOn->GetCurrentTarget())
                    {
                        BindToEnemy();
                    }
                }
            }
        }
    }
}

void ASecondWindHUD::BindToEnemy()
{
    if (!PlayerCharacter)
    {
        return;
    }

    if (UCameraLockOnComponent* LockOn = PlayerCharacter->FindComponentByClass<UCameraLockOnComponent>())
    {
        if (AActor* Target = LockOn->GetCurrentTarget())
        {
            CurrentEnemy = Cast<ACharacter>(Target);
            if (CurrentEnemy)
            {
                EnemyHealthComponent = CurrentEnemy->FindComponentByClass<UHealthComponent>();

                if (EnemyHealthComponent)
                {
                    ShowEnemyHealthBar(true);
                    UpdateEnemyHealth(
                        EnemyHealthComponent->GetCurrentHealth(),
                        EnemyHealthComponent->GetMaxHealth(),
                        EnemyHealthComponent->GetCurrentPhase(),
                        EnemyHealthComponent->GetMaxPhases()
                    );

                    FString EnemyName = "Training Dummy";
                    if (CurrentEnemy->GetClass()->GetName().Contains("ArenaEnemy"))
                    {
                        EnemyName = FString::Printf(TEXT("Arena Enemy Phase %d"),
                            EnemyHealthComponent->GetCurrentPhase());
                    }
                    SetEnemyName(EnemyName);
                }
            }
        }
        else
        {
            ShowEnemyHealthBar(false);
        }
    }
}

void ASecondWindHUD::UpdatePlayerHealth(float Health, float MaxHealth, int32 CurrentPhase, int32 MaxPhases)
{
    if (CombatHUDWidget.IsValid())
    {
        CombatHUDWidget->UpdatePlayerHealth(Health, MaxHealth, CurrentPhase, MaxPhases);
    }
}

void ASecondWindHUD::UpdateEnemyHealth(float Health, float MaxHealth, int32 CurrentPhase, int32 MaxPhases)
{
    if (CombatHUDWidget.IsValid())
    {
        CombatHUDWidget->UpdateEnemyHealth(Health, MaxHealth, CurrentPhase, MaxPhases);
    }
}

void ASecondWindHUD::UpdateFragmentCount(int32 Fragments)
{
    if (CombatHUDWidget.IsValid())
    {
        CombatHUDWidget->UpdateFragmentCount(Fragments);
    }
}

void ASecondWindHUD::UpdateHackProgress(int32 CurrentCounters, int32 RequiredCounters, int32 UnblockedHits)
{
    if (CombatHUDWidget.IsValid())
    {
        CombatHUDWidget->UpdateHackProgress(CurrentCounters, RequiredCounters, UnblockedHits);
    }
}

void ASecondWindHUD::UpdateCounterIndicator(bool bInWindow, bool bCanPerformCounter)
{
    if (CombatHUDWidget.IsValid())
    {
        CombatHUDWidget->UpdateCounterIndicator(bInWindow, bCanPerformCounter);
    }
}

void ASecondWindHUD::ShowDamageNumber(float Damage, bool bIsPlayer)
{
    if (CombatHUDWidget.IsValid())
    {
        CombatHUDWidget->ShowDamageNumber(Damage, bIsPlayer);
    }
}

void ASecondWindHUD::SetEnemyName(const FString& Name)
{
    if (CombatHUDWidget.IsValid())
    {
        CombatHUDWidget->SetEnemyName(Name);
    }
}

void ASecondWindHUD::ShowEnemyHealthBar(bool bShow)
{
    if (CombatHUDWidget.IsValid())
    {
        CombatHUDWidget->ShowEnemyHealthBar(bShow);
    }
}