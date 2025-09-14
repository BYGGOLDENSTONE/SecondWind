#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MemoryShopComponent.generated.h"

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class SECONDWIND_API UMemoryShopComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    UMemoryShopComponent();

protected:
    virtual void BeginPlay() override;
    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:
    UFUNCTION()
    void OpenMemoryShop();

    UFUNCTION()
    void CloseMemoryShop();

    UFUNCTION()
    bool IsShopOpen() const { return bIsShopOpen; }

private:
    UPROPERTY()
    bool bIsShopOpen;

    TSharedPtr<class SMemoryShopWidget> ShopWidget;
    TSharedPtr<class SWindow> ShopWindow;

    void CreateShopUI();
    void DestroyShopUI();
};