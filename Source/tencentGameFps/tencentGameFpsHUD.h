// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "tencentGameFpsHUD.generated.h"

UCLASS()
class AtencentGameFpsHUD : public AHUD
{
	GENERATED_BODY()

public:
	AtencentGameFpsHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

