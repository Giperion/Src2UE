// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Src2UE : ModuleRules
{
	public Src2UE(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
