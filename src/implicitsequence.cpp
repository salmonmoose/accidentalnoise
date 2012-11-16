#include "implicitsequence.h"

namespace anl
{
	CImplicitSequence::CImplicitSequence()
	{
		
	}

	void CImplicitSequence::RegisterTypes()
	{
		renderNode = false;
		bool AutoCorrect_r = anl::CImplicitModuleFactory::instance().register_type<anl::CImplicitAutoCorrect>("AutoCorrect");
		bool BasisFunction_r = anl::CImplicitModuleFactory::instance().register_type<anl::CImplicitBasisFunction>("BasisFunction");
		//bool Bias_r = anl::CImplicitModuleFactory::instance().register_type<anl::CImplicitBias>("Bias");
		bool Blend_r = anl::CImplicitModuleFactory::instance().register_type<anl::CImplicitBlend>("Blend");
		bool BrightContrast_r = anl::CImplicitModuleFactory::instance().register_type<anl::CImplicitBrightContrast>("BrightContrast");
		bool Cache_r = anl::CImplicitModuleFactory::instance().register_type<anl::CImplicitCache>("Cache");
		bool Cellular_r = anl::CImplicitModuleFactory::instance().register_type<anl::CImplicitCellular>("Cellular");
		//bool Clamp_r = anl::CImplicitModuleFactory::instance().register_type<anl::CImplicitClamp>("Clamp");
		//bool Combiner_r = anl::CImplicitModuleFactory::instance().register_type<anl::CImplicitCombiner>("Combiner");
		bool Constant_r = anl::CImplicitModuleFactory::instance().register_type<anl::CImplicitConstant>("Constant");
		bool Cos_r = anl::CImplicitModuleFactory::instance().register_type<anl::CImplicitCos>("Cos");
		bool ExtractRGBAChannel_r = anl::CImplicitModuleFactory::instance().register_type<anl::CImplicitExtractRGBAChannel>("ExtractRGBAChannel");
		bool Floor_r = anl::CImplicitModuleFactory::instance().register_type<anl::CImplicitFloor>("Floor");
		bool Fractal_r = anl::CImplicitModuleFactory::instance().register_type<anl::CImplicitFractal>("Fractal");
		bool FunctionGradient_r = anl::CImplicitModuleFactory::instance().register_type<anl::CImplicitFunctionGradient>("FunctionGradient");
		//bool Gain_r = anl::CImplicitModuleFactory::instance().register_type<anl::CImplicitGain>("Gain");
		bool Gradient_r = anl::CImplicitModuleFactory::instance().register_type<anl::CImplicitGradient>("Gradient");
		bool Invert_r = anl::CImplicitModuleFactory::instance().register_type<anl::CImplicitInvert>("Invert");
		bool Pow_r = anl::CImplicitModuleFactory::instance().register_type<anl::CImplicitPow>("Pow");
		bool RGBADotProduct_r = anl::CImplicitModuleFactory::instance().register_type<anl::CImplicitRGBADotProduct>("RGBADotProduct");
		//bool RotateDomain_r = anl::CImplicitModuleFactory::instance().register_type<anl::CImplicitRotateDomain>("RotateDomain");
		bool ScaleDomain_r = anl::CImplicitModuleFactory::instance().register_type<anl::CImplicitScaleDomain>("ScaleDomain");
		bool ScaleOffset_r = anl::CImplicitModuleFactory::instance().register_type<anl::CImplicitScaleOffset>("ScaleOffset");
		bool Select_r = anl::CImplicitModuleFactory::instance().register_type<anl::CImplicitSelect>("Select");
		bool Sin_r = anl::CImplicitModuleFactory::instance().register_type<anl::CImplicitSin>("Sin");
		bool Sphere_r = anl::CImplicitModuleFactory::instance().register_type<anl::CImplicitSphere>("Sphere");
		bool Tiers_r = anl::CImplicitModuleFactory::instance().register_type<anl::CImplicitTiers>("Tiers");
		bool TranslateDomain_r = anl::CImplicitModuleFactory::instance().register_type<anl::CImplicitTranslateDomain>("TranslateDomain");
	}

    std::map<std::string, EInputTypes> CImplicitSequence::InputMap = {
    	{"Int", INT},
    	{"Enum", ENUM},
    	{"Double", DOUBLE},
    	{"Noise", NOISE}
    };

    std::map<std::string, unsigned int> CImplicitSequence::ENUMMap = {
    	{"FBM", FBM},
    	{"RIDGEDMULTI", RIDGEDMULTI},
    	{"BILLOW", BILLOW},
    	{"MULTI", MULTI},
    	{"HYBRIDMULTI", HYBRIDMULTI},
    	{"ADD", ADD},
    	{"MULT", MULT},
    	{"MAX", MAX},
    	{"MIN", MIN},
    	{"AVG", AVG},
    	{"VALUE", VALUE},
    	{"GRADIENT", GRADIENT},
    	{"GRADVAL", GRADVAL},
    	{"SIMPLEX", SIMPLEX},
    	{"WHITE", WHITE},
    	{"NONE", NONE},
    	{"LINEAR", LINEAR},
    	{"CUBIC", CUBIC},
    	{"QUINTIC", QUINTIC}
    };

    void CImplicitSequence::AddLayer(std::string type, std::string name)
    {
    	noiseTree.insert(
    		std::pair<std::string, std::unique_ptr<anl::CImplicitModuleBase>>(
				name,
				std::unique_ptr<anl::CImplicitModuleBase>(anl::CImplicitModuleFactory::instance().build_object(type))
			)
		);
    }

    void CImplicitSequence::SetAttribute(std::string layer, std::string attribute, std::string type, std::string value)
    {
    	noiseTreeIterator = noiseTree.find(layer);

    	if(noiseTreeIterator != noiseTree.end())
    	{
    		switch(InputMap.find(type)->second)
    		{
    			case INT:
    			{
    				(*noiseTreeIterator).second.get()->setIntInput(attribute, atoi(value.c_str()));
    			}
    			break;
    			case ENUM:
    			{
    				(*noiseTreeIterator).second.get()->setIntInput(attribute, ENUMMap.find(value)->second);
    			}
    			break;
    			case NOISE:
    			{
    				tmp = noiseTree.find(value)->second.get();
    				(*noiseTreeIterator).second.get()->setNoiseInput(attribute, tmp);
    			}
    			break;
    			case DOUBLE:
    			default:
    			{
    				(*noiseTreeIterator).second.get()->setDoubleInput(attribute, atof(value.c_str()));
    			}
    			break;
    		}
    	}
    }

    void CImplicitSequence::SetRenderNode(std::string layer)
    {
    	render = noiseTree.find(layer)->second.get();
    	if(render)
    	{
    		renderNode = true;
    	}
    }

	double CImplicitSequence::get(double x, double y) {
		if(renderNode) {
			return render->get(x,y);
		} else {
			return 0.0;
		}
	}

	double CImplicitSequence::get(double x, double y, double z) {
		if(renderNode) {
			return render->get(x,y,z);
		} else {
			return 0.0;
		}
	}

	double CImplicitSequence::get(double x, double y, double z, double w) {
		if(renderNode) {
			return render->get(x,y,z,w);
		} else {
			return 0.0;
		}
	}

	double CImplicitSequence::get(double x, double y, double z, double w, double u, double v) {
		if(renderNode) {
			return render->get(x,y,z,w,u,v);
		} else {
			return 0.0;
		}
	}
}