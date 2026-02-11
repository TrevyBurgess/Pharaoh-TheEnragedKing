// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TheEnragedKing : ModuleRules
{
	public TheEnragedKing(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"TheEnragedKing",
			"TheEnragedKing/Variant_Platforming",
			"TheEnragedKing/Variant_Platforming/Animation",
			"TheEnragedKing/Variant_Combat",
			"TheEnragedKing/Variant_Combat/AI",
			"TheEnragedKing/Variant_Combat/Animation",
			"TheEnragedKing/Variant_Combat/Gameplay",
			"TheEnragedKing/Variant_Combat/Interfaces",
			"TheEnragedKing/Variant_Combat/UI",
			"TheEnragedKing/Variant_SideScrolling",
			"TheEnragedKing/Variant_SideScrolling/AI",
			"TheEnragedKing/Variant_SideScrolling/Gameplay",
			"TheEnragedKing/Variant_SideScrolling/Interfaces",
			"TheEnragedKing/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
