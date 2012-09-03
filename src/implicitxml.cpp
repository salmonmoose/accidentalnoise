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

    std::map<std::string, ENoiseTypes> CImplicitXML::NoiseMap = {
        {"AutoCorrect", NT_AUTOCORRECT},
        {"BasisFunction", NT_BASISFUNCTION},
        {"Bias", NT_BIAS},
        {"Blend", NT_BLEND},
        {"BrightContrast", NT_BRIGHTCONTRAST},
        {"Cache", NT_CACHE},
        {"Cellular", NT_CELLULAR},
        {"Clamp", NT_CLAMP},
        {"Combiner", NT_COMBINER},
        {"Constant", NT_CONSTANT},
        {"Cos", NT_COS},
        {"ExtractRGBAChannel", NT_EXTRACTRGBACHANNEL},
        {"Floor", NT_FLOOR},
        {"Fractal", NT_FRACTAL},
        {"FunctionGradient", NT_FUNCTIONGRADIENT},
        {"Gain", NT_GAIN},
        {"Gradient", NT_GRADIENT},
        {"Invert", NT_INVERT},
        {"Pow", NT_POW},
        {"RGBADotProduct", NT_RGBADOTPRODUCT},
        {"RotateDomain", NT_ROTATEDOMAIN},
        {"ScaleDomain", NT_SCALEDOMAIN},
        {"ScaleOffset", NT_SCALEOFFSET},
        {"Select", NT_SELECT},
        {"Sin", NT_SIN},
        {"Sphere", NT_SPHERE},
        {"Tiers", NT_TIERS},
        {"TranslateDomain", NT_TRANSLATEDDOMAIN},
    };

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
            switch(anl::CImplicitXML::NoiseMap.find(layer.attribute("Type").value())->second) {
		        case NT_AUTOCORRECT: 			{anl::CImplicitAutoCorrect tmp = 			anl::CImplicitXML::AutoCorrect(layer);} break;
		        case NT_BASISFUNCTION: 			{anl::CImplicitBasisFunction tmp = 			anl::CImplicitXML::BasisFunction(layer);} break;
		        case NT_BIAS: 					{anl::CImplicitBias tmp = 					anl::CImplicitXML::Bias(layer);} break;
		        case NT_BLEND: 					{anl::CImplicitBlend tmp = 					anl::CImplicitXML::Blend(layer);} break;
		        case NT_BRIGHTCONTRAST: 		{anl::CImplicitBrightContrast tmp = 		anl::CImplicitXML::BrightContrast(layer);} break;
		        case NT_CACHE: 					{anl::CImplicitCache tmp = 					anl::CImplicitXML::Cache(layer);} break;
		        case NT_CELLULAR: 				{anl::CImplicitCellular tmp = 				anl::CImplicitXML::Cellular(layer);} break;
		        case NT_CLAMP: 					{anl::CImplicitClamp tmp = 					anl::CImplicitXML::Clamp(layer);} break;
		        case NT_COMBINER: 				{anl::CImplicitCombiner tmp = 				anl::CImplicitXML::Combiner(layer);} break;
		        case NT_CONSTANT: 				{anl::CImplicitConstant tmp = 				anl::CImplicitXML::Constant(layer);} break;
		        case NT_COS: 					{anl::CImplicitCos tmp = 					anl::CImplicitXML::Cos(layer);} break;
		        case NT_EXTRACTRGBACHANNEL: 	{anl::CImplicitExtractRGBAChannel tmp = 	anl::CImplicitXML::ExtractRGBAChannel(layer);} break;
		        case NT_FLOOR: 					{anl::CImplicitFloor tmp = 					anl::CImplicitXML::Floor(layer);} break;
		        case NT_FRACTAL: 				{anl::CImplicitFractal tmp = 				anl::CImplicitXML::Fractal(layer);} break;
		        case NT_FUNCTIONGRADIENT: 		{anl::CImplicitFunctionGradient tmp =		anl::CImplicitXML::FunctionGradient(layer);} break;
		        case NT_GAIN: 					{anl::CImplicitGain tmp = 					anl::CImplicitXML::Gain(layer);} break;
		        case NT_GRADIENT: 				{anl::CImplicitGradient tmp = 				anl::CImplicitXML::Gradient(layer);} break;
		        case NT_INVERT: 				{anl::CImplicitInvert tmp = 				anl::CImplicitXML::Invert(layer);} break;
		        case NT_POW: 					{anl::CImplicitPow tmp = 					anl::CImplicitXML::Pow(layer);} break;
		        case NT_RGBADOTPRODUCT: 		{anl::CImplicitRGBADotProduct tmp = 		anl::CImplicitXML::RGBADotProduct(layer);} break;
		        case NT_ROTATEDOMAIN: 			{anl::CImplicitRotateDomain tmp = 			anl::CImplicitXML::RotateDomain(layer);} break;
		        case NT_SCALEDOMAIN: 			{anl::CImplicitScaleDomain tmp = 			anl::CImplicitXML::ScaleDomain(layer);} break;
		        case NT_SCALEOFFSET: 			{anl::CImplicitScaleOffset tmp = 			anl::CImplicitXML::ScaleOffset(layer);} break;
		        case NT_SELECT: 				{anl::CImplicitSelect tmp = 				anl::CImplicitXML::Select(layer);} break;
		        case NT_SIN: 					{anl::CImplicitSin tmp = 					anl::CImplicitXML::Sin(layer);} break;
		        case NT_SPHERE: 				{anl::CImplicitSphere tmp = 				anl::CImplicitXML::Sphere(layer);} break;
		        case NT_TIERS: 					{anl::CImplicitTiers tmp = 					anl::CImplicitXML::Tiers(layer);} break;
		        case NT_TRANSLATEDDOMAIN: 		{anl::CImplicitTranslateDomain tmp = 		anl::CImplicitXML::TranslateDomain(layer);} break;
            }
			printf("Getting node point %f\n", tmp->get(0.0,0.0,0.0));
			printf("Adding node\n");
			noiseTree.insert(std::pair<std::string, anl::CImplicitModuleBase *>(layer.child_value("Name"), tmp));
		}

		if(noiseTree.count(data.child_value("Render")) > 0) {
			printf("Searching for a node called %s\n", data.child_value("Render"));

			printf("I can get data from last node %f\n", tmp->get(0.0,0.0,0.0));

			printf("Got the render node");

		} else {
			printf("I don't know about the rednernode\n");
		}
	}


	anl::CImplicitAutoCorrect CImplicitXML::AutoCorrect(pugi::xml_node input){

	}
	
	anl::CImplicitBasisFunction CImplicitXML::BasisFunction(pugi::xml_node input){

	}

	anl::CImplicitBias CImplicitXML::Bias(pugi::xml_node input){

	}

	anl::CImplicitBlend CImplicitXML::Blend(pugi::xml_node input){

	}

	anl::CImplicitBrightContrast CImplicitXML::BrightContrast(pugi::xml_node input){

	}

	anl::CImplicitCache CImplicitXML::Cache(pugi::xml_node input){

	}

	anl::CImplicitCellular CImplicitXML::Cellular(pugi::xml_node input){

	}

	anl::CImplicitClamp CImplicitXML::Clamp(pugi::xml_node input){

	}

	anl::CImplicitCombiner CImplicitXML::Combiner(pugi::xml_node input){

	}

	anl::CImplicitConstant CImplicitXML::Constant(pugi::xml_node input){

	}

	anl::CImplicitCos CImplicitXML::Cos(pugi::xml_node input){

	}

	anl::CImplicitExtractRGBAChannel CImplicitXML::ExtractRGBAChannel(pugi::xml_node input){

	}

	anl::CImplicitFloor CImplicitXML::Floor(pugi::xml_node input){

	}

	anl::CImplicitFractal CImplicitXML::Fractal(pugi::xml_node input) {
		anl::CImplicitFractal tmpFractal(
	        anl::CImplicitFractal::FractalMap.find(input.attribute("FractalType").value())->second,
	        anl::CImplicitBasisFunction::BasisMap.find(input.attribute("BasisType").value())->second,
	        anl::CImplicitBasisFunction::InterpMap.find(input.attribute("InterpType").value())->second
    	);

    	return tmpFractal;
	}

	anl::CImplicitFunctionGradient CImplicitXML::FunctionGradient(pugi::xml_node input){

	}

	anl::CImplicitGain CImplicitXML::Gain(pugi::xml_node input){

	}

	anl::CImplicitGradient CImplicitXML::Gradient(pugi::xml_node input){

	}

	anl::CImplicitInvert CImplicitXML::Invert(pugi::xml_node input){

	}

	anl::CImplicitPow CImplicitXML::Pow(pugi::xml_node input){

	}

	anl::CImplicitRGBADotProduct CImplicitXML::RGBADotProduct(pugi::xml_node input){

	}

	anl::CImplicitRotateDomain CImplicitXML::RotateDomain(pugi::xml_node input){

	}

	anl::CImplicitScaleDomain CImplicitXML::ScaleDomain(pugi::xml_node input){

	}

	anl::CImplicitScaleOffset CImplicitXML::ScaleOffset(pugi::xml_node input){

	}

	anl::CImplicitSelect CImplicitXML::Select(pugi::xml_node input){

	}

	anl::CImplicitSin CImplicitXML::Sin(pugi::xml_node input){

	}

	anl::CImplicitSphere CImplicitXML::Sphere(pugi::xml_node input) {
		anl::CImplicitSphere tmpSphere;

		if (input.child("Center")) tmpSphere.setCenter(
			input.child("Center").attribute("X").as_double(),
			input.child("Center").attribute("Y").as_double(),
			input.child("Center").attribute("Z").as_double(),
			input.child("Center").attribute("W").as_double(),
			input.child("Center").attribute("U").as_double(),
			input.child("Center").attribute("V").as_double()
			);

		if (input.child("NoiseRadius")) {
			tmpSphere.setRadius(
				noiseTree.find(input.child_value("NoiseRadius"))->second
			);
		} else if (input.child("Radius")) {
			tmpSphere.setRadius(
				input.child("Radius").attribute("Value").as_double()
			);
		}

		return tmpSphere;
	}

	anl::CImplicitTiers CImplicitXML::Tiers(pugi::xml_node input){

	}

	anl::CImplicitTranslateDomain CImplicitXML::TranslateDomain(pugi::xml_node input){

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
	bool AutoCorrect_r = noise_factory::instance()->register_type<anl::CImplicitAutoCorrect>("AutoCorrect");
	/*
	bool BasisFunction_r = noise_factory::instance()->register_type<CImplicitBasisFunction>("BasisFunction");
	bool Bias_r = noise_factory::instance()->register_type<CImplicitBias>("Bias");
	bool Blend_r = noise_factory::instance()->register_type<CImplicitBlend>("Blend");
	bool BrightContrast_r = noise_factory::instance()->register_type<CImplicitBrightContrast>("BrightContrast");
	bool Cache_r = noise_factory::instance()->register_type<CImplicitCache>("Cache");
	bool Cellular_r = noise_factory::instance()->register_type<CImplicitCellular>("Cellular");
	bool Clamp_r = noise_factory::instance()->register_type<CImplicitClamp>("Clamp");
	bool Combiner_r = noise_factory::instance()->register_type<CImplicitCombiner>("Combiner");
	*/
};