// Fill out your copyright notice in the Description page of Project Settings.


#include "TriggerRegion.h"

ATriggerRegion::ATriggerRegion()
{
	regionName = "None";

	OnActorBeginOverlap.AddDynamic(this, &ATriggerRegion::EnteredRegion);
}

void ATriggerRegion::EnteredRegion(class AActor* overlappedActor, class AActor* otherActor)
{
	if (otherActor && otherActor != this)
	{
		GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, regionName);
		TArray<UUserWidget*> foundWidgets;
		UWidgetBlueprintLibrary::GetAllWidgetsOfClass(GetWorld(), foundWidgets, URegionDisplay::StaticClass());
		if (foundWidgets.Num() > 0)
		{
			regionWidgetInstance = Cast<URegionDisplay>(foundWidgets[0]);
			if (regionWidgetInstance)
			{
				regionWidgetInstance->SetName(regionName);
			}
		}
	}
}