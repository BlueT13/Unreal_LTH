// Copyright Epic Games, Inc. All Rights Reserved.

#include "Unreal_LTHGameMode.h"
#include "Unreal_LTHCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnreal_LTHGameMode::AUnreal_LTHGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
