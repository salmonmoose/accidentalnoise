#ifndef IMPLICIT_XML_H
#define IMPLICIT_XML_H
#include <iostream>
#include "pugixml.hpp"
#include "anl.h"

#include "implicitmodulebase.h"

namespace anl
{
	class CImplicitXML : public CImplicitModuleBase 
    {
    	private:
    	public:
    		CImplicitXML();
    		CImplicitXML(char * filename);
    		~CImplicitXML();

    		pugi::xml_document config;
    		pugi::xml_node data;

    		anl::CImplicitModuleBase * tmp;

    		void loadFile(char * filename);
            void setupNoise();

    		double get(double x, double y);
    		double get(double x, double y, double z);
    		double get(double x, double y, double z, double w);
    		double get(double x, double y, double z, double w, double u, double v);

    		std::map<std::string, anl::CImplicitModuleBase *> noiseTree;
    		std::map<std::string, anl::CImplicitModuleBase *> :: iterator noiseIterator;
	};
};

#endif