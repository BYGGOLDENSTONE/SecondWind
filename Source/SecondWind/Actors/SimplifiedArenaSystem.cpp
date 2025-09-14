#include "SimplifiedArenaSystem.h"
#include "ArenaDoor.h"
#include "SafeZoneCorridor.h"
#include "ArenaEnemy.h"
#include "TrainingDummy.h"
#include "../SecondWindCharacter.h"
#include "../Components/FragmentComponent.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"

ASimplifiedArenaSystem::ASimplifiedArenaSystem()
{
    PrimaryActorTick.bCanEverTick = true;

    RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

    ArenaTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("ArenaTrigger"));
    ArenaTrigger->SetupAttachment(RootComponent);
    ArenaTrigger->SetBoxExtent(FVector(500.0f, 500.0f, 200.0f));
    ArenaTrigger->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
    ArenaTrigger->SetCollisionResponseToAllChannels(ECR_Ignore);
    ArenaTrigger->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
}

void ASimplifiedArenaSystem::BeginPlay()
{
    Super::BeginPlay();

    PlayerCharacter = Cast<ASecondWindCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
    InitializeArenaSystem();
}

void ASimplifiedArenaSystem::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (CurrentEnemy && bInCombat)
    {
        if (CurrentEnemy->IsDefeated())
        {
            OnEnemyDefeated(CurrentEnemy);
        }
    }

    for (const FArenaRoom& Room : ArenaRooms)
    {
        if (Room.EntryDoor && Room.EntryDoor->GetDoorState() == EDoorState::Open &&
            Room.EntryDoor->GetArenaNumber() == CurrentArenaNumber + 1)
        {
            OnDoorOpened(Room.EntryDoor);
        }
    }
}

void ASimplifiedArenaSystem::InitializeArenaSystem()
{
    SetupStartingHub();

    float CurrentX = StartingHubLocation.X;

    for (int32 i = 1; i <= TotalArenas; i++)
    {
        FArenaRoom NewRoom;
        NewRoom.ArenaNumber = i;

        CurrentX += RoomSpacing;

        if (DoorClass)
        {
            FActorSpawnParameters SpawnParams;
            SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

            NewRoom.EntryDoor = GetWorld()->SpawnActor<AArenaDoor>(
                DoorClass,
                FVector(CurrentX - RoomSpacing/2, 0, 0),
                FRotator::ZeroRotator,
                SpawnParams
            );

            if (NewRoom.EntryDoor)
            {
                NewRoom.EntryDoor->SetArenaNumber(i);
                NewRoom.EntryDoor->SetDoorType(i == 1 ? EDoorType::StartingHub : EDoorType::ArenaEntry);
                NewRoom.EntryDoor->SetRequiresCombatClear(false);
                if (i > 1)
                {
                    NewRoom.EntryDoor->LockDoor();
                }
            }
        }

        NewRoom.RoomLocation = FVector(CurrentX, 0, 0);

        CurrentX += RoomSpacing;

        if (i < TotalArenas)
        {
            if (CorridorClass)
            {
                FActorSpawnParameters SpawnParams;
                SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

                NewRoom.Corridor = GetWorld()->SpawnActor<ASafeZoneCorridor>(
                    CorridorClass,
                    FVector(CurrentX, 0, 0),
                    FRotator::ZeroRotator,
                    SpawnParams
                );

                if (NewRoom.Corridor)
                {
                    NewRoom.Corridor->SetCorridorNumber(i);
                }
            }

            CurrentX += CorridorLength;

            if (DoorClass)
            {
                FActorSpawnParameters SpawnParams;
                SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

                NewRoom.ExitDoor = GetWorld()->SpawnActor<AArenaDoor>(
                    DoorClass,
                    FVector(CurrentX - CorridorLength/2, 0, 0),
                    FRotator::ZeroRotator,
                    SpawnParams
                );

                if (NewRoom.ExitDoor)
                {
                    NewRoom.ExitDoor->SetArenaNumber(i);
                    NewRoom.ExitDoor->SetDoorType(EDoorType::ArenaExit);
                    NewRoom.ExitDoor->SetRequiresCombatClear(true);
                    NewRoom.ExitDoor->LockDoor();
                }
            }
        }

        ArenaRooms.Add(NewRoom);
    }

    UE_LOG(LogTemp, Warning, TEXT("Simplified Arena System initialized with %d arenas"), TotalArenas);
}

void ASimplifiedArenaSystem::SetupStartingHub()
{
    // No longer auto-spawning training dummy - placed manually in editor
    UE_LOG(LogTemp, Warning, TEXT("Starting Hub ready - training dummies should be placed manually in editor"));

    if (PlayerCharacter)
    {
        PlayerCharacter->SetActorLocation(StartingHubLocation);
        UE_LOG(LogTemp, Warning, TEXT("Player spawned in starting hub"));
    }
}

void ASimplifiedArenaSystem::OnDoorOpened(AArenaDoor* Door)
{
    if (!Door || bInCombat)
    {
        return;
    }

    int32 ArenaNumber = Door->GetArenaNumber();

    if (ArenaNumber > 0 && ArenaNumber <= TotalArenas)
    {
        OnPlayerEnterArena(ArenaNumber);
    }
}

void ASimplifiedArenaSystem::OnPlayerEnterArena(int32 ArenaNumber)
{
    if (bInCombat || ArenaNumber <= 0 || ArenaNumber > TotalArenas)
    {
        return;
    }

    CurrentArenaNumber = ArenaNumber;
    bInCombat = true;

    DespawnPreviousEnemy();

    SpawnEnemyForArena(ArenaNumber);

    if (ArenaNumber - 1 >= 0 && ArenaNumber - 1 < ArenaRooms.Num())
    {
        FArenaRoom& Room = ArenaRooms[ArenaNumber - 1];
        if (Room.EntryDoor)
        {
            Room.EntryDoor->LockDoor();
        }

        // Set exit door to require combat clear
        if (Room.ExitDoor)
        {
            Room.ExitDoor->SetRequiresCombatClear(true);
        }
    }

    // No longer managing training dummies - they're placed manually
    // if (TrainingDummy)
    // {
    //     TrainingDummy->Destroy();
    //     TrainingDummy = nullptr;
    // }

    UE_LOG(LogTemp, Warning, TEXT("Player entered Arena %d - Combat started!"), ArenaNumber);
}

void ASimplifiedArenaSystem::SpawnEnemyForArena(int32 ArenaNumber)
{
    if (!EnemyClass || ArenaNumber <= 0 || ArenaNumber > ArenaRooms.Num())
    {
        return;
    }

    FArenaRoom& Room = ArenaRooms[ArenaNumber - 1];

    FActorSpawnParameters SpawnParams;
    SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

    CurrentEnemy = GetWorld()->SpawnActor<AArenaEnemy>(
        EnemyClass,
        Room.RoomLocation + FVector(0, 300, 0),
        FRotator(0, -90, 0),
        SpawnParams
    );

    if (CurrentEnemy)
    {
        CurrentEnemy->SetPhaseCount(ArenaNumber);
        Room.Enemy = CurrentEnemy;
        UE_LOG(LogTemp, Warning, TEXT("Spawned enemy for Arena %d with %d phases"), ArenaNumber, ArenaNumber);
    }
}

void ASimplifiedArenaSystem::OnEnemyDefeated(AArenaEnemy* Enemy)
{
    if (!Enemy || !bInCombat)
    {
        return;
    }

    bInCombat = false;

    // Clear combat requirement for the exit door
    if (CurrentArenaNumber > 0 && CurrentArenaNumber <= ArenaRooms.Num())
    {
        FArenaRoom& Room = ArenaRooms[CurrentArenaNumber - 1];
        if (Room.ExitDoor)
        {
            Room.ExitDoor->SetRequiresCombatClear(false);
        }
    }

    int32 FragmentReward = Enemy->CalculateFragmentReward();

    if (PlayerCharacter)
    {
        if (UFragmentComponent* FragmentComp = PlayerCharacter->FindComponentByClass<UFragmentComponent>())
        {
            FragmentComp->AddFragments(FragmentReward);
            UE_LOG(LogTemp, Warning, TEXT("Player earned %d fragments from Arena %d"), FragmentReward, CurrentArenaNumber);
        }
    }

    UnlockNextDoor();

    if (CurrentArenaNumber >= TotalArenas)
    {
        UE_LOG(LogTemp, Warning, TEXT("GAME COMPLETE! All %d arenas conquered!"), TotalArenas);
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("Arena %d complete! Proceed to the safe zone."), CurrentArenaNumber);
    }
}

void ASimplifiedArenaSystem::UnlockNextDoor()
{
    if (CurrentArenaNumber > 0 && CurrentArenaNumber <= ArenaRooms.Num())
    {
        FArenaRoom& Room = ArenaRooms[CurrentArenaNumber - 1];

        if (Room.ExitDoor)
        {
            Room.ExitDoor->SetRequiresCombatClear(false);
            Room.ExitDoor->UnlockDoor();
            UE_LOG(LogTemp, Warning, TEXT("Exit door unlocked for Arena %d"), CurrentArenaNumber);
        }

        if (CurrentArenaNumber < ArenaRooms.Num())
        {
            FArenaRoom& NextRoom = ArenaRooms[CurrentArenaNumber];
            if (NextRoom.EntryDoor)
            {
                NextRoom.EntryDoor->UnlockDoor();
                UE_LOG(LogTemp, Warning, TEXT("Entry door unlocked for Arena %d"), CurrentArenaNumber + 1);
            }
        }
    }
}

void ASimplifiedArenaSystem::DespawnPreviousEnemy()
{
    if (CurrentEnemy)
    {
        CurrentEnemy->Destroy();
        CurrentEnemy = nullptr;
        UE_LOG(LogTemp, Warning, TEXT("Previous enemy despawned"));
    }

    for (int32 i = 0; i < CurrentArenaNumber - 1 && i < ArenaRooms.Num(); i++)
    {
        if (ArenaRooms[i].Enemy && ArenaRooms[i].Enemy != CurrentEnemy)
        {
            ArenaRooms[i].Enemy->Destroy();
            ArenaRooms[i].Enemy = nullptr;
        }
    }
}

void ASimplifiedArenaSystem::OnPlayerExitArena(int32 ArenaNumber)
{
    UE_LOG(LogTemp, Warning, TEXT("Player exited Arena %d"), ArenaNumber);
}

bool ASimplifiedArenaSystem::IsArenaClear(int32 ArenaNumber) const
{
    // Starting hub and safe zones are always "clear"
    if (ArenaNumber == 0)
    {
        return true;
    }

    // Current arena is clear if not in combat
    if (ArenaNumber == CurrentArenaNumber)
    {
        return !bInCombat;
    }

    // Previous arenas are clear
    if (ArenaNumber < CurrentArenaNumber)
    {
        return true;
    }

    // Future arenas are not yet clear
    return false;
}