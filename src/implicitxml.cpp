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
			type = layer.attribute("Type").value();
            printf("Adding layer type %s\n", type);
			if(strcmp(type, "AutoCorrect") == 0) {
				anl::CImplicitAutoCorrect tmp;

				//TODO: setSource

				if (layer.child("Range")) tmp.setRange(
					layer.child("Range").attribute("Low").as_double(),
					layer.child("Range").attribute("High").as_double()
					);

				//TODO: Calculate

			} else if (strcmp(type, "BasisFunction") == 0) {
				anl::CImplicitBasisFunction tmp;

				if (layer.child("Seed")) tmp.setSeed(
					layer.child("Seed").attribute("Value").as_int()
					);

				if (layer.child("Basis")) tmp.setType(
					anl::CImplicitBasisFunction::BasisMap.find(layer.child("Basis").attribute("BasisType").value())->second
					);

				if (layer.child("Interp")) tmp.setInterp(
					anl::CImplicitBasisFunction::InterpMap.find(layer.child("Interp").attribute("InterpType").value())->second
					);

				if (layer.child("Rotation")) tmp.setRotationAngle(
					layer.child("Rotation").attribute("X").as_double(),
					layer.child("Rotation").attribute("Y").as_double(),
					layer.child("Rotation").attribute("Z").as_double(),
					layer.child("Rotation").attribute("Angle").as_double()
					);

			} else if (strcmp(type, "Bias") == 0) {
				anl::CImplicitBias tmp(
					layer.attribute("Value").as_double()
					);

				if (layer.child("Source")) tmp.setSource(
					layer.child("Source").attribute("Value").as_double()
					);

				if (layer.child("Bias")) tmp.setBias(
					layer.child("Bias").attribute("Value").as_double()
					);

			} else if (strcmp(type, "Blend") == 0) {
				anl::CImplicitBlend tmp;

				if (layer.child("LowSource")) tmp.setLowSource(
					layer.child("LowSource").attribute("Value").as_double()
					);

				if (layer.child("HighSource")) tmp.setHighSource(
					layer.child("HighSource").attribute("Value").as_double()
					);

				if (layer.child("ControlSource")) tmp.setControlSource(
					layer.child("ControlSource").attribute("Value").as_double()
					);

			} else if (strcmp(type, "BrightContrast") == 0) {
				anl::CImplicitBrightContrast tmp;

				if (layer.child("Brightness")) tmp.setBrightness(
					layer.child("Brightness").attribute("Value").as_double()
					);

			} else if (strcmp(type, "Cache") == 0) {
				anl::CImplicitCache tmp;

			} else if (strcmp(type, "Cellular") == 0) {
				anl::CImplicitCellular tmp;

			} else if (strcmp(type, "Clamp") == 0) {
				anl::CImplicitClamp tmp(
					layer.attribute("Low").as_double(),
					layer.attribute("High").as_double()
					);

			} else if (strcmp(type, "Combiner") == 0) {
				anl::CImplicitCombiner tmp(
					anl::CImplicitCombiner::CombinerMap.find(layer.attribute("CombinerType").value())->second
					);

			} else if (strcmp(type, "Constant") == 0) {
				tmp = new anl::CImplicitConstant();

			} else if (strcmp(type, "Cos") == 0) {
				anl::CImplicitCos tmp;

			} else if (strcmp(type, "ExtractRGBAChannel") == 0) {
				anl::CImplicitExtractRGBAChannel tmp;

			} else if (strcmp(type, "Floor") == 0) {
				anl::CImplicitFloor tmp;

			} else if (strcmp(type, "Fractal") == 0) {
				anl::CImplicitFractal tmp(
                    anl::CImplicitFractal::FractalMap.find(layer.attribute("FractalType").value())->second,
                    anl::CImplicitBasisFunction::BasisMap.find(layer.attribute("BasisType").value())->second,
                    anl::CImplicitBasisFunction::InterpMap.find(layer.attribute("InterpType").value())->second
                	);

			} else if (strcmp(type, "FunctionGradient") == 0) {
				anl::CImplicitFunctionGradient tmp;

			} else if (strcmp(type, "Gain") == 0) {
				anl::CImplicitGain tmp(
					layer.attribute("Value").as_double()
					);

			} else if (strcmp(type, "Gradient") == 0) {
				anl::CImplicitGradient tmp;

			} else if (strcmp(type, "Invert") == 0) {
				anl::CImplicitInvert tmp;

			} else if (strcmp(type, "Pow") == 0) {
				anl::CImplicitPow tmp;

			} else if (strcmp(type, "RGBADotProduct") == 0) {
				anl::CImplicitRGBADotProduct tmp;

			} else if (strcmp(type, "RotateDomain") == 0) {
				anl::CImplicitRotateDomain tmp(
					layer.attribute("X").as_double(),
					layer.attribute("Y").as_double(),
					layer.attribute("Z").as_double(),
					layer.attribute("Angle").as_double()
					);

			} else if (strcmp(type, "ScaleDomain") == 0) {
				anl::CImplicitScaleDomain tmp;

			} else if (strcmp(type, "ScaleOffset") == 0) {
				anl::CImplicitScaleOffset tmp(
					layer.attribute("Scale").as_double(),
					layer.attribute("Offset").as_double()
					);

			} else if (strcmp(type, "Select") == 0) {
				anl::CImplicitSelect tmp;

			} else if (strcmp(type, "Sin") == 0) {
				anl::CImplicitSin tmp;

			} else if (strcmp(type, "Sphere") == 0) {
				anl::CImplicitSphere tmp;

				if (layer.child("Center")) tmp.setCenter(
					layer.child("Center").attribute("X").as_double(),
					layer.child("Center").attribute("Y").as_double(),
					layer.child("Center").attribute("Z").as_double(),
					layer.child("Center").attribute("W").as_double(),
					layer.child("Center").attribute("U").as_double(),
					layer.child("Center").attribute("V").as_double()
					);

				if (layer.child("NoiseRadius")) {
					tmp.setRadius(
						noiseTree.find(layer.child_value("NoiseRadius"))->second
					);
				} else if (layer.child("Radius")) {
					tmp.setRadius(
						layer.child("Radius").attribute("Value").as_double()
					);
				}

			} else if (strcmp(type, "Tiers") == 0) {
				anl::CImplicitTiers  tmp;

			} else if (strcmp(type, "TranslateDomain") == 0) {
				anl::CImplicitTranslateDomain tmp;

			} else if (strcmp(type, "XML") == 0) {
				anl::CImplicitXML tmp;
			} else {
				printf("Layer type not found %s\n", layer.attribute("type").value());
			}
			printf("Adding node\n");
			noiseTree.insert(std::pair<std::string, anl::CImplicitModuleBase *>(layer.child_value("Name"), tmp));
		}

		if(noiseTree.count(data.child_value("Render")) > 0) {
			render = noiseTree.find(data.child_value("Render"))->second;
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