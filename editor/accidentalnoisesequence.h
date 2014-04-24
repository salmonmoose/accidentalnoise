#ifndef ACCIDENTALNOISESEQUENCE_H
#define ACCIDENTALNOISESEQUENCE_H

#include "anl.h"
#include <vector>
#include <QObject>
#include <QStringList>

class AccidentalNoiseSequence : public QObject
{
	Q_OBJECT

public:
	AccidentalNoiseSequence();

	Q_INVOKABLE QStringList getLayerOptions();

	void buildInterfaceNodes();
	anl::CImplicitSequence * mCImplicitSequence;
};

#endif //ACCIDENTALNOISESEQUENCE_H