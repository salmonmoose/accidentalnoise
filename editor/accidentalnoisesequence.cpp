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

QStringList AccidentalNoiseSequence::getLayerDoubleInputs(QString layer)
{
	qDebug("getLayerDoubleInputs called: %s", layer.toStdString().c_str());

	QStringList inputs = QStringList();

	std::vector<std::string> layerInputs = mCImplicitSequence->GetLayerDoubleInputs(layer.toUtf8().constData());

	for (std::vector<std::string>::iterator it = layerInputs.begin(); it != layerInputs.end(); ++it)
	{
		qDebug("adding %s", (*it).c_str());
		inputs.append((*it).c_str());
	}

	return inputs;
}

QStringList AccidentalNoiseSequence::getLayerIntInputs(QString layer)
{
	qDebug("getIntLayerInputs called: %s", layer.toStdString().c_str());

	QStringList inputs = QStringList();

	std::vector<std::string> layerInputs = mCImplicitSequence->GetLayerIntInputs(layer.toUtf8().constData());

	for (std::vector<std::string>::iterator it = layerInputs.begin(); it != layerInputs.end(); ++it)
	{
		qDebug("adding %s", (*it).c_str());
		inputs.append((*it).c_str());
	}

	return inputs;
}

QStringList AccidentalNoiseSequence::getLayerNoiseInputs(QString layer)
{
	qDebug("getNoiseLayerInputs called: %s", layer.toStdString().c_str());

	QStringList inputs = QStringList();

	std::vector<std::string> layerInputs = mCImplicitSequence->GetLayerNoiseInputs(layer.toUtf8().constData());

	for (std::vector<std::string>::iterator it = layerInputs.begin(); it != layerInputs.end(); ++it)
	{
		qDebug("adding %s", (*it).c_str());
		inputs.append((*it).c_str());
	}

	return inputs;
}

void AccidentalNoiseSequence::createLayer(QString type, QString name)
{
	mCImplicitSequence->AddLayer(type.toUtf8().constData(), name.toUtf8().constData());
}