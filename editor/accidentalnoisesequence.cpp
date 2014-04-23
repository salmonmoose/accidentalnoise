#include "accidentalnoisesequence.h"

AccidentalNoiseSequence::AccidentalNoiseSequence()
{
	mCImplicitSequence = new anl::CImplicitSequence();
}

void AccidentalNoiseSequence::buildInterfaceNodes()
{
	std::vector<std::string> layerOptions = mCImplicitSequence->GetLayerOptions();

	for(std::vector<std::string>::iterator it = layerOptions.begin(); it != layerOptions.end(); ++it)
	{
		std::string name = *it;
		std::transform(name.begin(), name.end(), name.begin(), ::tolower);
		qDebug("Layer: %s", (*it).c_str());
		qDebug("Name: %s", (name + "_interface").c_str());
		mCImplicitSequence->AddLayer((*it), (name + "_interface").c_str());
	}
}