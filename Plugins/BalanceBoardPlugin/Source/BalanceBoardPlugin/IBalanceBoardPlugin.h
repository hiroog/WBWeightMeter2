// 2016 Hiroyuki Ogasawara

#pragma once

#include	"ModuleManager.h"



class IBalanceBoardPlugin : public IModuleInterface {
public:
	static IBalanceBoardPlugin&	Get()
	{
		return	FModuleManager::LoadModuleChecked<IBalanceBoardPlugin>( "BalanceBoardPlugin" );
	}
	static inline bool	IsAvailable()
	{
		return	FModuleManager::Get().IsModuleLoaded( "BalanceBoardPlugin" );
	}
};


