
using UnrealBuildTool;
using System.Collections.Generic;

public class WBWeightMeter2EditorTarget : TargetRules
{
	public WBWeightMeter2EditorTarget( TargetInfo Target )
	{
		Type= TargetType.Editor;
	}

	public override void SetupBinaries(
		TargetInfo Target,
		ref List<UEBuildBinaryConfiguration> OutBuildBinaryConfigurations,
		ref List<string> OutExtraModuleNames
		)
	{
		OutExtraModuleNames.AddRange( new string[] { "WBWeightMeter2" } );
	}
}
