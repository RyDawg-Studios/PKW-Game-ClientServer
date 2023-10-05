// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class PkmnWorld_4_27EditorTarget : TargetRules
{
	public PkmnWorld_4_27EditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;

		ExtraModuleNames.AddRange( new string[] { "PkmnWorld_4_27" } );

        if (Target.Platform == UnrealTargetPlatform.Mac)
        {
            // fix error: "variable 'LayerNames' set but not used"
            bOverrideBuildEnvironment = true;
            AdditionalCompilerArguments = "-Wno-unused-but-set-variable";
        }
    }
}
