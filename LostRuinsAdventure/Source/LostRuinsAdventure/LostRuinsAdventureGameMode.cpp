// Copyright Epic Games, Inc. All Rights Reserved.

#include "LostRuinsAdventureGameMode.h"
#include "LostRuinsAdventureCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALostRuinsAdventureGameMode::ALostRuinsAdventureGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
