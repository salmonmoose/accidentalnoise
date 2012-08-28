#include "implicitxml.h"
#include "string.h"

namespace anl
{
	CImplicitXML::CImplicitXML() {
		//use a default 
	}

	CImplicitXML::CImplicitXML(char * filename) {
		loadFile(filename);
	}

    CImplicitXML::~CImplicitXML(){}

	void CImplicitXML::loadFile(char * filename) {
		pugi::xml_parse_result result = config.load_file("filename");

		data = config.child("document").child("noise");

		setupNoise();
	}

	void CImplicitXML::setupNoise() {
		const char * type;
		for(pugi::xml_node layer = data.child("layer"); layer; layer = layer.next_sibling("layer")) {
			type = layer.attribute("type").value();
			if(strcmp(type, "autocorrect") == 0) {
				tmp = new anl::CImplicitAutoCorrect();

				//TODO: setSource

				if (layer.child("range")) dynamic_cast<anl::CImplicitAutoCorrect*>(tmp)->setRange(
					layer.child("range").attribute("low").as_double(),
					layer.child("range").attribute("high").as_double()
					);

				//TODO: Calculate

			} else if (strcmp(type, "basisfunction") == 0) {
				tmp = new anl::CImplicitBasisFunction();

				if (layer.child("seed")) dynamic_cast<anl::CImplicitBasisFunction*>(tmp)->setSeed(
					layer.child("seed").attribute("value").as_int()
					);

				if (layer.child("basis")) dynamic_cast<anl::CImplicitBasisFunction*>(tmp)->setType(
					anl::CImplicitBasisFunction::BasisMap.find(layer.child("basis").attribute("basistype").value())->second
					);

				if (layer.child("interp")) dynamic_cast<anl::CImplicitBasisFunction*>(tmp)->setInterp(
					anl::CImplicitBasisFunction::InterpMap.find(layer.child("interp").attribute("interptype").value())->second
					);

				if (layer.child("rotation")) dynamic_cast<anl::CImplicitBasisFunction*>(tmp)->setRotationAngle(
					layer.child("rotation").attribute("x").as_double(),
					layer.child("rotation").attribute("y").as_double(),
					layer.child("rotation").attribute("z").as_double(),
					layer.child("rotation").attribute("angle").as_double()
					);

			} else if (strcmp(type, "bias") == 0) {
				tmp = new anl::CImplicitBias(
					layer.attribute("value").as_double()
					);

				if (layer.child("source")) dynamic_cast<anl::CImplicitBias*>(tmp)->setSource(
					layer.child("source").attribute("value").as_double()
					);

				if (layer.child("bias")) dynamic_cast<anl::CImplicitBias*>(tmp)->setBias(
					layer.child("bias").attribute("value").as_double()
					);

			} else if (strcmp(type, "blend") == 0) {
				tmp = new anl::CImplicitBlend();

				if (layer.child("lowsource")) dynamic_cast<anl::CImplicitBlend*>(tmp)->setLowSource(
					layer.child("lowsource").attribute("value").as_double()
					);

				if (layer.child("highsource")) dynamic_cast<anl::CImplicitBlend*>(tmp)->setHighSource(
					layer.child("highsource").attribute("value").as_double()
					);

				if (layer.child("controlsource")) dynamic_cast<anl::CImplicitBlend*>(tmp)->setControlSource(
					layer.child("controlsource").attribute("value").as_double()
					);

			} else if (strcmp(type, "brightcontrast") == 0) {
				tmp = new anl::CImplicitBrightContrast();

				if (layer.child("brightness")) dynamic_cast<anl::CImplicitBrightContrast*>(tmp)->setBrightness(
					layer.child("brightness").attribute("value").as_double()
					);

			} else if (strcmp(type, "cache") == 0) {
				tmp = new anl::CImplicitCache();

			} else if (strcmp(type, "cellular") == 0) {
				tmp = new anl::CImplicitCellular();

			} else if (strcmp(type, "clamp") == 0) {
				tmp = new anl::CImplicitClamp(
					layer.attribute("low").as_double(),
					layer.attribute("high").as_double()
					);

			} else if (strcmp(type, "combiner") == 0) {
				tmp = new anl::CImplicitCombiner(
					anl::CImplicitCombiner::CombinerMap.find(layer.attribute("combinertype").value())->second
					);

			} else if (strcmp(type, "constant") == 0) {
				tmp = new anl::CImplicitConstant();

			} else if (strcmp(type, "cos") == 0) {
				tmp = new anl::CImplicitCos();

			} else if (strcmp(type, "extractrgbachannel") == 0) {
				tmp = new anl::CImplicitExtractRGBAChannel();

			} else if (strcmp(type, "floor") == 0) {
				tmp = new anl::CImplicitFloor();

			} else if (strcmp(type, "fractal") == 0) {
				tmp = new anl::CImplicitFractal(
                    anl::CImplicitFractal::FractalMap.find(layer.attribute("fractaltype").value())->second,
                    anl::CImplicitBasisFunction::BasisMap.find(layer.attribute("basistype").value())->second,
                    anl::CImplicitBasisFunction::InterpMap.find(layer.attribute("interptype").value())->second
                	);

			} else if (strcmp(type, "functiongradient") == 0) {
				tmp = new anl::CImplicitFunctionGradient();

			} else if (strcmp(type, "gain") == 0) {
				tmp = new anl::CImplicitGain(
					layer.attribute("value").as_double()
					);

			} else if (strcmp(type, "gradient") == 0) {
				tmp = new anl::CImplicitGradient();

			} else if (strcmp(type, "invert") == 0) {
				tmp = new anl::CImplicitInvert();

			} else if (strcmp(type, "pow") == 0) {
				tmp = new anl::CImplicitPow();

			} else if (strcmp(type, "rgbadotproduct") == 0) {
				tmp = new anl::CImplicitRGBADotProduct();

			} else if (strcmp(type, "rotatedomain") == 0) {
				tmp = new anl::CImplicitRotateDomain(
					layer.attribute("x").as_double(),
					layer.attribute("y").as_double(),
					layer.attribute("z").as_double(),
					layer.attribute("angle").as_double()
					);

			} else if (strcmp(type, "scaledomain") == 0) {
				tmp = new anl::CImplicitScaleDomain();

			} else if (strcmp(type, "scaleoffset") == 0) {
				tmp = new anl::CImplicitScaleOffset(
					layer.attribute("scale").as_double(),
					layer.attribute("offset").as_double()
					);

			} else if (strcmp(type, "select") == 0) {
				tmp = new anl::CImplicitSelect();

			} else if (strcmp(type, "sin") == 0) {
				tmp = new anl::CImplicitSin();

			} else if (strcmp(type, "sphere") == 0) {
				tmp = new anl::CImplicitSphere();

				if (layer.child("center")) dynamic_cast<anl::CImplicitSphere*>(tmp)->setCenter(
					layer.child("center").attribute("x").as_double(),
					layer.child("center").attribute("y").as_double(),
					layer.child("center").attribute("z").as_double(),
					layer.child("center").attribute("w").as_double(),
					layer.child("center").attribute("u").as_double(),
					layer.child("center").attribute("v").as_double()
					);

				if (layer.child("radius")) dynamic_cast<anl::CImplicitSphere*>(tmp)->setRadius(
					layer.child("radius").attribute("value").as_double()
					);

			} else if (strcmp(type, "tiers") == 0) {
				tmp = new anl::CImplicitTiers();

			} else if (strcmp(type, "translatedomain") == 0) {
				tmp = new anl::CImplicitTranslateDomain();

			} else if (strcmp(type, "xml") == 0) {
				tmp = new anl::CImplicitXML();
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