// Copyright Epic Games, Inc. All Rights Reserved.

#include "WlasterGameMode.h"
#include "WlasterCharacter.h"
#include "UObject/ConstructorHelpers.h"

AWlasterGameMode::AWlasterGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
