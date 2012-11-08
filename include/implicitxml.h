#ifndef IMPLICIT_XML_H
#define IMPLICIT_XML_H
#include <iostream>
#include <memory>
#include "pugixml.hpp"
#include "anl.h"

#include "implicitmodulebase.h"


namespace anl
{
    enum EInputTypes
    {
        INT,
        ENUM,
        DOUBLE,
        NOISE
    };

    class CImplicitXML : public CImplicitModuleBase 
    {
    	private:
    	public:
    		CImplicitXML();
    		CImplicitXML(const char * filename);
    		~CImplicitXML();

    		pugi::xml_document config;
    		pugi::xml_node data;

    		anl::CImplicitModuleBase * tmp;
            anl::CImplicitModuleBase * value;
            anl::CImplicitModuleBase * render;

            static std::map<std::string, EInputTypes> InputMap;
            static std::map<std::string, unsigned int> ENUMMap;

            bool renderNode;

    		void loadFile(const char * filename);
            void setupNoise();

    		double get(double x, double y);
    		double get(double x, double y, double z);
    		double get(double x, double y, double z, double w);
    		double get(double x, double y, double z, double w, double u, double v);
 
    		std::map<std::string, std::unique_ptr<CImplicitModuleBase>> noiseTree;
            std::map<std::string, std::unique_ptr<CImplicitModuleBase>>::iterator noiseTreeIterator;

            std::map<std::string, CCellularGenerator> cellularTree;
	};
};

#endif