// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class SecondWind : ModuleRules
{
	public SecondWind(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
