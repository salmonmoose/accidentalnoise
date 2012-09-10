#ifndef NOISE_FACTORY_H
#define NOISE_FACTORY_H
#include "factory.h"
#include "implicitmodulebase.h"
struct noise_factory : generic_factory<std::string, anl::CImplicitModuleBase> {
    static noise_factory & instance()
    {
    	static noise_factory sInstance;
    	return sInstance;
    }
};
#endif