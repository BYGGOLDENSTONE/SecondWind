#include "CounterWindowNotify.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/Character.h"
#include "../Components/BlockingComponent.h"

UCounterWindowNotify::UCounterWindowNotify()
{
	bStartWindow = true;
	WindowDuration = 0.5f;
}

void UCounterWindowNotify::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	if (!MeshComp)
	{
		return;
	}

	ACharacter* Character = Cast<ACharacter>(MeshComp->GetOwner());
	if (!Character)
	{
		return;
	}

	UBlockingComponent* BlockingComp = Character->FindComponentByClass<UBlockingComponent>();
	if (!BlockingComp)
	{
		return;
	}

	if (bStartWindow)
	{
		BlockingComp->StartCounterWindow(WindowDuration);
		UE_LOG(LogTemp, Verbose, TEXT("CounterWindowNotify: Started %.2fs counter window"), WindowDuration);
	}
	else
	{
		BlockingComp->EndCounterWindow();
		UE_LOG(LogTemp, Verbose, TEXT("CounterWindowNotify: Ended counter window"));
	}
}

FString UCounterWindowNotify::GetNotifyName_Implementation() const
{
	return bStartWindow ? "CounterWindow_Start" : "CounterWindow_End";
}