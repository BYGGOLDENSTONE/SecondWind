#include "SafeZoneCorridor.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "../SecondWindCharacter.h"
#include "../Components/HealthComponent.h"
#include "../Components/MemoryShopComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"

ASafeZoneCorridor::ASafeZoneCorridor()
{
    PrimaryActorTick.bCanEverTick = false;

    RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

    CorridorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CorridorMesh"));
    CorridorMesh->SetupAttachment(RootComponent);

    CorridorTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("CorridorTrigger"));
    CorridorTrigger->SetupAttachment(RootComponent);
    CorridorTrigger->SetBoxExtent(CorridorExtent);
    CorridorTrigger->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
    CorridorTrigger->SetCollisionResponseToAllChannels(ECR_Ignore);
    CorridorTrigger->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);

    MemoryShopComponent = CreateDefaultSubobject<UMemoryShopComponent>(TEXT("MemoryShopComponent"));
}

void ASafeZoneCorridor::BeginPlay()
{
    Super::BeginPlay();

    CorridorTrigger->OnComponentBeginOverlap.AddDynamic(this, &ASafeZoneCorridor::OnCorridorEnter);
    CorridorTrigger->OnComponentEndOverlap.AddDynamic(this, &ASafeZoneCorridor::OnCorridorExit);

    PlayerCharacter = Cast<ASecondWindCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
}

void ASafeZoneCorridor::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void ASafeZoneCorridor::OnCorridorEnter(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
    UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    if (OtherActor && OtherActor == PlayerCharacter)
    {
        bPlayerInside = true;
        OnPlayerEnterCorridor();
    }
}

void ASafeZoneCorridor::OnCorridorExit(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
    UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
    if (OtherActor && OtherActor == PlayerCharacter)
    {
        bPlayerInside = false;
        OnPlayerExitCorridor();
    }
}

void ASafeZoneCorridor::OnPlayerEnterCorridor()
{
    UE_LOG(LogTemp, Warning, TEXT("Player entered Safe Zone Corridor %d"), CorridorNumber);

    if (PlayerCharacter)
    {
        if (UHealthComponent* HealthComp = PlayerCharacter->FindComponentByClass<UHealthComponent>())
        {
            HealthComp->HealToFull();
            UE_LOG(LogTemp, Warning, TEXT("Player healed to full health in safe zone"));
        }
    }

    if (bIsMarketplace)
    {
        UE_LOG(LogTemp, Warning, TEXT("Welcome to the Marketplace! Upgrade your abilities here."));

        if (MemoryShopComponent)
        {
            MemoryShopComponent->OpenMemoryShop();
        }
    }
}

void ASafeZoneCorridor::OnPlayerExitCorridor()
{
    UE_LOG(LogTemp, Warning, TEXT("Player left Safe Zone Corridor %d"), CorridorNumber);

    if (MemoryShopComponent && MemoryShopComponent->IsShopOpen())
    {
        MemoryShopComponent->CloseMemoryShop();
    }
}