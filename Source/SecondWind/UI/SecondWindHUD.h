#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "SecondWindHUD.generated.h"

class SCombatHUDWidget;
class UHealthComponent;
class UFragmentComponent;
class UHackComponent;
class UBlockingComponent;

UCLASS()
class SECONDWIND_API ASecondWindHUD : public AHUD
{
    GENERATED_BODY()

public:
    ASecondWindHUD();

protected:
    virtual void BeginPlay() override;
    virtual void DrawHUD() override;

public:
    void InitializeCombatHUD();
    void UpdatePlayerHealth(float Health, float MaxHealth, int32 CurrentPhase, int32 MaxPhases);
    void UpdateEnemyHealth(float Health, float MaxHealth, int32 CurrentPhase, int32 MaxPhases);
    void UpdateFragmentCount(int32 Fragments);
    void UpdateHackProgress(int32 CurrentCounters, int32 RequiredCounters, int32 UnblockedHits = 0);
    void UpdateCounterIndicator(bool bInWindow, bool bCanPerformCounter);
    void ShowDamageNumber(float Damage, bool bIsPlayer);
    void SetEnemyName(const FString& Name);
    void ShowEnemyHealthBar(bool bShow);
    void BindToEnemy();

private:
    TSharedPtr<SCombatHUDWidget> CombatHUDWidget;
    TSharedPtr<SWidget> CombatHUDContainer;

    void BindToPlayer();

    UPROPERTY()
    class ASecondWindCharacter* PlayerCharacter;

    UPROPERTY()
    class ACharacter* CurrentEnemy;

    UPROPERTY()
    UHealthComponent* PlayerHealthComponent;

    UPROPERTY()
    UHealthComponent* EnemyHealthComponent;

    UPROPERTY()
    UFragmentComponent* FragmentComponent;

    UPROPERTY()
    UHackComponent* HackComponent;

    UPROPERTY()
    UBlockingComponent* BlockingComponent;
};