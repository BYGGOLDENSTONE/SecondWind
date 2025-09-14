#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SafeZoneCorridor.generated.h"

class UBoxComponent;
class ASecondWindCharacter;
class UMemoryShopComponent;

UCLASS()
class SECONDWIND_API ASafeZoneCorridor : public AActor
{
    GENERATED_BODY()

public:
    ASafeZoneCorridor();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

    void SetCorridorNumber(int32 Number) { CorridorNumber = Number; }
    int32 GetCorridorNumber() const { return CorridorNumber; }

    UFUNCTION()
    void OnCorridorEnter(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
        UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

    UFUNCTION()
    void OnCorridorExit(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
        UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

protected:
    void OnPlayerEnterCorridor();
    void OnPlayerExitCorridor();

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UStaticMeshComponent* CorridorMesh;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UBoxComponent* CorridorTrigger;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UMemoryShopComponent* MemoryShopComponent;

    UPROPERTY(EditDefaultsOnly, Category = "Corridor Settings")
    FVector CorridorExtent = FVector(400.0f, 200.0f, 200.0f);

    UPROPERTY(EditDefaultsOnly, Category = "Corridor Settings")
    bool bIsMarketplace = true;

private:
    int32 CorridorNumber = 0;
    bool bPlayerInside = false;

    UPROPERTY()
    ASecondWindCharacter* PlayerCharacter = nullptr;
};