#ifndef ACCIDENTALNOISESEQUENCE_H
#define ACCIDENTALNOISESEQUENCE_H

#include "anl.h"
#include <vector>
#include <QObject>

class AccidentalNoiseSequence : public QObject
{
public:
	AccidentalNoiseSequence();

	void buildInterfaceNodes();
	std::vector<std::string> getLayerOptions();
	anl::CImplicitSequence * mCImplicitSequence;
};

#endif //ACCIDENTALNOISESEQUENCE_H