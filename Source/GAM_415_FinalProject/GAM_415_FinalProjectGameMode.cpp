// Copyright Epic Games, Inc. All Rights Reserved.

#include "GAM_415_FinalProjectGameMode.h"
#include "GAM_415_FinalProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGAM_415_FinalProjectGameMode::AGAM_415_FinalProjectGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
