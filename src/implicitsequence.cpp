#include "implicitsequence.h"

namespace anl
{
	CImplicitSequence::CImplicitSequence()
	{
        RegisterTypes();
	}

	void CImplicitSequence::RegisterTypes()
	{
		renderNode = false;

        mCImplicitModuleFactory = new generic_factory<std::string, anl::CImplicitModuleBase>();

        mCImplicitModuleFactory->register_type<anl::CImplicitAutoCorrect>("AutoCorrect");
        mCImplicitModuleFactory->register_type<anl::CImplicitBasisFunction>("BasisFunction");
        mCImplicitModuleFactory->register_type<anl::CImplicitBlend>("Blend");
        mCImplicitModuleFactory->register_type<anl::CImplicitBrightContrast>("BrightContrast");
        mCImplicitModuleFactory->register_type<anl::CImplicitCache>("Cache");
        mCImplicitModuleFactory->register_type<anl::CImplicitCellular>("Cellular");
        mCImplicitModuleFactory->register_type<anl::CImplicitConstant>("Constant");
        mCImplicitModuleFactory->register_type<anl::CImplicitCos>("Cos");
        mCImplicitModuleFactory->register_type<anl::CImplicitExtractRGBAChannel>("ExtractRGBAChannel");
        mCImplicitModuleFactory->register_type<anl::CImplicitFloor>("Floor");
        mCImplicitModuleFactory->register_type<anl::CImplicitFractal>("Fractal");
        mCImplicitModuleFactory->register_type<anl::CImplicitFunctionGradient>("FunctionGradient");
        mCImplicitModuleFactory->register_type<anl::CImplicitGradient>("Gradient");
        mCImplicitModuleFactory->register_type<anl::CImplicitGrid>("Grid");
        mCImplicitModuleFactory->register_type<anl::CImplicitInvert>("Invert");
        mCImplicitModuleFactory->register_type<anl::CImplicitJulia>("Julia");
        mCImplicitModuleFactory->register_type<anl::CImplicitPow>("Pow");
        mCImplicitModuleFactory->register_type<anl::CImplicitRGBADotProduct>("RGBADotProduct");
		mCImplicitModuleFactory->register_type<anl::CImplicitScaleDomain>("ScaleDomain");
		mCImplicitModuleFactory->register_type<anl::CImplicitScaleOffset>("ScaleOffset");
		mCImplicitModuleFactory->register_type<anl::CImplicitSelect>("Select");
		mCImplicitModuleFactory->register_type<anl::CImplicitSin>("Sin");
		mCImplicitModuleFactory->register_type<anl::CImplicitSphere>("Sphere");
		mCImplicitModuleFactory->register_type<anl::CImplicitTiers>("Tiers");
		mCImplicitModuleFactory->register_type<anl::CImplicitTranslateDomain>("TranslateDomain");

        //TODO:
        //mCImplicitModuleFactory->register_type<anl::CImplicitBias>("Bias");
        //mCImplicitModuleFactory->register_type<anl::CImplicitClamp>("Clamp");
        //mCImplicitModuleFactory->register_type<anl::CImplicitCombiner>("Combiner");
        //mCImplicitModuleFactory->register_type<anl::CImplicitGain>("Gain");
        //mCImplicitModuleFactory->register_type<anl::CImplicitRotateDomain>("RotateDomain");
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
				std::unique_ptr<anl::CImplicitModuleBase>(
                    mCImplicitModuleFactory->build_object(type)
                )
			)
		);
    }

    void CImplicitSequence::SetAttribute(std::string node, std::string attribute, std::string type, std::string value)
    {
    	noiseTreeIterator = noiseTree.find(node);

    	if(noiseTreeIterator != noiseTree.end())
    	{
            SetAttribute((*noiseTreeIterator).second.get(), attribute, InputMap.find(type)->second, value);
    	}
    }

    void CImplicitSequence::SetAttribute(anl::CImplicitModuleBase *node, std::string attribute, EInputTypes type, std::string value)
    {
        switch(type)
        {
            case INT:
            {
                node->setIntInput(attribute, atoi(value.c_str()));
            }
            break;
            case ENUM:
            {
                node->setIntInput(attribute, ENUMMap.find(value)->second);
            }
            break;
            case NOISE:
            {
                tmp = noiseTree.find(value)->second.get();
                node->setNoiseInput(attribute, tmp);
            }
            break;
            case DOUBLE:
            default:
            {
                node->setDoubleInput(attribute, atof(value.c_str()));
            }
            break;
        }
    }

    void CImplicitSequence::SetRenderNode(std::string node)
    {
    	render = noiseTree.find(node)->second.get();
    	if(render)
    	{
    		renderNode = true;
    	}
    }

    std::vector<std::string> CImplicitSequence::GetLayerOptions()
    {
        return mCImplicitModuleFactory->get_keys();
    }

    std::string CImplicitSequence::GetAttributes()
    {
        return "None";
    }

	double CImplicitSequence::get(double x, double y) {
		if(renderNode) {
			return get(render, x, y);
		} else {
			return 0.0;
		}
	}

    double CImplicitSequence::get(std::string node, double x, double y) {
        noiseTreeIterator = noiseTree.find(node);

        if (noiseTreeIterator == noiseTree.end()) {
            return 0.0;
        } else {
            return get(noiseTreeIterator->second.get(), x, y);
        }
    }

    double CImplicitSequence::get(anl::CImplicitModuleBase *node, double x, double y) {
        return node->get(x, y);
    }

	double CImplicitSequence::get(double x, double y, double z) {
		if(renderNode) {
			return get(render, x, y, z);
		} else {
			return 0.0;
		}
	}

    double CImplicitSequence::get(std::string node, double x, double y, double z)
    {
        noiseTreeIterator = noiseTree.find(node);

        if (noiseTreeIterator == noiseTree.end()) {
            return 0.0;
        } else {
            return get(noiseTreeIterator->second.get(), x, y, z);
        }
    }

    double CImplicitSequence::get(anl::CImplicitModuleBase *node, double x, double y, double z)
    {
        return node->get(x, y, z);
    }

	double CImplicitSequence::get(double x, double y, double z, double w) {
		if(renderNode) {
			return get(render, x, y, z, w);
		} else {
			return 0.0;
		}
	}

    double CImplicitSequence::get(std::string node, double x, double y, double z, double w) {
        noiseTreeIterator = noiseTree.find(node);

        if (noiseTreeIterator == noiseTree.end()) {
            return 0.0;
        } else {
            return get(noiseTreeIterator->second.get(), x, y, z, w);
        }
    }

    double CImplicitSequence::get(anl::CImplicitModuleBase *node, double x, double y, double z, double w) {
        return node->get(x, y, z, w);
    }

	double CImplicitSequence::get(double x, double y, double z, double w, double u, double v) {
		if(renderNode) {
			return get(render, x, y, z, w, u, v);
		} else {
			return 0.0;
		}
	}

    double CImplicitSequence::get(std::string node, double x, double y, double z, double w, double u, double v) {
        noiseTreeIterator = noiseTree.find(node);

        if (noiseTreeIterator == noiseTree.end()) {
            return 0.0;
        } else {
            return get(noiseTreeIterator->second.get(), x, y, z, w, u, v);
        }
    }

    double CImplicitSequence::get(anl::CImplicitModuleBase *node, double x, double y, double z, double w, double u, double v) {
        return node->get(x, y, z, w, u, v);
    }
}