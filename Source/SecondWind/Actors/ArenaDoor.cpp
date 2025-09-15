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

    // CRITICAL: Ensure door starts in closed position regardless of editor placement
    DoorState = EDoorState::Closed;
    ProximityTime = 0.0f;
    TimeOpenRemaining = 0.0f;
    bPlayerInProximity = false;
    ResetGracePeriod = 0.5f;  // Small grace period on game start too

    // Find the door mesh component to slide
    TArray<UStaticMeshComponent*> MeshComponents;
    GetComponents<UStaticMeshComponent>(MeshComponents);

    for (UStaticMeshComponent* MeshComp : MeshComponents)
    {
        if (MeshComp)
        {
            FString CompName = MeshComp->GetName();

            // Try to identify the actual door mesh (not the frame)
            if (CompName.Contains(TEXT("Door")) && !CompName.Contains(TEXT("Frame")))
            {
                DoorMesh = MeshComp;
                UE_LOG(LogTemp, Warning, TEXT("Door %d found mesh: %s"), DoorID, *CompName);
                break;
            }
        }
    }

    // If we still don't have a door mesh, just use the first static mesh that isn't the frame
    if (!DoorMesh && MeshComponents.Num() > 0)
    {
        for (UStaticMeshComponent* MeshComp : MeshComponents)
        {
            FString CompName = MeshComp->GetName();
            if (!CompName.Contains(TEXT("Frame")))
            {
                DoorMesh = MeshComp;
                UE_LOG(LogTemp, Warning, TEXT("Door %d using first non-frame mesh: %s"), DoorID, *CompName);
                break;
            }
        }
    }

    if (DoorMesh)
    {
        // Store the initial position for the closed state
        InitialDoorLocation = DoorMesh->GetRelativeLocation();
        CurrentDoorHeight = 0.0f;  // Start closed

        UE_LOG(LogTemp, Warning, TEXT("Door %d initialized - Mesh: %s, Initial Position: %s"),
            DoorID, *DoorMesh->GetName(), *InitialDoorLocation.ToString());

        // Set collision to block movement when closed
        DoorMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
        DoorMesh->SetCollisionResponseToChannel(ECC_Pawn, ECR_Block);
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("Door %d has NO suitable mesh component for sliding!"), DoorID);
    }

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

    // Handle reset grace period
    if (ResetGracePeriod > 0.0f)
    {
        ResetGracePeriod -= DeltaTime;
        if (ResetGracePeriod <= 0.0f)
        {
            UE_LOG(LogTemp, Warning, TEXT("Door %d grace period ended, now interactive"), DoorID);
        }
        return;  // Skip all door logic during grace period
    }

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

    // Safety check: ensure door is actually closed visually before allowing opening
    if (CurrentDoorHeight > 1.0f)
    {
        // Door is still visually open, don't process proximity
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
        // Slide door upward
        CurrentDoorHeight = FMath::FInterpTo(CurrentDoorHeight, DoorOpenHeight, DeltaTime, DoorOpenSpeed);

        if (DoorMesh)
        {
            FVector NewLocation = InitialDoorLocation;
            NewLocation.Z += CurrentDoorHeight;
            DoorMesh->SetRelativeLocation(NewLocation);

            // When door is high enough, disable collision so players can pass
            if (CurrentDoorHeight > 50.0f)
            {
                DoorMesh->SetCollisionResponseToChannel(ECC_Pawn, ECR_Ignore);
            }
        }

        if (FMath::IsNearlyEqual(CurrentDoorHeight, DoorOpenHeight, 1.0f))
        {
            DoorState = EDoorState::Open;
            UE_LOG(LogTemp, Warning, TEXT("Door %d fully opened (Height: %.1f)"), DoorID, CurrentDoorHeight);
        }
    }
    else if (DoorState == EDoorState::Closed && CurrentDoorHeight > 0.1f)
    {
        // Slide door downward
        CurrentDoorHeight = FMath::FInterpTo(CurrentDoorHeight, 0.0f, DeltaTime, DoorOpenSpeed);

        if (DoorMesh)
        {
            FVector NewLocation = InitialDoorLocation;
            NewLocation.Z += CurrentDoorHeight;
            DoorMesh->SetRelativeLocation(NewLocation);

            // When door is almost closed, enable collision to block players
            if (CurrentDoorHeight < 50.0f)
            {
                DoorMesh->SetCollisionResponseToChannel(ECC_Pawn, ECR_Block);
            }
        }

        if (FMath::IsNearlyEqual(CurrentDoorHeight, 0.0f, 1.0f))
        {
            CurrentDoorHeight = 0.0f;
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

        if (DoorMesh)
        {
            FVector CurrentLoc = DoorMesh->GetRelativeLocation();
            UE_LOG(LogTemp, Warning, TEXT("Door %d sliding up... Current Z: %.1f, Target Z: %.1f"),
                DoorID, CurrentLoc.Z, InitialDoorLocation.Z + DoorOpenHeight);
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("Door %d has NO DoorMesh - cannot open!"), DoorID);
        }
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("Door %d OpenDoor called but state is not Closed (State: %d)"),
            DoorID, (int32)DoorState);
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

void AArenaDoor::ResetDoor()
{
    // Force door to closed state immediately (for new run resets)
    DoorState = EDoorState::Closed;
    ProximityTime = 0.0f;
    TimeOpenRemaining = 0.0f;
    bPlayerInProximity = false;
    ResetGracePeriod = 1.0f;  // 1 second grace period after reset

    // Immediately set door to closed position (no animation)
    CurrentDoorHeight = 0.0f;
    if (DoorMesh)
    {
        // Reset to the initial closed position
        DoorMesh->SetRelativeLocation(InitialDoorLocation);
        // Re-enable collision
        DoorMesh->SetCollisionResponseToChannel(ECC_Pawn, ECR_Block);
    }

    // Clear any pending overlaps to prevent auto-opening
    if (ProximityTrigger)
    {
        ProximityTrigger->SetCollisionEnabled(ECollisionEnabled::NoCollision);
        ProximityTrigger->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
    }

    UE_LOG(LogTemp, Warning, TEXT("Door %d hard reset to closed position (Height: 0, Grace: %.1fs)"),
        DoorID, ResetGracePeriod);
}