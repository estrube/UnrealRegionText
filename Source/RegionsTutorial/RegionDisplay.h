// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/TextBlock.h"
#include "Blueprint/UserWidget.h"
#include "RegionDisplay.generated.h"

/**
 * 
 */
UCLASS()
class REGIONSTUTORIAL_API URegionDisplay : public UUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
		void SetName(FString name);

protected:
	void NativeConstruct() override;

	UPROPERTY(meta = (BindWidget))
		UTextBlock* regionName;
	
};
