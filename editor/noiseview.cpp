#include "noiseview.h"

NoiseView::NoiseView()
{
	QNetworkAccessManager *oldManager = page()->networkAccessManager();
	NetworkAccessManager *newManager = new NetworkAccessManager(oldManager, this);
	page()->setNetworkAccessManager(newManager);

	page()->setForwardUnsupportedContent(true);

	qDebug("Created new NoiseView");
}