#include "ArenaDoor.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "../SecondWindCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"

AArenaDoor::AArenaDoor()
{
    PrimaryActorTick.bCanEverTick = true;

    RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

    DoorFrameMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DoorFrameMesh"));
    DoorFrameMesh->SetupAttachment(RootComponent);

    DoorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DoorMesh"));
    DoorMesh->SetupAttachment(RootComponent);

    ProximityTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("ProximityTrigger"));
    ProximityTrigger->SetupAttachment(RootComponent);
    ProximityTrigger->SetBoxExtent(ProximityBoxExtent);
    ProximityTrigger->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
    ProximityTrigger->SetCollisionResponseToAllChannels(ECR_Ignore);
    ProximityTrigger->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
}

void AArenaDoor::BeginPlay()
{
    Super::BeginPlay();

    ProximityTrigger->OnComponentBeginOverlap.AddDynamic(this, &AArenaDoor::OnProximityBeginOverlap);
    ProximityTrigger->OnComponentEndOverlap.AddDynamic(this, &AArenaDoor::OnProximityEndOverlap);

    PlayerCharacter = Cast<ASecondWindCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
}

void AArenaDoor::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    UpdateProximityTimer(DeltaTime);
    UpdateDoorAnimation(DeltaTime);
}

void AArenaDoor::UpdateProximityTimer(float DeltaTime)
{
    if (DoorState == EDoorState::Locked || DoorState == EDoorState::Open)
    {
        return;
    }

    if (bPlayerInProximity && DoorState == EDoorState::Closed)
    {
        if (!CanOpen())
        {
            if (ProximityTime > 0.0f)
            {
                UE_LOG(LogTemp, Warning, TEXT("Door %d locked - defeat enemy first!"), ArenaNumber);
                ProximityTime = 0.0f;
            }
            return;
        }

        ProximityTime += DeltaTime;

        if (ProximityTime >= ProximityRequiredTime)
        {
            OnProximityRequirementMet();
        }

        // Only log at key progress points to reduce spam
        float Progress = ProximityTime / ProximityRequiredTime;
        static float LastLoggedProgress = 0.0f;
        if (FMath::Abs(Progress - LastLoggedProgress) >= 0.25f || Progress >= 1.0f)
        {
            UE_LOG(LogTemp, Warning, TEXT("Door %d proximity progress: %.1f%%"), ArenaNumber, Progress * 100.0f);
            LastLoggedProgress = Progress;
        }
    }
    else if (!bPlayerInProximity && ProximityTime > 0.0f)
    {
        ProximityTime = FMath::Max(0.0f, ProximityTime - DeltaTime * 2.0f);
    }
}

void AArenaDoor::UpdateDoorAnimation(float DeltaTime)
{
    if (DoorState == EDoorState::Opening)
    {
        CurrentDoorAngle = FMath::FInterpTo(CurrentDoorAngle, DoorOpenAngle, DeltaTime, DoorOpenSpeed);

        if (DoorMesh)
        {
            FRotator NewRotation = DoorMesh->GetRelativeRotation();
            NewRotation.Yaw = CurrentDoorAngle;
            DoorMesh->SetRelativeRotation(NewRotation);
        }

        if (FMath::IsNearlyEqual(CurrentDoorAngle, DoorOpenAngle, 1.0f))
        {
            DoorState = EDoorState::Open;
            UE_LOG(LogTemp, Warning, TEXT("Door %d fully opened"), ArenaNumber);
        }
    }
}

void AArenaDoor::OnProximityRequirementMet()
{
    if (DoorState == EDoorState::Closed && CanOpen())
    {
        OpenDoor();

        if (UWorld* World = GetWorld())
        {
            if (AGameModeBase* GameMode = World->GetAuthGameMode())
            {
                UE_LOG(LogTemp, Warning, TEXT("Door %d activated - ready to enter Arena %d"), ArenaNumber, ArenaNumber);
            }
        }
    }
}

void AArenaDoor::OpenDoor()
{
    if (DoorState == EDoorState::Closed)
    {
        DoorState = EDoorState::Opening;
        UE_LOG(LogTemp, Warning, TEXT("Door %d opening..."), ArenaNumber);
    }
}

void AArenaDoor::CloseDoor()
{
    if (DoorState == EDoorState::Open)
    {
        DoorState = EDoorState::Closed;
        CurrentDoorAngle = 0.0f;

        if (DoorMesh)
        {
            FRotator NewRotation = DoorMesh->GetRelativeRotation();
            NewRotation.Yaw = 0.0f;
            DoorMesh->SetRelativeRotation(NewRotation);
        }

        UE_LOG(LogTemp, Warning, TEXT("Door %d closed"), ArenaNumber);
    }
}

void AArenaDoor::LockDoor()
{
    DoorState = EDoorState::Locked;
    CloseDoor();
    ProximityTime = 0.0f;
    UE_LOG(LogTemp, Warning, TEXT("Door %d locked"), ArenaNumber);
}

void AArenaDoor::UnlockDoor()
{
    if (DoorState == EDoorState::Locked)
    {
        DoorState = EDoorState::Closed;
        UE_LOG(LogTemp, Warning, TEXT("Door %d unlocked"), ArenaNumber);
    }
}

void AArenaDoor::OnProximityBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
    UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    if (OtherActor && OtherActor == PlayerCharacter)
    {
        bPlayerInProximity = true;

        if (!CanOpen() && DoorType == EDoorType::ArenaExit)
        {
            UE_LOG(LogTemp, Warning, TEXT("Door %d locked - defeat the enemy first!"), ArenaNumber);
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("Player entered Door %d proximity"), ArenaNumber);
        }
    }
}

void AArenaDoor::OnProximityEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
    UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
    if (OtherActor && OtherActor == PlayerCharacter)
    {
        bPlayerInProximity = false;
        UE_LOG(LogTemp, Warning, TEXT("Player left Door %d proximity"), ArenaNumber);
    }
}

bool AArenaDoor::CanOpen() const
{
    // Safe zone and starting hub doors are always accessible
    if (DoorType == EDoorType::SafeZone || DoorType == EDoorType::StartingHub)
    {
        return true;
    }

    // Arena entry doors are always accessible
    if (DoorType == EDoorType::ArenaEntry)
    {
        return true;
    }

    // Arena exit doors require combat to be cleared
    if (DoorType == EDoorType::ArenaExit && bRequiresCombatClear)
    {
        // Combat clear is now handled by the ArenaZone system
        // The zone will unlock doors when combat is cleared
        return DoorState != EDoorState::Locked;
    }

    return !bRequiresCombatClear;
}

void AArenaDoor::SetDoorLocked(bool bLocked)
{
    if (bLocked)
    {
        LockDoor();
    }
    else
    {
        UnlockDoor();
    }
}