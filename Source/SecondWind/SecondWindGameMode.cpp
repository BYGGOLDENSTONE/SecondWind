// Copyright Epic Games, Inc. All Rights Reserved.

#include "SecondWindGameMode.h"
#include "SecondWindCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASecondWindGameMode::ASecondWindGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
