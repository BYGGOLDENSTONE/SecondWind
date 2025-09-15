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
        ]

        + SOverlay::Slot()
        .HAlign(HAlign_Left)
        .VAlign(VAlign_Center)
        .Padding(50, 0, 0, 0)
        [
            SNew(SVerticalBox)

            + SVerticalBox::Slot()
            .AutoHeight()
            [
                SAssignNew(CounterArrowContainer, SVerticalBox)
            ]

            + SVerticalBox::Slot()
            .AutoHeight()
            .Padding(0, 10, 0, 0)
            [
                SAssignNew(HackReadyBox, SBorder)
                .BorderImage(FCoreStyle::Get().GetBrush("ToolPanel.GroupBorder"))
                .BorderBackgroundColor(FSlateColor(FLinearColor(0.0f, 0.0f, 0.0f, 0.7f)))
                .Padding(10)
                [
                    SAssignNew(HackReadyText, STextBlock)
                    .Text(FText::FromString("HACK READY"))
                    .Font(FCoreStyle::GetDefaultFontStyle("Bold", 14))
                    .ColorAndOpacity(FSlateColor(FLinearColor(0.3f, 0.3f, 0.3f, 1.0f)))
                    .Justification(ETextJustify::Center)
                ]
            ]
        ]
    ];

    UpdatePhaseIndicators(PlayerPhaseIndicators, PlayerCurrentPhase, PlayerMaxPhases);
    UpdatePhaseIndicators(EnemyPhaseIndicators, EnemyCurrentPhase, EnemyMaxPhases);

    // Initialize counter arrows (6 arrows for 6 counters needed)
    CounterArrows.Empty();
    for (int32 i = 0; i < 6; ++i)
    {
        TSharedPtr<SBorder> ArrowBorder;
        CounterArrowContainer->AddSlot()
        .AutoHeight()
        .Padding(0, 2)
        [
            SNew(SBorder)
            .BorderImage(FCoreStyle::Get().GetBrush("ToolPanel.GroupBorder"))
            .BorderBackgroundColor(FSlateColor(FLinearColor(0.05f, 0.05f, 0.05f, 0.9f)))
            .Padding(4)
            [
                SAssignNew(ArrowBorder, SBorder)
                .BorderImage(FCoreStyle::Get().GetBrush("Symbols.RightArrow"))
                .BorderBackgroundColor(FSlateColor(FLinearColor(0.2f, 0.2f, 0.2f, 1.0f)))
                .Padding(0)
                [
                    SNew(SBox)
                    .WidthOverride(32)
                    .HeightOverride(32)
                ]
            ]
        ];
        CounterArrows.Add(ArrowBorder);
    }

    // Initialize unblocked hits and hack ready state
    UnblockedHits = 0;
    bHackReady = false;
}

void SCombatHUDWidget::Tick(const FGeometry& AllottedGeometry, const double InCurrentTime, const float InDeltaTime)
{
    SCompoundWidget::Tick(AllottedGeometry, InCurrentTime, InDeltaTime);

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
    CurrentHackCounters = CurrentCounters;
    RequiredHackCounters = RequiredCounters;
    UnblockedHits = UnblockedHitCount;

    // Check if hack is ready
    bHackReady = (CurrentCounters >= RequiredCounters);

    // Update counter arrows
    UpdateCounterArrows();

    // Update hack ready indicator
    UpdateHackReadyIndicator();
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

void SCombatHUDWidget::UpdateCounterArrows()
{
    // Update arrow colors based on counter progress and unblocked hits
    for (int32 i = 0; i < CounterArrows.Num(); ++i)
    {
        if (CounterArrows[i].IsValid())
        {
            FSlateColor ArrowColor;

            if (UnblockedHits > 0)
            {
                // Red color when player has taken unblocked hits
                ArrowColor = FSlateColor(FLinearColor(0.8f, 0.1f, 0.1f, 1.0f));
            }
            else if (i < CurrentHackCounters)
            {
                // Cyan for filled counters
                ArrowColor = FSlateColor(FLinearColor(0.0f, 0.8f, 0.8f, 1.0f));
            }
            else
            {
                // Dark gray for unfilled counters
                ArrowColor = FSlateColor(FLinearColor(0.3f, 0.3f, 0.3f, 1.0f));
            }

            // Update the arrow image color
            CounterArrows[i]->SetBorderBackgroundColor(ArrowColor);
        }
    }
}

void SCombatHUDWidget::UpdateHackReadyIndicator()
{
    if (HackReadyBox.IsValid() && HackReadyText.IsValid())
    {
        if (bHackReady)
        {
            // Cyan glow when hack is ready
            HackReadyBox->SetBorderBackgroundColor(FSlateColor(FLinearColor(0.0f, 0.3f, 0.3f, 1.0f)));
            HackReadyText->SetColorAndOpacity(FSlateColor(FLinearColor(0.0f, 1.0f, 1.0f, 1.0f)));
        }
        else
        {
            // Dark gray when not ready
            HackReadyBox->SetBorderBackgroundColor(FSlateColor(FLinearColor(0.0f, 0.0f, 0.0f, 0.7f)));
            HackReadyText->SetColorAndOpacity(FSlateColor(FLinearColor(0.3f, 0.3f, 0.3f, 1.0f)));
        }
    }
}