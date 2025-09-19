#include "AttackHitboxNotify.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/Character.h"
#include "../Components/CombatComponent.h"

UAttackHitboxNotify::UAttackHitboxNotify()
{
	bStartHitbox = true;
	DamageMultiplier = 1.0f;
}

void UAttackHitboxNotify::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
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

	UCombatComponent* CombatComp = Character->FindComponentByClass<UCombatComponent>();
	if (!CombatComp)
	{
		return;
	}

	if (bStartHitbox)
	{
		CombatComp->SetAttackWindowActive(true);
		CombatComp->SetCurrentDamageMultiplier(DamageMultiplier);
		UE_LOG(LogTemp, Verbose, TEXT("AttackHitboxNotify: Started hitbox with %.1fx damage"), DamageMultiplier);
	}
	else
	{
		CombatComp->SetAttackWindowActive(false);
		CombatComp->SetCurrentDamageMultiplier(1.0f);
		UE_LOG(LogTemp, Verbose, TEXT("AttackHitboxNotify: Ended hitbox"));
	}
}

FString UAttackHitboxNotify::GetNotifyName_Implementation() const
{
	return bStartHitbox ? "AttackHitbox_Start" : "AttackHitbox_End";
}