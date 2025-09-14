// Copyright Epic Games, Inc. All Rights Reserved.

#include "SecondWindCharacter.h"
#include "Engine/LocalPlayer.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/Controller.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"
#include "Components/CombatComponent.h"
#include "Components/HealthComponent.h"
#include "Components/BlockingComponent.h"
#include "Components/HackComponent.h"
#include "Components/HackUIComponent.h"
#include "Components/DodgeComponent.h"
#include "Components/CameraLockOnComponent.h"
#include "Components/FragmentComponent.h"
#include "GameModes/SecondWindArenaGameMode.h"

DEFINE_LOG_CATEGORY(LogTemplateCharacter);

//////////////////////////////////////////////////////////////////////////
// ASecondWindCharacter

ASecondWindCharacter::ASecondWindCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);
		
	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.0f, 0.0f); // ...at this rotation rate
	GetCharacterMovement()->bUseControllerDesiredRotation = false; // We'll handle rotation manually when locked on

	// Note: For faster iteration times these variables, and many more, can be tweaked in the Character Blueprint
	// instead of recompiling to adjust them
	GetCharacterMovement()->MaxWalkSpeed = 300.f;
	GetCharacterMovement()->MinAnalogWalkSpeed = 20.f;
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;
	GetCharacterMovement()->BrakingDecelerationFalling = 1500.0f;

	// Disable jumping
	GetCharacterMovement()->NavAgentProps.bCanJump = false;
	GetCharacterMovement()->NavAgentProps.bCanFly = false;
	JumpMaxCount = 0;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 400.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character)
	// are set in the derived blueprint asset named ThirdPersonCharacter (to avoid direct content references in C++)

	// Create combat component
	CombatComponent = CreateDefaultSubobject<UCombatComponent>(TEXT("CombatComponent"));

	// Create health component
	HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("HealthComponent"));

	// Create blocking component
	BlockingComponent = CreateDefaultSubobject<UBlockingComponent>(TEXT("BlockingComponent"));

	// Create dodge component
	DodgeComponent = CreateDefaultSubobject<UDodgeComponent>(TEXT("DodgeComponent"));

	// Create camera lock-on component
	CameraLockOnComponent = CreateDefaultSubobject<UCameraLockOnComponent>(TEXT("CameraLockOnComponent"));

	// Create hack component
	HackComponent = CreateDefaultSubobject<UHackComponent>(TEXT("HackComponent"));

	// Create hack UI component
	HackUIComponent = CreateDefaultSubobject<UHackUIComponent>(TEXT("HackUIComponent"));

	// Create fragment component
	FragmentComponent = CreateDefaultSubobject<UFragmentComponent>(TEXT("FragmentComponent"));

	// Link components
	if (CombatComponent && BlockingComponent)
	{
		CombatComponent->SetBlockingComponent(BlockingComponent);
	}
	if (HealthComponent && BlockingComponent)
	{
		HealthComponent->SetBlockingComponent(BlockingComponent);
	}
}

void ASecondWindCharacter::BeginPlay()
{
	Super::BeginPlay();
}

void ASecondWindCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Dynamically adjust rotation behavior based on lock-on state
	if (CameraLockOnComponent && GetCharacterMovement())
	{
		if (CameraLockOnComponent->IsLockedOn())
		{
			// Disable orient to movement when locked on
			// Character rotation will be handled by CameraLockOnComponent
			GetCharacterMovement()->bOrientRotationToMovement = false;
		}
		else
		{
			// Enable normal rotation when not locked on
			GetCharacterMovement()->bOrientRotationToMovement = true;
		}
	}
}

//////////////////////////////////////////////////////////////////////////
// Input

void ASecondWindCharacter::NotifyControllerChanged()
{
	Super::NotifyControllerChanged();

	// Add Input Mapping Context
	if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}
}

void ASecondWindCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent)) {
		
		// Attack
		EnhancedInputComponent->BindAction(AttackAction, ETriggerEvent::Started, this, &ASecondWindCharacter::Attack);

		// Block
		EnhancedInputComponent->BindAction(BlockAction, ETriggerEvent::Started, this, &ASecondWindCharacter::StartBlocking);
		EnhancedInputComponent->BindAction(BlockAction, ETriggerEvent::Completed, this, &ASecondWindCharacter::StopBlocking);

		// Dodge
		EnhancedInputComponent->BindAction(DodgeAction, ETriggerEvent::Started, this, &ASecondWindCharacter::Dodge);

		// Hack
		if (HackAction)
		{
			EnhancedInputComponent->BindAction(HackAction, ETriggerEvent::Started, this, &ASecondWindCharacter::PerformHack);
		}

		// Moving
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ASecondWindCharacter::Move);
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Completed, this, &ASecondWindCharacter::Move);

		// Looking
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &ASecondWindCharacter::Look);
	}
	else
	{
		UE_LOG(LogTemplateCharacter, Error, TEXT("'%s' Failed to find an Enhanced Input component! This template is built to use the Enhanced Input system. If you intend to use the legacy system, then you will need to update this C++ file."), *GetNameSafe(this));
	}

	// Debug keys removed - using physical room system
}

void ASecondWindCharacter::Move(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D MovementVector = Value.Get<FVector2D>();

	// Pass movement input to dodge component for tracking
	if (DodgeComponent)
	{
		DodgeComponent->HandleMovementInput(Value);
	}

	if (Controller != nullptr)
	{
		// Check if we're locked on and should use modified movement
		if (CameraLockOnComponent && CameraLockOnComponent->IsLockedOn())
		{
			// Use modified strafe movement when locked on
			FVector ModifiedInput = CameraLockOnComponent->GetModifiedMovementInput(FVector(MovementVector.Y, MovementVector.X, 0));
			AddMovementInput(ModifiedInput.GetSafeNormal(), ModifiedInput.Size());
		}
		else
		{
			// Normal movement when not locked on
			const FRotator Rotation = Controller->GetControlRotation();
			const FRotator YawRotation(0, Rotation.Yaw, 0);

			const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
			const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

			AddMovementInput(ForwardDirection, MovementVector.Y);
			AddMovementInput(RightDirection, MovementVector.X);
		}
	}
}

void ASecondWindCharacter::Look(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// When locked on, mouse only controls blocking direction, not camera
		if (CameraLockOnComponent && CameraLockOnComponent->IsLockedOn())
		{
			// Only update block direction when locked on
			if (BlockingComponent && BlockingComponent->IsBlocking())
			{
				BlockingComponent->UpdateBlockDirection(LookAxisVector.X);
			}
			// Don't add controller input - camera is controlled by lock-on
		}
		else
		{
			// Normal camera control when not locked on
			AddControllerYawInput(LookAxisVector.X);
			AddControllerPitchInput(LookAxisVector.Y);

			// Update block direction if blocking
			if (BlockingComponent && BlockingComponent->IsBlocking())
			{
				BlockingComponent->UpdateBlockDirection(LookAxisVector.X);
			}
		}
	}
}

void ASecondWindCharacter::Attack()
{
	// Check if we can perform a leap attack during dash
	if (DodgeComponent && DodgeComponent->CanPerformLeapAttack())
	{
		DodgeComponent->PerformLeapAttack();
		return;
	}

	// Check if we're in a counter window
	if (DodgeComponent && DodgeComponent->IsInCounterWindow() && CombatComponent)
	{
		// Perform counter-attack
		CombatComponent->PerformAttack();
		UE_LOG(LogTemplateCharacter, Log, TEXT("Performing counter-attack from dodge"));
		return;
	}

	// Normal attack
	if (CombatComponent)
	{
		CombatComponent->PerformAttack();
		UE_LOG(LogTemplateCharacter, Log, TEXT("Performing attack"));
	}
}

void ASecondWindCharacter::StartBlocking()
{
	if (BlockingComponent && !CombatComponent->CanAttack())
	{
		return;
	}

	if (BlockingComponent)
	{
		BlockingComponent->StartBlocking();
		UE_LOG(LogTemplateCharacter, Log, TEXT("Started blocking"));
	}
}

void ASecondWindCharacter::StopBlocking()
{
	if (BlockingComponent)
	{
		BlockingComponent->StopBlocking();
		UE_LOG(LogTemplateCharacter, Log, TEXT("Stopped blocking"));
	}
}

void ASecondWindCharacter::Dodge()
{
	if (DodgeComponent)
	{
		DodgeComponent->HandleDodgeInput();
	}
}

void ASecondWindCharacter::TryLeapAttack()
{
	if (DodgeComponent && DodgeComponent->CanPerformLeapAttack())
	{
		DodgeComponent->PerformLeapAttack();
	}
}

void ASecondWindCharacter::PerformHack()
{
	if (HackComponent)
	{
		if (HackComponent->TryExecuteHack())
		{
			UE_LOG(LogTemp, Warning, TEXT("Hack attack executed successfully!"));
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Cannot execute hack - not enough counters (%d/%d)"),
				HackComponent->GetCurrentCounters(), HackComponent->GetRequiredCounters());
		}
	}
}

// Debug functions removed - using physical room system
