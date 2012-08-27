#include "implicitmodulebase.h"

namespace anl
{
	CImplicitXML::CImplicitXML() {
		//use a default 
	}

	CImplicitXML::CImplicitXML(char * filename) {
		loadFile(filename);
	}

	CImplicitXML::loadFile(char * filename) {
		pugi::xml_parse_result result = config.load_file("filename");

		data = config.child("document").child("noise");

		setupNoise();
	}

	void setupNoise() {
		for(pugi::xml_node layer = data.child("layer"); layer; layer = layer.next_sibling("layer")) {
			if(strcmp(layer.attribute("type").value(), "sphere") == 0) {
				tmp = new anl::CImplicitSphere();

				dynamic_cast<anl::CImplicitSphere*>(tmp)->setCenter(
					layer.child("center").attribute("x").as_double(),
					layer.child("center").attribute("y").as_double(),
					layer.child("center").attribute("z").as_double(),
					layer.child("center").attribute("w").as_double(),
					layer.child("center").attribute("u").as_double(),
					layer.child("center").attribute("v").as_double()
					);

				dynamic_cast<anl::CImplicitSphere*>(tmp)->setRadius(layer.child("radius").attribute("value").as_double());
			
			} else if (strcmp(layer.attribute("type").value(), "fractal") == 0) {
            	tmp = new anl::CImplicitFractal(
                    anl::CImplicitFractal::FractalMap.find(layer.attribute("fractaltype").value())->second,
                    anl::CImplicitBasisFunction::BasisMap.find(layer.attribute("basistype").value())->second,
                    anl::CImplicitBasisFunction::InterpMap.find(layer.attribute("interptype").value())->second
                );
			} else {
				printf("Layer type not found %s\n", layer.attribute("type").value());
			}

			noiseTree.insert(std::pair<std::string, anl::CImplicitModuleBase *>(layer.child_value("name"), tmp));
		}
	}
};