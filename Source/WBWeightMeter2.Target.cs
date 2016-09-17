
using UnrealBuildTool;
using System.Collections.Generic;

public class WBWeightMeter2Target : TargetRules
{
	public WBWeightMeter2Target( TargetInfo Target )
	{
		Type= TargetType.Game;
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
