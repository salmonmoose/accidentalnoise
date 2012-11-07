#ifndef CELLULAR_FACTORY_H
#define CELLULAR_FACTORY_H
#include "factory.h"
#include "cellulargen.h"
struct cellular_factory : generic_factory<std::string, anl::CCellularGenerator> {
	static cellular_factory & instance()
	{
		static cellular_factory sInstance;
		return sInstance;
	}
};
#endif