// Copyright Epic Games, Inc. All Rights Reserved.

#include "RegionsTutorialGameMode.h"
#include "RegionsTutorialCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARegionsTutorialGameMode::ARegionsTutorialGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
