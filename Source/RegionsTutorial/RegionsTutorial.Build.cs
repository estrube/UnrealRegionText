// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class RegionsTutorial : ModuleRules
{
	public RegionsTutorial(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
