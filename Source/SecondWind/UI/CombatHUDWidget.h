#pragma once

#include "CoreMinimal.h"
#include "Widgets/SCompoundWidget.h"
#include "Widgets/DeclarativeSyntaxSupport.h"

class SProgressBar;
class STextBlock;
class SOverlay;
class SVerticalBox;
class SHorizontalBox;
class SBorder;
class SImage;

class SECONDWIND_API SCombatHUDWidget : public SCompoundWidget
{
public:
    SLATE_BEGIN_ARGS(SCombatHUDWidget) {}
    SLATE_END_ARGS()

    void Construct(const FArguments& InArgs);

    void UpdatePlayerHealth(float Health, float MaxHealth, int32 CurrentPhase, int32 MaxPhases);
    void UpdateEnemyHealth(float Health, float MaxHealth, int32 CurrentPhase, int32 MaxPhases);
    void UpdateFragmentCount(int32 Fragments);
    void UpdateHackProgress(int32 CurrentCounters, int32 RequiredCounters, int32 UnblockedHitCount = 0);
    void UpdateCounterIndicator(bool bInWindow, bool bCanPerformCounter);
    void ShowDamageNumber(float Damage, bool bIsPlayer);
    void SetEnemyName(const FString& Name);
    void ShowEnemyHealthBar(bool bShow);
    void UpdateGamestyleDisplay(const FString& GamestyleName, int32 StackCount);

    virtual void Tick(const FGeometry& AllottedGeometry, const double InCurrentTime, const float InDeltaTime) override;

private:
    TSharedPtr<SProgressBar> PlayerHealthBar;
    TSharedPtr<SProgressBar> EnemyHealthBar;
    TSharedPtr<STextBlock> PlayerHealthText;
    TSharedPtr<STextBlock> EnemyHealthText;
    TSharedPtr<STextBlock> EnemyNameText;
    TSharedPtr<SHorizontalBox> PlayerPhaseIndicators;
    TSharedPtr<SHorizontalBox> EnemyPhaseIndicators;
    TSharedPtr<STextBlock> FragmentCountText;
    TSharedPtr<SOverlay> EnemyHealthContainer;
    TSharedPtr<SVerticalBox> DamageNumberContainer;

    struct FDamageNumber
    {
        float Damage;
        bool bIsPlayer;
        float TimeRemaining;
        float StartY;
    };

    TArray<FDamageNumber> ActiveDamageNumbers;

    void CreatePhaseIndicator(TSharedPtr<SHorizontalBox> Container, int32 PhaseIndex, bool bIsActive);
    void UpdatePhaseIndicators(TSharedPtr<SHorizontalBox> Container, int32 CurrentPhase, int32 MaxPhases);
    FSlateColor GetHealthBarColor(float HealthPercent) const;

    float PlayerCurrentHealth;
    float PlayerMaxHealth;
    int32 PlayerCurrentPhase;
    int32 PlayerMaxPhases;

    float EnemyCurrentHealth;
    float EnemyMaxHealth;
    int32 EnemyCurrentPhase;
    int32 EnemyMaxPhases;

    int32 CurrentFragments;
    int32 CurrentHackCounters;
    int32 RequiredHackCounters;
    int32 UnblockedHits;
    bool bInCounterWindow;
    bool bCanCounter;
    bool bHackReady;
    bool bShowRedWarning;
    float RedPulseTime;  // For animating the red warning

    // Counter symbols UI
    TSharedPtr<SVerticalBox> CounterSymbolContainer;
    TArray<TSharedPtr<SBorder>> CounterSymbols;
    TSharedPtr<STextBlock> HackReadyText;
    void UpdateCounterSymbols();
    FSlateColor GetCounterSymbolColor(int32 SymbolIndex) const;

    // Gamestyle UI
    TSharedPtr<STextBlock> GamestyleNameText;
    TSharedPtr<STextBlock> GamestyleStackText;
    FString CurrentGamestyle;
    int32 CurrentStacks;
};