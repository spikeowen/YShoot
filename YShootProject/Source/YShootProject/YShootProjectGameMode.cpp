// Copyright Epic Games, Inc. All Rights Reserved.

#include "YShootProjectGameMode.h"
#include "YShootProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AYShootProjectGameMode::AYShootProjectGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
