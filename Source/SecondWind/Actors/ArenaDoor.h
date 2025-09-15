#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ArenaDoor.generated.h"

class UBoxComponent;
class ASecondWindCharacter;
class UStaticMeshComponent;

UENUM(BlueprintType)
enum class EDoorState : uint8
{
    Closed,
    Opening,
    Open,
    Locked
};

UENUM(BlueprintType)
enum class EDoorType : uint8
{
    ArenaEntry,    // Requires no combat to open
    ArenaExit,     // Requires enemy defeated to open
    SafeZone,      // Always accessible
    StartingHub    // Always accessible
};

UCLASS()
class SECONDWIND_API AArenaDoor : public AActor
{
    GENERATED_BODY()

public:
    AArenaDoor();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

    void OpenDoor();
    void CloseDoor();
    void LockDoor();
    void UnlockDoor();

    bool IsPlayerInProximity() const { return bPlayerInProximity; }
    float GetProximityTime() const { return ProximityTime; }
    EDoorState GetDoorState() const { return DoorState; }

    void SetDoorType(EDoorType Type) { DoorType = Type; }
    EDoorType GetDoorType() const { return DoorType; }

    bool CanOpen() const;
    void SetDoorLocked(bool bLocked);
    int32 GetDoorID() const { return DoorID; }

    UFUNCTION()
    void OnProximityBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
        UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

    UFUNCTION()
    void OnProximityEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
        UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

protected:
    void UpdateProximityTimer(float DeltaTime);
    void UpdateDoorAnimation(float DeltaTime);
    void OnProximityRequirementMet();

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UStaticMeshComponent* DoorMesh;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UStaticMeshComponent* DoorFrameMesh;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UBoxComponent* ProximityTrigger;

    UPROPERTY(EditDefaultsOnly, Category = "Door Settings")
    float ProximityRequiredTime = 2.0f;

    UPROPERTY(EditDefaultsOnly, Category = "Door Settings")
    float DoorOpenSpeed = 2.0f;

    UPROPERTY(EditDefaultsOnly, Category = "Door Settings")
    float DoorOpenAngle = 90.0f;

    UPROPERTY(EditDefaultsOnly, Category = "Door Settings")
    FVector ProximityBoxExtent = FVector(150.0f, 150.0f, 100.0f);  // Smaller to avoid overlap

    UPROPERTY(EditDefaultsOnly, Category = "Door Settings")
    float AutoCloseDelay = 3.0f;  // Time door stays open before auto-closing

private:
    EDoorState DoorState = EDoorState::Closed;
    EDoorType DoorType = EDoorType::SafeZone;
    bool bPlayerInProximity = false;
    float ProximityTime = 0.0f;
    float CurrentDoorAngle = 0.0f;
    float TimeOpenRemaining = 0.0f;  // Auto-close timer

    // Unique ID for this door
    int32 DoorID = -1;
    static int32 NextDoorID;

    UPROPERTY()
    ASecondWindCharacter* PlayerCharacter = nullptr;
};