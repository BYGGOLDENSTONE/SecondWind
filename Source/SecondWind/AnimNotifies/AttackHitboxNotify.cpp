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
		UE_LOG(LogTemp, Warning, TEXT("AttackHitboxNotify: MeshComp is null!"));
		return;
	}

	ACharacter* Character = Cast<ACharacter>(MeshComp->GetOwner());
	if (!Character)
	{
		UE_LOG(LogTemp, Warning, TEXT("AttackHitboxNotify: Owner is not a Character! Owner: %s"),
			MeshComp->GetOwner() ? *MeshComp->GetOwner()->GetName() : TEXT("null"));
		return;
	}

	UCombatComponent* CombatComp = Character->FindComponentByClass<UCombatComponent>();
	if (!CombatComp)
	{
		UE_LOG(LogTemp, Warning, TEXT("AttackHitboxNotify: No CombatComponent found on %s!"), *Character->GetName());
		return;
	}

	if (bStartHitbox)
	{
		CombatComp->SetAttackWindowActive(true);
		CombatComp->SetCurrentDamageMultiplier(DamageMultiplier);
		UE_LOG(LogTemp, Warning, TEXT("AttackHitboxNotify: Started hitbox for %s with %.1fx damage"), *Character->GetName(), DamageMultiplier);
	}
	else
	{
		CombatComp->SetAttackWindowActive(false);
		CombatComp->SetCurrentDamageMultiplier(1.0f);
		UE_LOG(LogTemp, Warning, TEXT("AttackHitboxNotify: Ended hitbox for %s"), *Character->GetName());
	}
}

FString UAttackHitboxNotify::GetNotifyName_Implementation() const
{
	return bStartHitbox ? "AttackHitbox_Start" : "AttackHitbox_End";
}