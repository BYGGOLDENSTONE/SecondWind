#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "SecondWindSaveGame.generated.h"

UCLASS()
class SECONDWIND_API USecondWindSaveGame : public USaveGame
{
    GENERATED_BODY()

public:
    USecondWindSaveGame();

    UPROPERTY(VisibleAnywhere, Category = "SaveGame")
    int32 TotalFragments;

    UPROPERTY(VisibleAnywhere, Category = "SaveGame")
    TArray<FString> UnlockedMemories;

    UPROPERTY(VisibleAnywhere, Category = "SaveGame")
    FString SaveSlotName;

    UPROPERTY(VisibleAnywhere, Category = "SaveGame")
    uint32 UserIndex;
};