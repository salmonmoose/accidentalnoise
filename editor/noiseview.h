#ifndef NOISEVIEW_H
#define NOISEVIEW_H

#include <QWebView>
#include <algorithm>
#include "networkaccessmanager.h"
#include "anl.h"

class QNetworkAccessManager;

class NoiseView : public QWebView
{
public:
	NoiseView();
	anl::CImplicitSequence * mCImplicitSequence;
};

#endif //NOISEVIEW_H