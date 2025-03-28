// Copyright Epic Games, Inc. All Rights Reserved.

#include "TheEnragedKingGameMode.h"
#include "TheEnragedKingCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATheEnragedKingGameMode::ATheEnragedKingGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
