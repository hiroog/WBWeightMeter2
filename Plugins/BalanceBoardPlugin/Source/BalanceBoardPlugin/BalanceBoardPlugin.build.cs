// 2016 Hiroyuki Ogasawara
// vim:ts=4 sw=4 noet:

namespace UnrealBuildTool.Rules
{
	public class BalanceBoardPlugin : ModuleRules
	{
		public BalanceBoardPlugin( TargetInfo Target )
		{
			string	BBOARD_LIB_PATH= System.Environment.GetEnvironmentVariable( "BBOARD_LIB_PATH" );
			if( BBOARD_LIB_PATH == null ){
				Log.TraceWarning( "BBOARD_LIB_PATH environment variable is null" );
			}

			PublicIncludePaths.AddRange( new string[] {
					"BalanceBoardPlugin",
				} );
			PrivateIncludePaths.AddRange( new string[] {
				} );

			PublicDependencyModuleNames.AddRange( new string[] {
					"Core",
					"CoreUObject",
					"Engine",
				} );
			PrivateDependencyModuleNames.AddRange( new string[] {
				} );

			DynamicallyLoadedModuleNames.AddRange( new string[] {
				} );

			string	platform_name= "x64";
			if( Target.Platform == UnrealTargetPlatform.Win64 ){
			}
			if( Target.Platform == UnrealTargetPlatform.Win32 ){
				platform_name= "Win32";
			}

			PublicLibraryPaths.AddRange( new string[] {
					System.IO.Path.Combine( BBOARD_LIB_PATH , "lib/" + platform_name + "/Release" )
				} );

			PublicAdditionalLibraries.AddRange( new string[] {
					"bboardlib.lib",
					"Bthprops.lib"
				} );

			PublicSystemIncludePaths.AddRange( new string[] {
					System.IO.Path.Combine( BBOARD_LIB_PATH , "src" ),
				} );
		}
	}
}


