#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BlockingComponent.generated.h"

UENUM(BlueprintType)
enum class EBlockDirection : uint8
{
	None UMETA(DisplayName = "None"),
	Left UMETA(DisplayName = "Left"),
	Center UMETA(DisplayName = "Center"),
	Right UMETA(DisplayName = "Right")
};

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class SECONDWIND_API UBlockingComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UBlockingComponent();

protected:
	virtual void BeginPlay() override;

public:
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION()
	void StartBlocking();

	UFUNCTION()
	void StopBlocking();

	UFUNCTION()
	void UpdateBlockDirection(float MouseX);

	UFUNCTION()
	bool IsBlocking() const { return bIsBlocking; }

	UFUNCTION()
	EBlockDirection GetBlockDirection() const { return CurrentBlockDirection; }

	UFUNCTION()
	float CalculateDamageReduction(EBlockDirection IncomingAttackDirection) const;

	UFUNCTION()
	bool IsInCounterWindow() const { return bInCounterWindow; }

	UFUNCTION()
	void TriggerCounterWindow(EBlockDirection IncomingAttackDirection);

private:
	UPROPERTY(EditDefaultsOnly, Category = "Blocking")
	float BlockDamageReduction = 0.4f;

	UPROPERTY(EditDefaultsOnly, Category = "Blocking")
	float CounterWindowDuration = 0.5f;

	UPROPERTY(EditDefaultsOnly, Category = "Blocking")
	float MouseSensitivity = 1.0f;

	UPROPERTY(EditDefaultsOnly, Category = "Blocking")
	float BlockZoneThreshold = 0.4f;

	bool bIsBlocking = false;
	EBlockDirection CurrentBlockDirection = EBlockDirection::Center;

	bool bInCounterWindow = false;
	float CounterWindowTimer = 0.0f;
	EBlockDirection CounterDirection = EBlockDirection::None;

	float ReferenceMouseX = 0.0f;  // Mouse position when blocking started
	float CurrentMouseX = 0.0f;    // Current accumulated mouse position
	bool bBlockingJustStarted = false;

	void UpdateCounterWindow(float DeltaTime);
	EBlockDirection CalculateBlockDirection(float NormalizedMouseX) const;
};