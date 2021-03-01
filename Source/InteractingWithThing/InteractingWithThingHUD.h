// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "InteractingWithThingHUD.generated.h"

UCLASS()
class AInteractingWithThingHUD : public AHUD
{
	GENERATED_BODY()

public:
	AInteractingWithThingHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

