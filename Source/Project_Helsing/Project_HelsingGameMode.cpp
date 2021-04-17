// Copyright Epic Games, Inc. All Rights Reserved.

#include "Project_HelsingGameMode.h"
#include "Project_HelsingHUD.h"
#include "Project_HelsingCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProject_HelsingGameMode::AProject_HelsingGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FPSChar"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AProject_HelsingHUD::StaticClass();
}
