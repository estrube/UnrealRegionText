// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "RegionDisplay.h"
#include "Blueprint/WidgetBlueprintLibrary.h"
#include "Engine/TriggerBox.h"
#include "TriggerRegion.generated.h"

/**
 * 
 */
UCLASS()
class REGIONSTUTORIAL_API ATriggerRegion : public ATriggerBox
{
	GENERATED_BODY()

public:
	ATriggerRegion();

	UFUNCTION()
		void EnteredRegion(class AActor* overlappedActor, class AActor* otherActor);

	UPROPERTY(EditAnywhere)
		FString regionName;

	UPROPERTY()
		URegionDisplay* regionWidgetInstance;
	
};
