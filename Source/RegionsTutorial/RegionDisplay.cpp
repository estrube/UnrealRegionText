// Fill out your copyright notice in the Description page of Project Settings.


#include "RegionDisplay.h"

void URegionDisplay::NativeConstruct()
{
	Super::NativeConstruct();

	regionName->SetText(FText::FromString("None"));
}

void URegionDisplay::SetName(FString name)
{
	regionName->SetText(FText::FromString(name));
}