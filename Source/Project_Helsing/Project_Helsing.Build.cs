// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Project_Helsing : ModuleRules
{
	public Project_Helsing(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
