#ifndef NOISEVIEW_H
#define NOISEVIEW_H

#include <QWebView>
#include <QWebFrame>
#include <algorithm>
#include "networkaccessmanager.h"
#include "accidentalnoisesequence.h"

class QNetworkAccessManager;

class NoiseView : public QWebView
{
public:
	NoiseView();
	AccidentalNoiseSequence *mAccidentalNoiseSequence;

	void addJSObject();
};

#endif //NOISEVIEW_H