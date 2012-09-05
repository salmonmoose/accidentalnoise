#include "implicitxml.h"
#include "string.h"

namespace anl
{
	CImplicitXML::CImplicitXML() {
		//use a default 
	}

	CImplicitXML::CImplicitXML(const char * filename) {
		loadFile(filename);
	}

    CImplicitXML::~CImplicitXML(){}

	void CImplicitXML::loadFile(const char * filename) {
        printf("Loading file %s\n", filename);
		pugi::xml_parse_result result = config.load_file(filename);

        printf("Loaded..\n");

		data = config.child("Document").child("Noise");
        printf("Setting up Noise\n");
		setupNoise();
	}
                                                                                                                                                                            
	void CImplicitXML::setupNoise() {
		const char * type;
		for(pugi::xml_node layer = data.child("Layer"); layer; layer = layer.next_sibling("Layer")) {
			printf("Adding %s:%s\n", layer.attribute("Type").value(), layer.child_value("Name"));

			noiseTree.insert(
				std::pair<std::string, std::unique_ptr<anl::CImplicitModuleBase>>(
					layer.child_value("Name"),
					std::unique_ptr<anl::CImplicitModuleBase>(noise_factory::instance().build_object(
						layer.attribute("Type").value())
					)
				)
			);	
		}

		if(noiseTree.count(data.child_value("Render")) > 0) {
			printf("Searching for a node called %s\n", data.child_value("Render"));

			render = noiseTree.find(data.child_value("Render"))->second.get();

			printf("Got the render node");

		} else {
			printf("I don't know about the rednernode\n");
		}
	}

	double CImplicitXML::get(double x, double y) {
		return render->get(x,y);
	}

	double CImplicitXML::get(double x, double y, double z) {
		return render->get(x,y,z);
	}

	double CImplicitXML::get(double x, double y, double z, double w) {
		return render->get(x,y,z,w);
	}

	double CImplicitXML::get(double x, double y, double z, double w, double u, double v) {
		return render->get(x,y,z,w,u,v);
	}
};


namespace {
	bool AutoCorrect_r = noise_factory::instance().register_type<anl::CImplicitAutoCorrect>("AutoCorrect");
	bool BasisFunction_r = noise_factory::instance().register_type<anl::CImplicitBasisFunction>("BasisFunction");
	//bool Bias_r = noise_factory::instance().register_type<anl::CImplicitBias>("Bias");
	bool Blend_r = noise_factory::instance().register_type<anl::CImplicitBlend>("Blend");
	bool BrightContrast_r = noise_factory::instance().register_type<anl::CImplicitBrightContrast>("BrightContrast");
	bool Cache_r = noise_factory::instance().register_type<anl::CImplicitCache>("Cache");
	bool Cellular_r = noise_factory::instance().register_type<anl::CImplicitCellular>("Cellular");
	//bool Clamp_r = noise_factory::instance().register_type<anl::CImplicitClamp>("Clamp");
	//bool Combiner_r = noise_factory::instance().register_type<anl::CImplicitCombiner>("Combiner");
	bool Constant_r = noise_factory::instance().register_type<anl::CImplicitConstant>("Constant");
	bool Cos_r = noise_factory::instance().register_type<anl::CImplicitCos>("Cos");
	bool ExtractRGBAChannel_r = noise_factory::instance().register_type<anl::CImplicitExtractRGBAChannel>("ExtractRGBAChannel");
	bool Floor_r = noise_factory::instance().register_type<anl::CImplicitFloor>("Floor");
	//bool Fractal_r = noise_factory::instance().register_type<anl::CImplicitFractal("Fractal");
	bool FunctionGradient_r = noise_factory::instance().register_type<anl::CImplicitFunctionGradient>("FunctionGradient");
	//bool Gain_r = noise_factory::instance().register_type<anl::CImplicitGain>("Gain");
	bool Gradient_r = noise_factory::instance().register_type<anl::CImplicitGradient>("Gradient");
	bool Invert_r = noise_factory::instance().register_type<anl::CImplicitInvert>("Invert");
	bool Pow_r = noise_factory::instance().register_type<anl::CImplicitPow>("Pow");
	bool RGBADotProduct_r = noise_factory::instance().register_type<anl::CImplicitRGBADotProduct>("RGBADotProduct");
	//bool RotateDomain_r = noise_factory::instance().register_type<anl::CImplicitRotateDomain>("RotateDomain");
	bool ScaleDomain_r = noise_factory::instance().register_type<anl::CImplicitScaleDomain>("ScaleDomain");
	//bool ScaleOffset_r = noise_factory::instance().register_type<anl::CImplicitScaleOffset>("ScaleOffset");
	bool Select_r = noise_factory::instance().register_type<anl::CImplicitSelect>("Select");
	bool Sin_r = noise_factory::instance().register_type<anl::CImplicitSin>("Sin");
	bool Sphere_r = noise_factory::instance().register_type<anl::CImplicitSphere>("Sphere");
	bool Tiers_r = noise_factory::instance().register_type<anl::CImplicitTiers>("Tiers");
	bool TranslateDomain_r = noise_factory::instance().register_type<anl::CImplicitTranslateDomain>("TranslateDomain");
};