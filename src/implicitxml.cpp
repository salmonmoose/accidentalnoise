#include "implicitxml.h"
#include "string.h"

namespace anl
{
	CImplicitXML::CImplicitXML() {
		renderNode = false;
	}

	CImplicitXML::CImplicitXML(const char * filename) {
		renderNode = false;
		loadFile(filename);
	}

    CImplicitXML::~CImplicitXML(){}

    std::map<std::string, EInputTypes> CImplicitXML::InputMap = {
    	{"Int", INT},
    	{"Enum", ENUM},
    	{"Double", DOUBLE},
    	{"Noise", NOISE}
    };

    std::map<std::string, unsigned int> CImplicitXML::ENUMMap = {
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

	void CImplicitXML::loadFile(const char * filename) {
        printf("Loading file %s\n", filename);
		pugi::xml_parse_result result = config.load_file(filename);

        printf("Loaded..\n");

		data = config.child("Document").child("Noise");
        printf("Setting up Noise\n");
		setupNoise();
        printf("Noise setup\n");
	}
                                                                                                                                                                            
	void CImplicitXML::setupNoise() {
		const char * type;

		for(pugi::xml_node gen = data.child("CellGen"); gen; gen = gen.next_sibling("CellGen")) {
			printf("Creating Cellular Generator:%s\n", gen.attribute("Name").value());

			cellularTree.insert(
				std::pair<std::string, anl::CCellularGenerator>(
					gen.attribute("Name").value(),
					anl::CCellularGenerator()
					)
			);
		}

		for(pugi::xml_node layer = data.child("Module"); layer; layer = layer.next_sibling("Module")) {
			printf("Adding %s:%s\n", layer.attribute("Type").value(), layer.attribute("Name").value());

			noiseTree.insert(
				std::pair<std::string, std::unique_ptr<anl::CImplicitModuleBase>>(
					layer.attribute("Name").value(),
					std::unique_ptr<anl::CImplicitModuleBase>(anl::CImplicitModuleFactory::instance().build_object(
						layer.attribute("Type").value())
					)
				)
			);

			printf("Setting layer to %s\n", layer.attribute("Name").value());

			noiseTreeIterator = noiseTree.find(layer.attribute("Name").value());

			if(noiseTreeIterator != noiseTree.end()) 
			{
				printf("Updating %s\n", (*noiseTreeIterator).first.c_str());

				for(pugi::xml_node function: layer.children()) {
					printf("Applying %s function: %s with value %s\n", function.attribute("Type").value(), function.name(), function.child_value());
					if((*noiseTreeIterator).second.get())
					{
						switch(InputMap.find(function.attribute("Type").value())->second) {
							case INT:
							{
								printf("INT Value %s=%i\n", function.name(), function.text().as_int());
								(*noiseTreeIterator).second.get()->setIntInput(function.name(), function.text().as_int());
							}
							break;
							case ENUM:
							{
								printf("ENUM Value %s=%i\n", function.name(), ENUMMap.find(function.child_value())->second);
								(*noiseTreeIterator).second.get()->setIntInput(function.name(), ENUMMap.find(function.child_value())->second);
							}
							case NOISE:
							{
								printf("NOISE Generator %s=%s\n", function.name(), function.child_value());
								value = noiseTree.find(function.child_value())->second.get();
								(*noiseTreeIterator).second.get()->setNoiseInput(function.name(), value);
							}
							break;
							case DOUBLE:
							default:
							{
								printf("DOUBLE Value %s=%f\n", function.name(), function.text().as_double());
								printf("attempting to set input\n");
								(*noiseTreeIterator).second.get()->setDoubleInput(function.name(), function.text().as_double());
								printf("Got the double ok\n");
							}
							break;
						}
					}
				}
			}
		}

		printf("Searching for a node called %s\n", data.child_value("Render"));
		if(noiseTree.count(data.child_value("Render")) > 0) {
			render = noiseTree.find(data.child_value("Render"))->second.get();
			if(render)
			{
				renderNode = true;	
				printf("Got the render node\n");
			}
			else
			{
				renderNode = false;
				printf("I've been told about the render node, but I forgot\n");
			}
		} else {
			printf("I don't know about the rednernode\n");
		}
	}

	double CImplicitXML::get(double x, double y) {
		if(renderNode) {
			return render->get(x,y);
		} else {
			return 0.0;
		}
	}

	double CImplicitXML::get(double x, double y, double z) {
		if(renderNode) {
			return render->get(x,y,z);
		} else {
			return 0.0;
		}
	}

	double CImplicitXML::get(double x, double y, double z, double w) {
		if(renderNode) {
			return render->get(x,y,z,w);
		} else {
			return 0.0;
		}
	}

	double CImplicitXML::get(double x, double y, double z, double w, double u, double v) {
		if(renderNode) {
			return render->get(x,y,z,w,u,v);
		} else {
			return 0.0;
		}
	}
};


namespace {
	
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
	bool FunctionGradient_r = anl::CImplicitModuleFactory::instance().register_type<anl::CImplicitFunctionGradient>("FunctionGradient");
	//bool Gain_r = anl::CImplicitModuleFactory::instance().register_type<anl::CImplicitGain>("Gain");
	
	bool Invert_r = anl::CImplicitModuleFactory::instance().register_type<anl::CImplicitInvert>("Invert");
	bool Pow_r = anl::CImplicitModuleFactory::instance().register_type<anl::CImplicitPow>("Pow");
	bool RGBADotProduct_r = anl::CImplicitModuleFactory::instance().register_type<anl::CImplicitRGBADotProduct>("RGBADotProduct");
	//bool RotateDomain_r = anl::CImplicitModuleFactory::instance().register_type<anl::CImplicitRotateDomain>("RotateDomain");
	bool ScaleDomain_r = anl::CImplicitModuleFactory::instance().register_type<anl::CImplicitScaleDomain>("ScaleDomain");
	//bool ScaleOffset_r = anl::CImplicitModuleFactory::instance().register_type<anl::CImplicitScaleOffset>("ScaleOffset");
	bool Select_r = anl::CImplicitModuleFactory::instance().register_type<anl::CImplicitSelect>("Select");
	bool Sin_r = anl::CImplicitModuleFactory::instance().register_type<anl::CImplicitSin>("Sin");
	
	

	bool Tiers_r = anl::CImplicitModuleFactory::instance().register_type<anl::CImplicitTiers>("Tiers");
	
};