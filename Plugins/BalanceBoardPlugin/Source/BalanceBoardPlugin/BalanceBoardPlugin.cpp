// 2016 Hiroyuki Ogasawara

#include	"BalanceBoardPluginPrivatePCH.h"
#include	"IBalanceBoardPlugin.h"


class FBalanceBoardPlugin : public IBalanceBoardPlugin {

	virtual void	StartupModule() override
	{
		WBLibAPI::Initialize();
	}

	virtual void	ShutdownModule() override
	{
		WBLibAPI::Finalize();
	}

};


IMPLEMENT_MODULE( FBalanceBoardPlugin, BalanceBoardPlugin )

