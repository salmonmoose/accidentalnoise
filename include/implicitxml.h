#ifndef IMPLICIT_XML_H
#define IMPLICIT_XML_H
#include "anl.h"
#include <iostream>
#include <memory>
#include "pugixml.hpp"

namespace anl
{
    class CImplicitSequence;
    
    class CImplicitXML
    {
    	private:
    	public:
    		CImplicitXML(){};
    		~CImplicitXML(){};

            pugi::xml_document config;
            pugi::xml_node data;

            CImplicitSequence * mCImplicitSequence;

    		void loadFile(const char * filename);
            void setupNoise();

    		double get(double x, double y);
    		double get(double x, double y, double z);
    		double get(double x, double y, double z, double w);
    		double get(double x, double y, double z, double w, double u, double v);
	};
};

#endif