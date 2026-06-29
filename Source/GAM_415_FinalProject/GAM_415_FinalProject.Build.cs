// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GAM_415_FinalProject : ModuleRules
{
	public GAM_415_FinalProject(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
