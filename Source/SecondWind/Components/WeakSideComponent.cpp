#include "WeakSideComponent.h"
#include "GameFramework/Actor.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"

UWeakSideComponent::UWeakSideComponent()
{
    PrimaryComponentTick.bCanEverTick = true;
}

void UWeakSideComponent::BeginPlay()
{
    Super::BeginPlay();

    bWeakSideActive = false;
    CurrentWeakSide = EWeakSide::None;
    WeakSideTimer = 0.0f;
    CooldownTimer = 0.0f;
}

void UWeakSideComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    if (!bWeakSideActive)
    {
        return;
    }

    if (CooldownTimer > 0.0f)
    {
        CooldownTimer -= DeltaTime;
        if (CooldownTimer <= 0.0f)
        {
            SelectNewWeakSide();
            WeakSideTimer = WeakSideDuration;
        }
        return;
    }

    if (CurrentWeakSide != EWeakSide::None)
    {
        WeakSideTimer -= DeltaTime;
        if (WeakSideTimer <= 0.0f)
        {
            SelectNewWeakSide();
            WeakSideTimer = WeakSideDuration;
        }
    }
}

void UWeakSideComponent::ActivateWeakSide()
{
    if (bWeakSideActive)
    {
        return;
    }

    bWeakSideActive = true;
    SelectNewWeakSide();
    WeakSideTimer = WeakSideDuration;
    CooldownTimer = 0.0f;

    UE_LOG(LogTemp, Warning, TEXT("WeakSideComponent activated on %s"), *GetOwner()->GetName());
}

void UWeakSideComponent::DeactivateWeakSide()
{
    bWeakSideActive = false;
    CurrentWeakSide = EWeakSide::None;
    ClearVisualFeedback();

    UE_LOG(LogTemp, Warning, TEXT("WeakSideComponent deactivated on %s"), *GetOwner()->GetName());
}

void UWeakSideComponent::OnWeakSideHit()
{
    if (!bWeakSideActive || CurrentWeakSide == EWeakSide::None)
    {
        return;
    }

    UE_LOG(LogTemp, Warning, TEXT("Weak side hit! Starting cooldown"));

    CurrentWeakSide = EWeakSide::None;
    ClearVisualFeedback();
    CooldownTimer = WeakSideCooldown;
}

bool UWeakSideComponent::IsAttackFromWeakSide(const FVector& AttackerLocation) const
{
    if (!bWeakSideActive || CurrentWeakSide == EWeakSide::None)
    {
        return false;
    }

    AActor* Owner = GetOwner();
    if (!Owner)
    {
        return false;
    }

    FVector ToAttacker = (AttackerLocation - Owner->GetActorLocation()).GetSafeNormal();
    FVector OwnerRight = Owner->GetActorRightVector();

    float DotProduct = FVector::DotProduct(ToAttacker, OwnerRight);

    if (CurrentWeakSide == EWeakSide::Left)
    {
        return DotProduct < -0.3f;
    }
    else if (CurrentWeakSide == EWeakSide::Right)
    {
        return DotProduct > 0.3f;
    }

    return false;
}

void UWeakSideComponent::SelectNewWeakSide()
{
    float RandomValue = FMath::FRand();
    EWeakSide OldSide = CurrentWeakSide;

    CurrentWeakSide = (RandomValue < 0.5f) ? EWeakSide::Left : EWeakSide::Right;

    if (OldSide != CurrentWeakSide)
    {
        ClearVisualFeedback();
        UpdateVisualFeedback();
    }

    UE_LOG(LogTemp, Log, TEXT("New weak side selected: %s"),
        CurrentWeakSide == EWeakSide::Left ? TEXT("Left") : TEXT("Right"));
}

void UWeakSideComponent::UpdateVisualFeedback()
{
    if (CurrentWeakSide == EWeakSide::None)
    {
        return;
    }

    AActor* Owner = GetOwner();
    if (!Owner)
    {
        return;
    }

    #if WITH_EDITOR
    FVector OwnerLocation = Owner->GetActorLocation();
    FVector OwnerRight = Owner->GetActorRightVector();
    FVector SideOffset = OwnerRight * 100.0f * (CurrentWeakSide == EWeakSide::Right ? 1.0f : -1.0f);
    FVector DebugLocation = OwnerLocation + SideOffset + FVector(0, 0, 50);

    DrawDebugSphere(GetWorld(), DebugLocation, 30.0f, 12, FColor::Cyan, false, WeakSideDuration);
    #endif

    if (USkeletalMeshComponent* MeshComp = Owner->FindComponentByClass<USkeletalMeshComponent>())
    {
        MeshComp->SetRenderCustomDepth(true);
        MeshComp->SetCustomDepthStencilValue(CurrentWeakSide == EWeakSide::Left ? 250 : 251);
    }
    else if (UStaticMeshComponent* StaticMeshComp = Owner->FindComponentByClass<UStaticMeshComponent>())
    {
        StaticMeshComp->SetRenderCustomDepth(true);
        StaticMeshComp->SetCustomDepthStencilValue(CurrentWeakSide == EWeakSide::Left ? 250 : 251);
    }
}

void UWeakSideComponent::ClearVisualFeedback()
{
    AActor* Owner = GetOwner();
    if (!Owner)
    {
        return;
    }

    if (USkeletalMeshComponent* MeshComp = Owner->FindComponentByClass<USkeletalMeshComponent>())
    {
        MeshComp->SetRenderCustomDepth(false);
        MeshComp->SetCustomDepthStencilValue(0);
    }
    else if (UStaticMeshComponent* StaticMeshComp = Owner->FindComponentByClass<UStaticMeshComponent>())
    {
        StaticMeshComp->SetRenderCustomDepth(false);
        StaticMeshComp->SetCustomDepthStencilValue(0);
    }
}