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
		char * type;
		for(pugi::xml_node layer = data.child("layer"); layer; layer = layer.next_sibling("layer")) {
			type = layer.attribute("type").value();
			if(strcmp(type, "audocorrect") == 0) {

			} else if (strcmp(type, "basisfunction") == 0) {

			} else if (strcmp(type, "bias") == 0) {

			} else if (strcmp(type, "blend") == 0) {

			} else if (strcmp(type, "brightcontrast") == 0) {

			} else if (strcmp(type, "cache") == 0) {

			} else if (strcmp(type, "cellular") == 0) {

			} else if (strcmp(type, "clamp") == 0) {

			} else if (strcmp(type, "combiner") == 0) {

			} else if (strcmp(type, "constant") == 0) {

			} else if (strcmp(type, "cos") == 0) {

			} else if (strcmp(type, "extractrgbachannel") == 0) {

			} else if (strcmp(type, "floor") == 0) {

			} else if (strcmp(type, "fractal") == 0) {
				tmp = new anl::CImplicitFractal(
                    anl::CImplicitFractal::FractalMap.find(layer.attribute("fractaltype").value())->second,
                    anl::CImplicitBasisFunction::BasisMap.find(layer.attribute("basistype").value())->second,
                    anl::CImplicitBasisFunction::InterpMap.find(layer.attribute("interptype").value())->second
                	);
			} else if (strcmp(type, "functiongradient") == 0) {

			} else if (strcmp(type, "gain") == 0) {

			} else if (strcmp(type, "gradient") == 0) {

			} else if (strcmp(type, "invert") == 0) {

			} else if (strcmp(type, "pow") == 0) {

			} else if (strcmp(type, "rgbadotproduct") == 0) {

			} else if (strcmp(type, "rotatedomain") == 0) {

			} else if (strcmp(type, "scaledomain") == 0) {

			} else if (strcmp(type, "scaleoffset") == 0) {

			} else if (strcmp(type, "select") == 0) {

			} else if (strcmp(type, "sin") == 0) {

			} else if (strcmp(type, "sphere") == 0) {
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

			} else if (strcmp(type, "tiers") == 0) {

			} else if (strcmp(type, "translatedomain") == 0) {

			} else if (strcmp(type, "xml") == 0) {

			} else {
				printf("Layer type not found %s\n", layer.attribute("type").value());
			}

			noiseTree.insert(std::pair<std::string, anl::CImplicitModuleBase *>(layer.child_value("name"), tmp));
		}

		noiseIterator = noiseTree.find(data.child_value("render"));
	}

	double CImplicitXML::get(double x, double y) {
		return noiseIterator->second->get(x,y);
	}

	double CImplicitXML::get(double x, double y, double z) {
		return noiseIterator->second->get(x,y,z);
	}

	double CImplicitXML::get(double x, double y, double z, double w) {
		return noiseIterator->second->get(x,y,z,w);
	}

	double CImplicitXML::get(double x, double y, double z, double w, double u, double v) {
		return noiseIterator->second->get(x,y,z,w,u,v);
	}
};