// Copyright Epic Games, Inc. All Rights Reserved.

#include "TestGameGameMode.h"
#include "TestGameHUD.h"
#include "TestGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATestGameGameMode::ATestGameGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATestGameHUD::StaticClass();
}
