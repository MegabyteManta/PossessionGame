// Copyright Epic Games, Inc. All Rights Reserved.

#include "PossessionGameGameMode.h"
#include "PossessionGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

APossessionGameGameMode::APossessionGameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
