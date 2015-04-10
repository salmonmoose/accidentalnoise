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
        mCRGBAModuleFactory = new generic_factory<std::string, anl::CRGBAModuleBase>();

        mCCellgenDefault = new CCellularGenerator();
        mCImplicitModuleBaseDefault = new CImplicitSphere();

        mCImplicitModuleFactory->register_type<anl::CImplicitAutoCorrect>("AutoCorrect");
        mCImplicitModuleFactory->register_type<anl::CImplicitBasisFunction>("BasisFunction");
        mCImplicitModuleFactory->register_type<anl::CImplicitBias>("Bias");
        mCImplicitModuleFactory->register_type<anl::CImplicitBlend>("Blend");
        mCImplicitModuleFactory->register_type<anl::CImplicitBrightContrast>("BrightContrast");
        mCImplicitModuleFactory->register_type<anl::CImplicitCache>("Cache");
        mCImplicitModuleFactory->register_type<anl::CImplicitCellular>("Cellular");
        mCImplicitModuleFactory->register_type<anl::CImplicitClamp>("Clamp");
        //mCImplicitModuleFactory->register_type<anl::CImplicitCombiner>("Combiner");
        mCImplicitModuleFactory->register_type<anl::CImplicitConstant>("Constant");
        mCImplicitModuleFactory->register_type<anl::CImplicitCos>("Cos");
        //mCImplicitModuleFactory->register_type<anl::CImplicitExtractRGBAChannel>("ExtractRGBAChannel");
        mCImplicitModuleFactory->register_type<anl::CImplicitFloor>("Floor");
        mCImplicitModuleFactory->register_type<anl::CImplicitFractal>("Fractal");
        mCImplicitModuleFactory->register_type<anl::CImplicitFunctionGradient>("FunctionGradient");
        //mCImplicitModuleFactory->register_type<anl::CImplicitGain>("Gain");
        mCImplicitModuleFactory->register_type<anl::CImplicitGradient>("Gradient");
        mCImplicitModuleFactory->register_type<anl::CImplicitGrid>("Grid");
        mCImplicitModuleFactory->register_type<anl::CImplicitInvert>("Invert");
        mCImplicitModuleFactory->register_type<anl::CImplicitJulia>("Julia");
        mCImplicitModuleFactory->register_type<anl::CImplicitLog>("Log");
        mCImplicitModuleFactory->register_type<anl::CImplicitPow>("Pow");
        //mCImplicitModuleFactory->register_type<anl::CImplicitRGBADotProduct>("RGBADotProduct");
        mCImplicitModuleFactory->register_type<anl::CImplicitRotateDomain>("RotateDomain");
        mCImplicitModuleFactory->register_type<anl::CImplicitScaleDomain>("ScaleDomain");
        mCImplicitModuleFactory->register_type<anl::CImplicitScaleOffset>("ScaleOffset");
        mCImplicitModuleFactory->register_type<anl::CImplicitSelect>("Select");
        mCImplicitModuleFactory->register_type<anl::CImplicitSin>("Sin");
        mCImplicitModuleFactory->register_type<anl::CImplicitSphere>("Sphere");
        mCImplicitModuleFactory->register_type<anl::CImplicitTan>("Tan");
        mCImplicitModuleFactory->register_type<anl::CImplicitTiers>("Tiers");
        //mCImplicitModuleFactory->register_type<anl::CImplicitTranslateDomain>("TranslateDomain");

        mCRGBAModuleFactory->register_type<anl::CRGBAConstant>("Constant");

        mCImplicitCellularGeneratorFactory = new generic_factory<std::string, anl::CCellularGenerator>();
        mCImplicitCellularGeneratorFactory->register_type<anl::CCellularGenerator>("CellularGenerator");
	}

    std::map<std::string, EInputTypes> CImplicitSequence::InputMap = {
    	{"Int", INT},
    	{"Enum", ENUM},
    	{"Double", DOUBLE},
    	{"Noise", NOISE},
        {"Cellgen", CELLGEN}
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
    	{"NOISE", NOISE},
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
        CImplicitModuleBase *layer = mCImplicitModuleFactory->build_object(type);

        layer->setName(name);
        layer->setDefaultNoise(mCImplicitModuleBaseDefault);
        layer->setDefaultCellgen(mCCellgenDefault);

    	noiseTree.insert(
    		std::pair<std::string, std::unique_ptr<anl::CImplicitModuleBase>>(
                name,
                std::unique_ptr<anl::CImplicitModuleBase>(layer)
            )
		);
    }

    void CImplicitSequence::AddLayer(std::string type)
    {
        static const char alphanum[] =
        "0123456789"
        "abcdef";

        std::string name (8, 42);

        for (int i = 0; i < 8; ++i) {
            name[i] = alphanum[rand() % (sizeof(alphanum) - 1)];
        }

        AddLayer(type, name);
    }

    void CImplicitSequence::AddCellGenerator(std::string name)
    {
        CCellularGenerator *cellgen = mCImplicitCellularGeneratorFactory->build_object("CellularGenerator");

        cellgen->setName(name);

        cellgenTree.insert(
            std::pair<std::string, std::unique_ptr<anl::CCellularGenerator>>(
                name,
                std::unique_ptr<anl::CCellularGenerator>(cellgen)
            )
        );
    }

    bool CImplicitSequence::SetAttribute(std::string node, std::string type, std::string attribute, std::string valueNoise)
    {
    	noiseTreeIterator = noiseTree.find(node);

    	if(noiseTreeIterator != noiseTree.end())
    	{
            return SetAttribute(noiseTreeIterator->second.get(), InputMap.find(type)->second, attribute, valueNoise);
    	} else {
            return false;
        }
    }

    bool CImplicitSequence::SetAttribute(anl::ModuleBase *node, EInputTypes type, std::string attribute, std::string value)
    {
        switch(type)
        {
            case INT:
            {
                return node->IntInputs.set(attribute, atoi(value.c_str()));
            }
            break;
            case ENUM:
            {
                return node->IntInputs.set(attribute, ENUMMap.find(value)->second);
            }
            break;
            case NOISE:
            {
                tempNoise = noiseTree.find(value)->second.get();
                return node->NoiseInputs.set(attribute, tempNoise);
            }
            break;
            case CELLGEN:
            {
                tempCellgen = cellgenTree.find(value)->second.get();
                return node->CellgenInputs.set(attribute, tempCellgen);
            }
            case DOUBLE:
            {
                return node->DoubleInputs.set(attribute, atof(value.c_str()));
            }
            break;
            default:
            {
                return true;
            }
        }
    }

    std::string CImplicitSequence::getAttribute(std::string node, std::string type, std::string attribute)
    {
        noiseTreeIterator = noiseTree.find(node);

        if(noiseTreeIterator != noiseTree.end())
        {
            if (type == "Int") {
                return std::to_string(
                    noiseTreeIterator->second->IntInputs.get(attribute)
                );

            } else if (type == "Double") {
                return std::to_string(
                    noiseTreeIterator->second->DoubleInputs.get(attribute)
                );

            } else if (type == "Noise") {
                if(noiseTreeIterator->second->NoiseInputs.get(attribute)) {
                    return noiseTreeIterator->second->NoiseInputs.get(attribute)->getName();

                } else {
                    return std::string();

                }
            } else if (type == "Cellgen") {
                if(noiseTreeIterator->second->CellgenInputs.get(attribute)) {
                    return noiseTreeIterator->second->CellgenInputs.get(attribute)->getName();

                } else {
                    return std::string();

                }
            } else {
                return std::string();

            }
        } else {
            return std::string();
        }
    }

    double CImplicitSequence::getDoubleAttribute(anl::ModuleBase *node, std::string attribute)
    {
        return node->DoubleInputs.get(attribute);
    }

    int CImplicitSequence::getIntAttribute(anl::ModuleBase *node, std::string attribute)
    {
        return node->IntInputs.get(attribute);
    }

    anl::ModuleBase * CImplicitSequence::getNoiseAttribute(anl::ModuleBase *node, std::string attribute)
    {
        return node->NoiseInputs.get(attribute);
    }

    void CImplicitSequence::SetRenderNode(std::string node)
    {
    	render = noiseTree.find(node)->second.get();
    	if(render)
    	{
    		renderNode = true;
    	}
    }

    std::vector<std::string> CImplicitSequence::getLayerOptions()
    {
        return mCImplicitModuleFactory->get_keys();
    }

    std::vector<std::string> CImplicitSequence::getLayerDoubleInputs(std::string node) {
        noiseTreeIterator = noiseTree.find(node);

        if(noiseTreeIterator == noiseTree.end()) {
            return std::vector<std::string>();
        } else {
            return noiseTreeIterator->second->DoubleInputs.list();
        }
    }

    std::vector<std::string> CImplicitSequence::getLayerIntInputs(std::string node) {
        noiseTreeIterator = noiseTree.find(node);

        if(noiseTreeIterator == noiseTree.end()) {
            return std::vector<std::string>();
        } else {
            return noiseTreeIterator->second->IntInputs.list();
        }
    }

    std::vector<std::string> CImplicitSequence::getLayerNoiseInputs(std::string node) {
        noiseTreeIterator = noiseTree.find(node);

        if(noiseTreeIterator == noiseTree.end()) {
            return std::vector<std::string>();
        } else {
            return noiseTreeIterator->second->NoiseInputs.list();
        }
    }

	double CImplicitSequence::getValue(double x, double y) {
		if(renderNode) {
			return getValue(render, x, y);
		} else {
			return 0.0;
		}
	}

    double CImplicitSequence::getValue(std::string node, double x, double y) {
        noiseTreeIterator = noiseTree.find(node);

        if (noiseTreeIterator == noiseTree.end()) {
            return 0.0;
        } else {
            return getValue(noiseTreeIterator->second.get(), x, y);
        }
    }

    double CImplicitSequence::getValue(anl::CImplicitModuleBase *node, double x, double y) {
        return node->get(x, y);
    }

	double CImplicitSequence::getValue(double x, double y, double z) {
		if(renderNode) {
			return getValue(render, x, y, z);
		} else {
			return 0.0;
		}
	}

    double CImplicitSequence::getValue(std::string node, double x, double y, double z)
    {
        noiseTreeIterator = noiseTree.find(node);

        if (noiseTreeIterator == noiseTree.end()) {
            return 0.0;
        } else {
            return getValue(noiseTreeIterator->second.get(), x, y, z);
        }
    }

    double CImplicitSequence::getValue(anl::CImplicitModuleBase *node, double x, double y, double z)
    {
        return node->get(x, y, z);
    }

	double CImplicitSequence::getValue(double x, double y, double z, double w) {
		if(renderNode) {
			return getValue(render, x, y, z, w);
		} else {
			return 0.0;
		}
	}

    double CImplicitSequence::getValue(std::string node, double x, double y, double z, double w) {
        noiseTreeIterator = noiseTree.find(node);

        if (noiseTreeIterator == noiseTree.end()) {
            return 0.0;
        } else {
            return getValue(noiseTreeIterator->second.get(), x, y, z, w);
        }
    }

    double CImplicitSequence::getValue(anl::CImplicitModuleBase *node, double x, double y, double z, double w) {
        return node->get(x, y, z, w);
    }

	double CImplicitSequence::getValue(double x, double y, double z, double w, double u, double v) {
		if(renderNode) {
			return getValue(render, x, y, z, w, u, v);
		} else {
			return 0.0;
		}
	}

    double CImplicitSequence::getValue(std::string node, double x, double y, double z, double w, double u, double v) {
        noiseTreeIterator = noiseTree.find(node);

        if (noiseTreeIterator == noiseTree.end()) {
            return 0.0;
        } else {
            return getValue(noiseTreeIterator->second.get(), x, y, z, w, u, v);
        }
    }

    double CImplicitSequence::getValue(anl::CImplicitModuleBase *node, double x, double y, double z, double w, double u, double v) {
        return node->get(x, y, z, w, u, v);
    }
}