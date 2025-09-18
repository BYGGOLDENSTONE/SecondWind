#include "CombatHUDWidget.h"
#include "Widgets/SOverlay.h"
#include "Widgets/SBoxPanel.h"
#include "Widgets/Text/STextBlock.h"
#include "Widgets/Images/SImage.h"
#include "Widgets/Layout/SBorder.h"
#include "Widgets/Layout/SSpacer.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/Notifications/SProgressBar.h"
#include "Styling/CoreStyle.h"

void SCombatHUDWidget::Construct(const FArguments& InArgs)
{
    PlayerCurrentHealth = 100.0f;
    PlayerMaxHealth = 100.0f;
    PlayerCurrentPhase = 1;
    PlayerMaxPhases = 2;

    EnemyCurrentHealth = 100.0f;
    EnemyMaxHealth = 100.0f;
    EnemyCurrentPhase = 1;
    EnemyMaxPhases = 1;

    CurrentFragments = 0;
    CurrentHackCounters = 0;
    RequiredHackCounters = 6;
    bInCounterWindow = false;
    bCanCounter = false;
    bShowRedWarning = false;
    RedPulseTime = 0.0f;
    CurrentGamestyle = "None";
    CurrentStacks = 0;

    ChildSlot
    [
        SNew(SOverlay)

        + SOverlay::Slot()
        .HAlign(HAlign_Center)
        .VAlign(VAlign_Top)
        .Padding(0, 50, 0, 0)
        [
            SAssignNew(EnemyHealthContainer, SOverlay)
            + SOverlay::Slot()
            [
                SNew(SBox)
                .WidthOverride(600)
                .HeightOverride(80)
                [
                    SNew(SVerticalBox)

                    + SVerticalBox::Slot()
                    .AutoHeight()
                    .Padding(0, 0, 0, 5)
                    [
                        SAssignNew(EnemyNameText, STextBlock)
                        .Text(FText::FromString("Enemy"))
                        .Font(FCoreStyle::GetDefaultFontStyle("Bold", 16))
                        .ColorAndOpacity(FSlateColor(FLinearColor::White))
                        .Justification(ETextJustify::Center)
                    ]

                    + SVerticalBox::Slot()
                    .AutoHeight()
                    [
                        SNew(SBorder)
                        .BorderImage(FCoreStyle::Get().GetBrush("ToolPanel.GroupBorder"))
                        .BorderBackgroundColor(FSlateColor(FLinearColor(0.0f, 0.0f, 0.0f, 0.7f)))
                        .Padding(4)
                        [
                            SNew(SOverlay)

                            + SOverlay::Slot()
                            [
                                SNew(SBox)
                                .HeightOverride(20)
                                [
                                    SNew(SBorder)
                                    .BorderImage(FCoreStyle::Get().GetBrush("WhiteTexture"))
                                    .BorderBackgroundColor(FSlateColor(FLinearColor(0.2f, 0.2f, 0.2f, 1.0f)))
                                ]
                            ]

                            + SOverlay::Slot()
                            [
                                SAssignNew(EnemyHealthBar, SProgressBar)
                                .Percent(1.0f)
                                .BarFillType(EProgressBarFillType::LeftToRight)
                                .FillImage(FCoreStyle::Get().GetBrush("WhiteTexture"))
                                .FillColorAndOpacity(FSlateColor(FLinearColor(0.8f, 0.1f, 0.1f, 1.0f)))
                            ]

                            + SOverlay::Slot()
                            .HAlign(HAlign_Center)
                            .VAlign(VAlign_Center)
                            [
                                SAssignNew(EnemyHealthText, STextBlock)
                                .Text(FText::FromString("100 / 100"))
                                .Font(FCoreStyle::GetDefaultFontStyle("Regular", 14))
                                .ColorAndOpacity(FSlateColor(FLinearColor::White))
                            ]
                        ]
                    ]

                    + SVerticalBox::Slot()
                    .AutoHeight()
                    .Padding(0, 5, 0, 0)
                    [
                        SNew(SHorizontalBox)
                        + SHorizontalBox::Slot()
                        .HAlign(HAlign_Center)
                        [
                            SAssignNew(EnemyPhaseIndicators, SHorizontalBox)
                        ]
                    ]

                    + SVerticalBox::Slot()
                    .AutoHeight()
                    .Padding(0, 5, 0, 0)
                    [
                        SAssignNew(DamageNumberContainer, SVerticalBox)
                    ]
                ]
            ]
        ]

        + SOverlay::Slot()
        .HAlign(HAlign_Left)
        .VAlign(VAlign_Bottom)
        .Padding(50, 0, 0, 50)
        [
            SNew(SVerticalBox)

            // Counter symbols above health bar
            + SVerticalBox::Slot()
            .AutoHeight()
            .HAlign(HAlign_Left)  // Align left to prevent stretching
            .Padding(0, 0, 0, 10)
            [
                SNew(SBox)
                .WidthOverride(100)  // Constrain width for counter symbols
                [
                    SNew(SVerticalBox)

                    // Hack Ready text (hidden by default)
                    + SVerticalBox::Slot()
                    .AutoHeight()
                    .Padding(0, 0, 0, 5)
                    [
                        SAssignNew(HackReadyText, STextBlock)
                        .Text(FText::FromString("HACK READY"))
                        .Font(FCoreStyle::GetDefaultFontStyle("Bold", 12))
                        .ColorAndOpacity(FSlateColor(FLinearColor(0.0f, 1.0f, 1.0f, 1.0f)))
                        .Visibility(EVisibility::Hidden)
                    ]

                    // Counter symbols container
                    + SVerticalBox::Slot()
                    .AutoHeight()
                    .HAlign(HAlign_Left)  // Align symbols left
                    [
                        SAssignNew(CounterSymbolContainer, SVerticalBox)
                    ]
                ]
            ]

            // Player health bar
            + SVerticalBox::Slot()
            .AutoHeight()
            [
                SNew(SBox)
                .WidthOverride(400)
                .HeightOverride(80)
                [
                    SNew(SVerticalBox)

                    + SVerticalBox::Slot()
                    .AutoHeight()
                    [
                        SNew(SBorder)
                    .BorderImage(FCoreStyle::Get().GetBrush("ToolPanel.GroupBorder"))
                    .BorderBackgroundColor(FSlateColor(FLinearColor(0.0f, 0.0f, 0.0f, 0.7f)))
                    .Padding(4)
                    [
                        SNew(SOverlay)

                        + SOverlay::Slot()
                        [
                            SNew(SBox)
                            .HeightOverride(20)
                            [
                                SNew(SBorder)
                                .BorderImage(FCoreStyle::Get().GetBrush("WhiteTexture"))
                                .BorderBackgroundColor(FSlateColor(FLinearColor(0.2f, 0.2f, 0.2f, 1.0f)))
                            ]
                        ]

                        + SOverlay::Slot()
                        [
                            SAssignNew(PlayerHealthBar, SProgressBar)
                            .Percent(1.0f)
                            .BarFillType(EProgressBarFillType::LeftToRight)
                            .FillImage(FCoreStyle::Get().GetBrush("WhiteTexture"))
                            .FillColorAndOpacity(FSlateColor(FLinearColor(0.1f, 0.8f, 0.1f, 1.0f)))
                        ]

                        + SOverlay::Slot()
                        .HAlign(HAlign_Center)
                        .VAlign(VAlign_Center)
                        [
                            SAssignNew(PlayerHealthText, STextBlock)
                            .Text(FText::FromString("100 / 100"))
                            .Font(FCoreStyle::GetDefaultFontStyle("Regular", 14))
                            .ColorAndOpacity(FSlateColor(FLinearColor::White))
                        ]
                    ]
                    ]

                    + SVerticalBox::Slot()
                    .AutoHeight()
                    .Padding(0, 5, 0, 0)
                    [
                        SNew(SHorizontalBox)
                        + SHorizontalBox::Slot()
                        .HAlign(HAlign_Left)
                        [
                            SAssignNew(PlayerPhaseIndicators, SHorizontalBox)
                        ]
                    ]
                ]
            ]
        ]

        + SOverlay::Slot()
        .HAlign(HAlign_Right)
        .VAlign(VAlign_Top)
        .Padding(0, 50, 50, 0)
        [
            SNew(SVerticalBox)

            + SVerticalBox::Slot()
            .AutoHeight()
            .Padding(0, 0, 0, 10)
            [
                SNew(SBorder)
                .BorderImage(FCoreStyle::Get().GetBrush("ToolPanel.GroupBorder"))
                .BorderBackgroundColor(FSlateColor(FLinearColor(0.0f, 0.0f, 0.0f, 0.7f)))
                .Padding(10)
                [
                    SAssignNew(FragmentCountText, STextBlock)
                    .Text(FText::FromString("Fragments: 0"))
                    .Font(FCoreStyle::GetDefaultFontStyle("Bold", 16))
                    .ColorAndOpacity(FSlateColor(FLinearColor(0.8f, 0.6f, 0.2f, 1.0f)))
                ]
            ]

            // Gamestyle display
            + SVerticalBox::Slot()
            .AutoHeight()
            [
                SNew(SBorder)
                .BorderImage(FCoreStyle::Get().GetBrush("ToolPanel.GroupBorder"))
                .BorderBackgroundColor(FSlateColor(FLinearColor(0.0f, 0.0f, 0.0f, 0.7f)))
                .Padding(10)
                [
                    SNew(SVerticalBox)
                    + SVerticalBox::Slot()
                    .AutoHeight()
                    [
                        SAssignNew(GamestyleNameText, STextBlock)
                        .Text(FText::FromString("Gamestyle: None"))
                        .Font(FCoreStyle::GetDefaultFontStyle("Bold", 14))
                        .ColorAndOpacity(FSlateColor(FLinearColor(0.4f, 0.8f, 1.0f, 1.0f)))
                    ]
                    + SVerticalBox::Slot()
                    .AutoHeight()
                    .Padding(0, 5, 0, 0)
                    [
                        SAssignNew(GamestyleStackText, STextBlock)
                        .Text(FText::FromString("Stacks: 0"))
                        .Font(FCoreStyle::GetDefaultFontStyle("Regular", 12))
                        .ColorAndOpacity(FSlateColor(FLinearColor(0.7f, 0.7f, 0.7f, 1.0f)))
                    ]
                ]
            ]
        ]

    ];

    UpdatePhaseIndicators(PlayerPhaseIndicators, PlayerCurrentPhase, PlayerMaxPhases);
    UpdatePhaseIndicators(EnemyPhaseIndicators, EnemyCurrentPhase, EnemyMaxPhases);

    // Initialize hack state
    CurrentHackCounters = 0;
    RequiredHackCounters = 6;
    UnblockedHits = 0;
    bHackReady = false;

    // Initialize counter symbols (6 symbols)
    for (int32 i = 0; i < 6; ++i)
    {
        TSharedPtr<SBorder> Symbol;
        CounterSymbolContainer->AddSlot()
        .AutoHeight()
        .Padding(0, 6)  // 6px spacing between symbols
        [
            SAssignNew(Symbol, SBorder)
            .BorderImage(FCoreStyle::Get().GetBrush("WhiteTexture"))
            .BorderBackgroundColor(FSlateColor(FLinearColor(0.0f, 0.0f, 0.0f, 0.7f)))
            .Padding(FMargin(0, 0))
            [
                SNew(SBox)
                .WidthOverride(50)   // Much narrower width (1/3 of health bar width)
                .HeightOverride(12)  // Keep the same height
            ]
        ];
        CounterSymbols.Add(Symbol);
    }
}

void SCombatHUDWidget::Tick(const FGeometry& AllottedGeometry, const double InCurrentTime, const float InDeltaTime)
{
    SCompoundWidget::Tick(AllottedGeometry, InCurrentTime, InDeltaTime);

    // Animate red warning pulse
    if (bShowRedWarning)
    {
        RedPulseTime += InDeltaTime;
        UpdateCounterSymbols(); // Update colors every frame for smooth animation
    }

    for (int32 i = ActiveDamageNumbers.Num() - 1; i >= 0; i--)
    {
        ActiveDamageNumbers[i].TimeRemaining -= InDeltaTime;
        if (ActiveDamageNumbers[i].TimeRemaining <= 0)
        {
            ActiveDamageNumbers.RemoveAt(i);
        }
    }

    if (DamageNumberContainer.IsValid())
    {
        DamageNumberContainer->ClearChildren();
        for (const FDamageNumber& DamageNum : ActiveDamageNumbers)
        {
            float Alpha = DamageNum.TimeRemaining / 2.0f;
            float YOffset = (2.0f - DamageNum.TimeRemaining) * 20.0f;

            DamageNumberContainer->AddSlot()
            .AutoHeight()
            .Padding(0, -YOffset, 0, 0)
            [
                SNew(STextBlock)
                .Text(FText::AsNumber(FMath::RoundToInt(DamageNum.Damage)))
                .Font(FCoreStyle::GetDefaultFontStyle("Bold", 18))
                .ColorAndOpacity(FSlateColor(FLinearColor(1.0f, 0.2f, 0.2f, Alpha)))
                .Justification(ETextJustify::Center)
            ];
        }
    }
}

void SCombatHUDWidget::UpdatePlayerHealth(float Health, float MaxHealth, int32 CurrentPhase, int32 MaxPhases)
{
    PlayerCurrentHealth = Health;
    PlayerMaxHealth = MaxHealth;
    PlayerCurrentPhase = CurrentPhase;
    PlayerMaxPhases = MaxPhases;

    if (PlayerHealthBar.IsValid())
    {
        float Percent = MaxHealth > 0 ? Health / MaxHealth : 0.0f;
        PlayerHealthBar->SetPercent(Percent);
        PlayerHealthBar->SetFillColorAndOpacity(GetHealthBarColor(Percent));
    }

    if (PlayerHealthText.IsValid())
    {
        FString HealthString = FString::Printf(TEXT("%.0f / %.0f"), Health, MaxHealth);
        PlayerHealthText->SetText(FText::FromString(HealthString));
    }

    UpdatePhaseIndicators(PlayerPhaseIndicators, CurrentPhase, MaxPhases);
}

void SCombatHUDWidget::UpdateEnemyHealth(float Health, float MaxHealth, int32 CurrentPhase, int32 MaxPhases)
{
    EnemyCurrentHealth = Health;
    EnemyMaxHealth = MaxHealth;
    EnemyCurrentPhase = CurrentPhase;
    EnemyMaxPhases = MaxPhases;

    if (EnemyHealthBar.IsValid())
    {
        float Percent = MaxHealth > 0 ? Health / MaxHealth : 0.0f;
        EnemyHealthBar->SetPercent(Percent);
    }

    if (EnemyHealthText.IsValid())
    {
        FString HealthString = FString::Printf(TEXT("%.0f / %.0f"), Health, MaxHealth);
        EnemyHealthText->SetText(FText::FromString(HealthString));
    }

    UpdatePhaseIndicators(EnemyPhaseIndicators, CurrentPhase, MaxPhases);
}

void SCombatHUDWidget::UpdateFragmentCount(int32 Fragments)
{
    CurrentFragments = Fragments;

    if (FragmentCountText.IsValid())
    {
        FString FragmentString = FString::Printf(TEXT("Fragments: %d"), Fragments);
        FragmentCountText->SetText(FText::FromString(FragmentString));
    }
}

void SCombatHUDWidget::UpdateHackProgress(int32 CurrentCounters, int32 RequiredCounters, int32 UnblockedHitCount)
{
    int32 PrevUnblockedHits = UnblockedHits;
    int32 PrevRequiredCounters = RequiredHackCounters;
    CurrentHackCounters = CurrentCounters;
    RequiredHackCounters = RequiredCounters;
    UnblockedHits = UnblockedHitCount;

    // Rebuild counter symbols if required count changed (for Technomancer bonus)
    if (RequiredCounters != PrevRequiredCounters && CounterSymbolContainer.IsValid())
    {
        // Clear existing symbols
        CounterSymbols.Empty();
        CounterSymbolContainer->ClearChildren();

        // Create new symbols based on new requirement
        for (int32 i = 0; i < RequiredCounters; ++i)
        {
            TSharedPtr<SBorder> Symbol;
            CounterSymbolContainer->AddSlot()
            .AutoHeight()
            .Padding(0, 6)  // 6px spacing between symbols
            [
                SAssignNew(Symbol, SBorder)
                .BorderImage(FCoreStyle::Get().GetBrush("WhiteTexture"))
                .BorderBackgroundColor(FSlateColor(FLinearColor(0.0f, 0.0f, 0.0f, 0.7f)))
                .Padding(FMargin(0, 0))
                [
                    SNew(SBox)
                    .WidthOverride(50)   // Much narrower width
                    .HeightOverride(12)  // Keep the same height
                ]
            ];
            CounterSymbols.Add(Symbol);
        }

        UE_LOG(LogTemp, Warning, TEXT("HUD: Rebuilt counter symbols for new requirement: %d"), RequiredCounters);
    }

    // Check if player took damage (unblocked hit increased)
    if (UnblockedHitCount > PrevUnblockedHits && UnblockedHitCount > 0)
    {
        // First unblocked hit - show persistent red warning
        if (UnblockedHitCount == 1)
        {
            bShowRedWarning = true;
            RedPulseTime = 0.0f; // Reset pulse animation
        }
        // Second unblocked hit - counters were reset
        else if (UnblockedHitCount >= 2)
        {
            // This shouldn't happen as UnblockedHits gets reset to 0 after second hit
            bShowRedWarning = false;
        }
    }

    // Clear red warning when counters are reset (CurrentCounters == 0 and UnblockedHitCount == 0)
    if (CurrentCounters == 0 && UnblockedHitCount == 0)
    {
        bShowRedWarning = false;
        RedPulseTime = 0.0f;
    }

    // Also clear red warning when hack is used (counters go from high to 0)
    if (PrevUnblockedHits > 0 && UnblockedHitCount == 0)
    {
        bShowRedWarning = false;
        RedPulseTime = 0.0f;
    }

    // Check if hack is ready
    bHackReady = (CurrentCounters >= RequiredCounters);

    // Update hack ready text visibility
    if (HackReadyText.IsValid())
    {
        HackReadyText->SetVisibility(bHackReady ? EVisibility::Visible : EVisibility::Hidden);
    }

    // Update counter symbols
    UpdateCounterSymbols();
}

void SCombatHUDWidget::UpdateCounterIndicator(bool bInWindow, bool bCanPerformCounter)
{
    this->bInCounterWindow = bInWindow;
    this->bCanCounter = bCanPerformCounter;

    // The counter window state will be reflected in the arrow colors
    // This is handled in UpdateCounterArrows()
}

void SCombatHUDWidget::ShowDamageNumber(float Damage, bool bIsPlayer)
{
    FDamageNumber NewDamage;
    NewDamage.Damage = Damage;
    NewDamage.bIsPlayer = bIsPlayer;
    NewDamage.TimeRemaining = 2.0f;
    NewDamage.StartY = 0.0f;

    ActiveDamageNumbers.Add(NewDamage);
}

void SCombatHUDWidget::SetEnemyName(const FString& Name)
{
    if (EnemyNameText.IsValid())
    {
        EnemyNameText->SetText(FText::FromString(Name));
    }
}

void SCombatHUDWidget::ShowEnemyHealthBar(bool bShow)
{
    if (EnemyHealthContainer.IsValid())
    {
        EnemyHealthContainer->SetVisibility(bShow ? EVisibility::Visible : EVisibility::Hidden);
    }
}

void SCombatHUDWidget::UpdatePhaseIndicators(TSharedPtr<SHorizontalBox> Container, int32 CurrentPhase, int32 MaxPhases)
{
    if (!Container.IsValid())
    {
        return;
    }

    Container->ClearChildren();

    for (int32 i = 1; i <= MaxPhases; ++i)
    {
        bool bIsActive = i <= CurrentPhase;

        Container->AddSlot()
        .AutoWidth()
        .Padding(2, 0)
        [
            SNew(SBorder)
            .BorderImage(FCoreStyle::Get().GetBrush("ToolPanel.GroupBorder"))
            .BorderBackgroundColor(bIsActive ?
                FSlateColor(FLinearColor(0.8f, 0.6f, 0.2f, 1.0f)) :
                FSlateColor(FLinearColor(0.3f, 0.3f, 0.3f, 0.5f)))
            .Padding(FMargin(8, 4))
            [
                SNew(STextBlock)
                .Text(FText::AsNumber(i))
                .Font(FCoreStyle::GetDefaultFontStyle("Bold", 12))
                .ColorAndOpacity(FSlateColor(FLinearColor::White))
            ]
        ];
    }
}

FSlateColor SCombatHUDWidget::GetHealthBarColor(float HealthPercent) const
{
    if (HealthPercent > 0.5f)
    {
        return FSlateColor(FLinearColor(0.1f, 0.8f, 0.1f, 1.0f));
    }
    else if (HealthPercent > 0.25f)
    {
        return FSlateColor(FLinearColor(0.8f, 0.8f, 0.1f, 1.0f));
    }
    else
    {
        return FSlateColor(FLinearColor(0.8f, 0.1f, 0.1f, 1.0f));
    }
}

void SCombatHUDWidget::UpdateCounterSymbols()
{
    for (int32 i = 0; i < CounterSymbols.Num(); ++i)
    {
        if (CounterSymbols[i].IsValid())
        {
            CounterSymbols[i]->SetBorderBackgroundColor(GetCounterSymbolColor(i));
        }
    }
}

FSlateColor SCombatHUDWidget::GetCounterSymbolColor(int32 SymbolIndex) const
{
    // Show pulsing red warning state for filled symbols when player is in danger
    if (bShowRedWarning && SymbolIndex < CurrentHackCounters)
    {
        // Create pulsing effect using sine wave (oscillates between 0 and 1)
        float PulseValue = (FMath::Sin(RedPulseTime * 4.0f) + 1.0f) * 0.5f; // 4.0f controls speed

        // Interpolate between dark red and bright red
        float RedIntensity = FMath::Lerp(0.4f, 1.0f, PulseValue);  // Red channel: 0.4 to 1.0
        float GreenBlue = FMath::Lerp(0.05f, 0.2f, PulseValue);    // Green/Blue: 0.05 to 0.2

        return FSlateColor(FLinearColor(RedIntensity, GreenBlue, GreenBlue, 1.0f));
    }

    // Symbol is filled with cyan (no warning state)
    if (SymbolIndex < CurrentHackCounters)
    {
        return FSlateColor(FLinearColor(0.0f, 1.0f, 1.0f, 1.0f)); // Cyan
    }

    // Empty symbol - dark background like health bar background
    return FSlateColor(FLinearColor(0.0f, 0.0f, 0.0f, 0.7f)); // Dark black with transparency
}

void SCombatHUDWidget::UpdateGamestyleDisplay(const FString& GamestyleName, int32 StackCount)
{
    CurrentGamestyle = GamestyleName;
    CurrentStacks = StackCount;

    if (GamestyleNameText.IsValid())
    {
        FString DisplayText = FString::Printf(TEXT("Style: %s"), *GamestyleName);
        GamestyleNameText->SetText(FText::FromString(DisplayText));
    }

    if (GamestyleStackText.IsValid())
    {
        FString StackText = FString::Printf(TEXT("Stacks: %d"), StackCount);
        GamestyleStackText->SetText(FText::FromString(StackText));
    }
}

