// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Project_HelsingHUD.generated.h"

UCLASS()
class AProject_HelsingHUD : public AHUD
{
	GENERATED_BODY()

public:
	AProject_HelsingHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

