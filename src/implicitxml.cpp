#include "implicitxml.h"

namespace anl
{
	void CImplicitXML::loadFile(const char * filename) {

		mCImplicitSequence = new CImplicitSequence();
		mCImplicitSequence->RegisterTypes();

        printf("Loading file %s ...", filename);
		pugi::xml_parse_result result = config.load_file(filename);

        printf("Loaded\n");

		data = config.child("Document").child("Noise");
        printf("Setting up Noise...");
		setupNoise();
        printf("Noise setup\n");
	}
                                                                                                                                                                            
	void CImplicitXML::setupNoise() {
		for(pugi::xml_node layer = data.child("Module"); layer; layer = layer.next_sibling("Module")) {
			mCImplicitSequence->AddLayer(
				layer.attribute("Type").value(), 
				layer.attribute("Name").value()
			);

			for(pugi::xml_node function: layer.children()) 
			{
				mCImplicitSequence->SetAttribute(
					layer.attribute("Name").value(),
					function.name(),
					function.attribute("Type").value(),
					function.child_value()
				);
			}
			
		}

		mCImplicitSequence->SetRenderNode(data.child_value("Render"));
	}

	double CImplicitXML::get(double x, double y)
	{
		return mCImplicitSequence->get(x,y);
	}

	double CImplicitXML::get(double x, double y, double z)
	{
		return mCImplicitSequence->get(x,y,z);
	}

	double CImplicitXML::get(double x, double y, double z, double w)
	{
		return mCImplicitSequence->get(x,y,z,w);
	}

	double CImplicitXML::get(double x, double y, double z, double w, double u, double v)
	{
		return mCImplicitSequence->get(x,y,z,w,u,v);
	}


};