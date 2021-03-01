// Copyright Epic Games, Inc. All Rights Reserved.

#include "InteractingWithThingGameMode.h"
#include "InteractingWithThingHUD.h"
#include "InteractingWithThingCharacter.h"
#include "UObject/ConstructorHelpers.h"

AInteractingWithThingGameMode::AInteractingWithThingGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AInteractingWithThingHUD::StaticClass();
}
