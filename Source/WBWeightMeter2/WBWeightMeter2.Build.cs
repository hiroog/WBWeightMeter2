
using UnrealBuildTool;

public class	WBWeightMeter2 : ModuleRules
{
	public	WBWeightMeter2( TargetInfo Target )
	{
		PublicDependencyModuleNames.AddRange( new string[]{
				"Core",
				"CoreUObject",
				"Engine",
				"InputCore"
			}
		);
		PrivateDependencyModuleNames.AddRange( new string[]{
			}
		);
	}
}

