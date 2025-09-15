#include "ArenaDoor.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "../SecondWindCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"

// Initialize static counter
int32 AArenaDoor::NextDoorID = 0;

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

    // Assign unique ID to this door
    DoorID = NextDoorID++;
    UE_LOG(LogTemp, Warning, TEXT("Door initialized with ID: %d (Name: %s, Location: %s)"),
        DoorID, *GetName(), *GetActorLocation().ToString());

    // Set up proximity trigger with proper collision
    if (ProximityTrigger)
    {
        ProximityTrigger->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
        ProximityTrigger->SetCollisionResponseToAllChannels(ECR_Ignore);
        ProximityTrigger->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);

        ProximityTrigger->OnComponentBeginOverlap.AddDynamic(this, &AArenaDoor::OnProximityBeginOverlap);
        ProximityTrigger->OnComponentEndOverlap.AddDynamic(this, &AArenaDoor::OnProximityEndOverlap);
    }

    PlayerCharacter = Cast<ASecondWindCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
}

void AArenaDoor::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    UpdateProximityTimer(DeltaTime);
    UpdateDoorAnimation(DeltaTime);

    // Auto-close timer when door is open and player is not nearby
    if (DoorState == EDoorState::Open && !bPlayerInProximity)
    {
        TimeOpenRemaining -= DeltaTime;
        if (TimeOpenRemaining <= 0.0f)
        {
            CloseDoor();
            UE_LOG(LogTemp, Warning, TEXT("Door %d auto-closed after %.1f seconds"), DoorID, AutoCloseDelay);
        }
    }
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
                UE_LOG(LogTemp, Warning, TEXT("Door %d locked - defeat enemy first!"), DoorID);
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
            UE_LOG(LogTemp, Warning, TEXT("Door %d proximity progress: %.1f%%"), DoorID, Progress * 100.0f);
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
            UE_LOG(LogTemp, Warning, TEXT("Door %d fully opened"), DoorID);
        }
    }
    else if (DoorState == EDoorState::Closed && CurrentDoorAngle > 0.1f)
    {
        // Animate door closing
        CurrentDoorAngle = FMath::FInterpTo(CurrentDoorAngle, 0.0f, DeltaTime, DoorOpenSpeed);

        if (DoorMesh)
        {
            FRotator NewRotation = DoorMesh->GetRelativeRotation();
            NewRotation.Yaw = CurrentDoorAngle;
            DoorMesh->SetRelativeRotation(NewRotation);
        }

        if (FMath::IsNearlyEqual(CurrentDoorAngle, 0.0f, 1.0f))
        {
            CurrentDoorAngle = 0.0f;
            UE_LOG(LogTemp, Warning, TEXT("Door %d fully closed"), DoorID);
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
                UE_LOG(LogTemp, Warning, TEXT("Door %d activated"), DoorID);
            }
        }
    }
}

void AArenaDoor::OpenDoor()
{
    if (DoorState == EDoorState::Closed)
    {
        DoorState = EDoorState::Opening;
        TimeOpenRemaining = AutoCloseDelay;  // Reset auto-close timer
        UE_LOG(LogTemp, Warning, TEXT("Door %d opening... (will auto-close in %.1f seconds)"), DoorID, AutoCloseDelay);
    }
}

void AArenaDoor::CloseDoor()
{
    // Force close the door regardless of current state
    DoorState = EDoorState::Closed;
    ProximityTime = 0.0f;  // Reset proximity timer
    // Don't immediately set angle to 0 - let it animate closed

    UE_LOG(LogTemp, Warning, TEXT("Door %d closing..."), DoorID);
}

void AArenaDoor::LockDoor()
{
    DoorState = EDoorState::Locked;
    CloseDoor();
    ProximityTime = 0.0f;
    UE_LOG(LogTemp, Warning, TEXT("Door %d locked"), DoorID);
}

void AArenaDoor::UnlockDoor()
{
    if (DoorState == EDoorState::Locked)
    {
        DoorState = EDoorState::Closed;
        UE_LOG(LogTemp, Warning, TEXT("Door %d unlocked"), DoorID);
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
            UE_LOG(LogTemp, Warning, TEXT("Door %d locked - defeat the enemy first!"), DoorID);
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("Player entered Door %d proximity"), DoorID);
        }
    }
}

void AArenaDoor::OnProximityEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
    UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
    if (OtherActor && OtherActor == PlayerCharacter)
    {
        bPlayerInProximity = false;
        ProximityTime = 0.0f; // Reset proximity timer

        // AUTO-CLOSE: If door is open, close it when player leaves
        if (DoorState == EDoorState::Open)
        {
            CloseDoor();
            UE_LOG(LogTemp, Warning, TEXT("Door %d auto-closed after player passed through"), DoorID);
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("Player left Door %d proximity"), DoorID);
        }
    }
}

bool AArenaDoor::CanOpen() const
{
    // Simple: doors can only open if they're not locked
    return DoorState != EDoorState::Locked;
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