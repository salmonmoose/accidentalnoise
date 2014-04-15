#ifndef NOISEVIEW_H
#define NOISEVIEW_H

#include <QWebView>
#include "networkaccessmanager.h"

class QNetworkAccessManager;

class NoiseView : public QWebView
{
public:
	NoiseView();
};

#endif //NOISEVIEW_H