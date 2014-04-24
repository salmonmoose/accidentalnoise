#include "accidentalnoisesequence.h"

AccidentalNoiseSequence::AccidentalNoiseSequence()
{
	setObjectName("cppAccidentalNoiseSequence");
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

QStringList AccidentalNoiseSequence::getLayerOptions()
{
	qDebug("getLayerOptions called");

	std::vector<std::string> layerOptions = mCImplicitSequence->GetLayerOptions();

	QStringList options = QStringList();

	for (std::vector<std::string>::iterator it = layerOptions.begin(); it != layerOptions.end(); ++it)
	{
		options.append((*it).c_str());
	}

	return options;
}