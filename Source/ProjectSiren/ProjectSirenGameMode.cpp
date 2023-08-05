// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjectSirenGameMode.h"
#include "ProjectSirenCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProjectSirenGameMode::AProjectSirenGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
