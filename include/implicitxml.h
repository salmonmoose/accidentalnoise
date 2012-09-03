#ifndef IMPLICIT_XML_H
#define IMPLICIT_XML_H
#include <iostream>
#include "pugixml.hpp"
#include "anl.h"

#include "implicitmodulebase.h"

namespace anl
{
    enum ENoiseTypes
    {
        NT_AUTOCORRECT,
        NT_BASISFUNCTION,
        NT_BIAS,
        NT_BLEND,
        NT_BRIGHTCONTRAST,
        NT_CACHE,
        NT_CELLULAR,
        NT_CLAMP,
        NT_COMBINER,
        NT_CONSTANT,
        NT_COS,
        NT_EXTRACTRGBACHANNEL,
        NT_FLOOR,
        NT_FRACTAL,
        NT_FUNCTIONGRADIENT,
        NT_GAIN,
        NT_GRADIENT,
        NT_INVERT,
        NT_POW,
        NT_RGBADOTPRODUCT,
        NT_ROTATEDOMAIN,
        NT_SCALEDOMAIN,
        NT_SCALEOFFSET,
        NT_SELECT,
        NT_SIN,
        NT_SPHERE,
        NT_TIERS,
        NT_TRANSLATEDDOMAIN,
    };

	class CImplicitXML : public CImplicitModuleBase 
    {
    	private:
    	public:
    		CImplicitXML();
    		CImplicitXML(const char * filename);
    		~CImplicitXML();

            static std::map<std::string, ENoiseTypes> NoiseMap;



    		pugi::xml_document config;
    		pugi::xml_node data;

    		anl::CImplicitModuleBase * tmp;
            anl::CImplicitModuleBase * render;

    		void loadFile(const char * filename);
            void setupNoise();

    		double get(double x, double y);
    		double get(double x, double y, double z);
    		double get(double x, double y, double z, double w);
    		double get(double x, double y, double z, double w, double u, double v);

            anl::CImplicitAutoCorrect AutoCorrect(pugi::xml_node input);
            anl::CImplicitBasisFunction BasisFunction(pugi::xml_node input);
            anl::CImplicitBias Bias(pugi::xml_node input);
            anl::CImplicitBlend Blend(pugi::xml_node input);
            anl::CImplicitBrightContrast BrightContrast(pugi::xml_node input);
            anl::CImplicitCache Cache(pugi::xml_node input);
            anl::CImplicitCellular Cellular(pugi::xml_node input);
            anl::CImplicitClamp Clamp(pugi::xml_node input);
            anl::CImplicitCombiner Combiner(pugi::xml_node input);
            anl::CImplicitConstant Constant(pugi::xml_node input);
            anl::CImplicitCos Cos(pugi::xml_node input);
            anl::CImplicitExtractRGBAChannel ExtractRGBAChannel(pugi::xml_node input);
            anl::CImplicitFloor Floor(pugi::xml_node input);
            anl::CImplicitFractal Fractal(pugi::xml_node input);
            anl::CImplicitFunctionGradient FunctionGradient(pugi::xml_node input);
            anl::CImplicitGain Gain(pugi::xml_node input);
            anl::CImplicitGradient Gradient(pugi::xml_node input);
            anl::CImplicitInvert Invert(pugi::xml_node input);
            anl::CImplicitPow Pow(pugi::xml_node input);
            anl::CImplicitRGBADotProduct RGBADotProduct(pugi::xml_node input);
            anl::CImplicitRotateDomain RotateDomain(pugi::xml_node input);
            anl::CImplicitScaleDomain ScaleDomain(pugi::xml_node input);
            anl::CImplicitScaleOffset ScaleOffset(pugi::xml_node input);
            anl::CImplicitSelect Select(pugi::xml_node input);
            anl::CImplicitSin Sin(pugi::xml_node input);
            anl::CImplicitSphere Sphere(pugi::xml_node input);
            anl::CImplicitTiers Tiers(pugi::xml_node input);
            anl::CImplicitTranslateDomain TranslateDomain(pugi::xml_node input);

    		std::map<std::string, anl::CImplicitModuleBase *> noiseTree;
    		std::map<std::string, anl::CImplicitModuleBase *> :: iterator noiseIterator;
	};
};

#endif