// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Widgets/EquipmentWidget.h"
#include "MainHUD.generated.h"

/**
 * 
 */
UCLASS()
class PIXELGAME_API AMainHUD : public AHUD
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<UEquipmentWidget> WidgetClass;

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	class UEquipmentWidget* EquipmentWidget;
};
