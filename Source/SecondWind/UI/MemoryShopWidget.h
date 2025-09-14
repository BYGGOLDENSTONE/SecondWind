#pragma once

#include "CoreMinimal.h"
#include "Widgets/SCompoundWidget.h"
#include "SecondWind/Systems/MemorySystem.h"

class UFragmentSystem;
class UMemorySystem;

class SECONDWIND_API SMemoryShopWidget : public SCompoundWidget
{
public:
    SLATE_BEGIN_ARGS(SMemoryShopWidget) {}
    SLATE_END_ARGS()

    void Construct(const FArguments& InArgs);
    void RefreshMemoryList();
    void SetGameInstance(UGameInstance* InGameInstance);

private:
    TSharedPtr<class SVerticalBox> MemoryListBox;
    TSharedPtr<class STextBlock> FragmentCountText;

    UGameInstance* GameInstance;
    UFragmentSystem* FragmentSystem;
    UMemorySystem* MemorySystem;

    FReply OnMemoryPurchaseClicked(FString MemoryID);
    void UpdateFragmentDisplay();
    void CreateMemoryEntry(const FMemoryData& Memory);

    FSlateColor GetPurchaseButtonColor(const FMemoryData& Memory) const;
    FText GetPurchaseButtonText(const FMemoryData& Memory) const;
    bool CanPurchaseMemory(const FMemoryData& Memory) const;
};