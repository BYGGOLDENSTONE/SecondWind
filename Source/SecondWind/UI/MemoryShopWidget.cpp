#include "MemoryShopWidget.h"
#include "SecondWind/Systems/FragmentSystem.h"
#include "SecondWind/Systems/MemorySystem.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/Layout/SBorder.h"
#include "Widgets/Layout/SScrollBox.h"
#include "Widgets/Text/STextBlock.h"
#include "Widgets/Input/SButton.h"
#include "Engine/GameInstance.h"

void SMemoryShopWidget::Construct(const FArguments& InArgs)
{
    ChildSlot
    [
        SNew(SBorder)
        .BorderImage(FCoreStyle::Get().GetBrush("ToolPanel.GroupBorder"))
        .Padding(10)
        [
            SNew(SVerticalBox)
            + SVerticalBox::Slot()
            .AutoHeight()
            .Padding(0, 0, 0, 10)
            [
                SNew(STextBlock)
                .Text(FText::FromString("Memory Shop"))
                .Font(FCoreStyle::GetDefaultFontStyle("Bold", 18))
            ]
            + SVerticalBox::Slot()
            .AutoHeight()
            .Padding(0, 0, 0, 10)
            [
                SAssignNew(FragmentCountText, STextBlock)
                .Text(FText::FromString("Fragments: 0"))
                .Font(FCoreStyle::GetDefaultFontStyle("Regular", 14))
            ]
            + SVerticalBox::Slot()
            .FillHeight(1.0f)
            [
                SNew(SScrollBox)
                + SScrollBox::Slot()
                [
                    SAssignNew(MemoryListBox, SVerticalBox)
                ]
            ]
        ]
    ];
}

void SMemoryShopWidget::SetGameInstance(UGameInstance* InGameInstance)
{
    GameInstance = InGameInstance;
    if (GameInstance)
    {
        FragmentSystem = GameInstance->GetSubsystem<UFragmentSystem>();
        MemorySystem = GameInstance->GetSubsystem<UMemorySystem>();
        RefreshMemoryList();
        UpdateFragmentDisplay();
    }
}

void SMemoryShopWidget::RefreshMemoryList()
{
    if (!MemoryListBox.IsValid() || !MemorySystem)
        return;

    MemoryListBox->ClearChildren();

    TArray<FMemoryData> AvailableMemories = MemorySystem->GetAvailableMemories();
    for (const FMemoryData& Memory : AvailableMemories)
    {
        CreateMemoryEntry(Memory);
    }

    TArray<FString> UnlockedMemories = MemorySystem->GetUnlockedMemories();
    for (const FString& MemoryID : UnlockedMemories)
    {
        FMemoryData Memory = MemorySystem->GetMemoryData(MemoryID);
        CreateMemoryEntry(Memory);
    }
}

void SMemoryShopWidget::CreateMemoryEntry(const FMemoryData& Memory)
{
    bool bIsUnlocked = MemorySystem->IsMemoryUnlocked(Memory.MemoryID);

    MemoryListBox->AddSlot()
    .Padding(0, 2)
    [
        SNew(SBorder)
        .BorderImage(FCoreStyle::Get().GetBrush("ToolPanel.GroupBorder"))
        .Padding(5)
        [
            SNew(SHorizontalBox)
            + SHorizontalBox::Slot()
            .FillWidth(1.0f)
            .VAlign(VAlign_Center)
            [
                SNew(SVerticalBox)
                + SVerticalBox::Slot()
                .AutoHeight()
                [
                    SNew(STextBlock)
                    .Text(FText::FromString(Memory.DisplayName))
                    .Font(FCoreStyle::GetDefaultFontStyle("Bold", 12))
                ]
                + SVerticalBox::Slot()
                .AutoHeight()
                [
                    SNew(STextBlock)
                    .Text(FText::FromString(Memory.Description))
                    .Font(FCoreStyle::GetDefaultFontStyle("Regular", 10))
                ]
            ]
            + SHorizontalBox::Slot()
            .AutoWidth()
            .VAlign(VAlign_Center)
            .Padding(5, 0, 0, 0)
            [
                SNew(SButton)
                .Text(GetPurchaseButtonText(Memory))
                .IsEnabled(!bIsUnlocked && CanPurchaseMemory(Memory))
                .OnClicked(FOnClicked::CreateSP(this, &SMemoryShopWidget::OnMemoryPurchaseClicked, Memory.MemoryID))
                .ButtonColorAndOpacity(GetPurchaseButtonColor(Memory))
            ]
        ]
    ];
}

FReply SMemoryShopWidget::OnMemoryPurchaseClicked(FString MemoryID)
{
    if (MemorySystem && MemorySystem->UnlockMemory(MemoryID))
    {
        RefreshMemoryList();
        UpdateFragmentDisplay();
    }
    return FReply::Handled();
}

void SMemoryShopWidget::UpdateFragmentDisplay()
{
    if (FragmentCountText.IsValid() && FragmentSystem)
    {
        int32 Fragments = FragmentSystem->GetFragmentCount();
        FragmentCountText->SetText(FText::FromString(FString::Printf(TEXT("Fragments: %d"), Fragments)));
    }
}

FSlateColor SMemoryShopWidget::GetPurchaseButtonColor(const FMemoryData& Memory) const
{
    if (MemorySystem && MemorySystem->IsMemoryUnlocked(Memory.MemoryID))
    {
        return FSlateColor(FLinearColor::Green);
    }
    else if (CanPurchaseMemory(Memory))
    {
        return FSlateColor(FLinearColor::White);
    }
    else
    {
        return FSlateColor(FLinearColor::Red);
    }
}

FText SMemoryShopWidget::GetPurchaseButtonText(const FMemoryData& Memory) const
{
    if (MemorySystem && MemorySystem->IsMemoryUnlocked(Memory.MemoryID))
    {
        return FText::FromString("Unlocked");
    }
    else
    {
        return FText::FromString(FString::Printf(TEXT("Buy (%d)"), Memory.FragmentCost));
    }
}

bool SMemoryShopWidget::CanPurchaseMemory(const FMemoryData& Memory) const
{
    return FragmentSystem && FragmentSystem->GetFragmentCount() >= Memory.FragmentCost;
}