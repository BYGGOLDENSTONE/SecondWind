#include "MemoryShopComponent.h"
#include "SecondWind/UI/MemoryShopWidget.h"
#include "Engine/World.h"
#include "Engine/GameInstance.h"
#include "Widgets/SWindow.h"
#include "Framework/Application/SlateApplication.h"
#include "Engine/Engine.h"

UMemoryShopComponent::UMemoryShopComponent()
{
    PrimaryComponentTick.bCanEverTick = false;
    bIsShopOpen = false;
}

void UMemoryShopComponent::BeginPlay()
{
    Super::BeginPlay();
}

void UMemoryShopComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    DestroyShopUI();
    Super::EndPlay(EndPlayReason);
}

void UMemoryShopComponent::OpenMemoryShop()
{
    if (bIsShopOpen)
        return;

    CreateShopUI();
    bIsShopOpen = true;

    UE_LOG(LogTemp, Warning, TEXT("Memory Shop opened"));
}

void UMemoryShopComponent::CloseMemoryShop()
{
    if (!bIsShopOpen)
        return;

    DestroyShopUI();
    bIsShopOpen = false;

    UE_LOG(LogTemp, Warning, TEXT("Memory Shop closed"));
}

void UMemoryShopComponent::CreateShopUI()
{
    if (!GEngine || !GEngine->GameViewport)
        return;

    UGameInstance* GameInstance = GetWorld()->GetGameInstance();
    if (!GameInstance)
        return;

    ShopWidget = SNew(SMemoryShopWidget);
    ShopWidget->SetGameInstance(GameInstance);

    ShopWindow = SNew(SWindow)
        .Title(FText::FromString("Memory Shop"))
        .ClientSize(FVector2D(400, 600))
        .SupportsMaximize(false)
        .SupportsMinimize(false)
        .IsTopmostWindow(true)
        .FocusWhenFirstShown(true)
        [
            ShopWidget.ToSharedRef()
        ];

    FSlateApplication::Get().AddWindow(ShopWindow.ToSharedRef());
}

void UMemoryShopComponent::DestroyShopUI()
{
    if (ShopWindow.IsValid())
    {
        ShopWindow->RequestDestroyWindow();
        ShopWindow.Reset();
    }

    ShopWidget.Reset();
}