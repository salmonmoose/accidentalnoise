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
		qDebug("adding %s:Double:%s", layer.toUtf8().constData(), (*it).c_str());
		inputs.append(QString("%1:Double:%2").arg(layer.toUtf8().constData(), (*it).c_str()));
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
		qDebug("adding %s:Int:%s", layer.toUtf8().constData(), (*it).c_str());
		inputs.append(QString("%1:Int:%2").arg(layer.toUtf8().constData(), (*it).c_str()));
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
		qDebug("adding %s:Noise:%s", layer.toUtf8().constData(), (*it).c_str());
		inputs.append(QString("%1:Noise:%2").arg(layer.toUtf8().constData(), (*it).c_str()));
	}

	return inputs;
}

QString AccidentalNoiseSequence::getLayerInputValue(QString layer, QString type, QString input)
{
	qDebug(
		"getLayerInputValue called: %s, %s, %s",
		layer.toStdString().c_str(),
		type.toStdString().c_str(),
		input.toStdString().c_str()
	);

	std::string value = mCImplicitSequence->GetAttribute(
		layer.toUtf8().constData(),
		type.toUtf8().constData(),
		input.toUtf8().constData()
	);

	return QString::fromStdString(value);
}

QString AccidentalNoiseSequence::setLayerInputValue(QString layer, QString type, QString input, QString value)
{
	qDebug(
		"setLayerInputValue called: %s %s %s %s",
		layer.toStdString().c_str(),
		type.toStdString().c_str(),
		input.toStdString().c_str(),
		value.toStdString().c_str()
	);

	if (mCImplicitSequence->SetAttribute(layer.toUtf8().constData(),type.toUtf8().constData(),input.toUtf8().constData(),value.toUtf8().constData())) {
		qDebug("Result: %s", mCImplicitSequence->GetAttribute(layer.toUtf8().constData(),type.toUtf8().constData(),input.toUtf8().constData()).c_str());
		qDebug("OK");
		return QString("OK");
	} else {
		qDebug("FAIL");
		return QString("FAIL");
	}
}

void AccidentalNoiseSequence::createLayer(QString type, QString name)
{
	qDebug("createLayer: %s [%s]", type.toStdString().c_str(), name.toStdString().c_str());
	mCImplicitSequence->AddLayer(type.toUtf8().constData(), name.toUtf8().constData());
}