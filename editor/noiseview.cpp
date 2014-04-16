#include "noiseview.h"

NoiseView::NoiseView()
{
	mCImplicitSequence = new anl::CImplicitSequence();

	std::vector<std::string> layer_options = mCImplicitSequence->GetLayerOptions();

	for(
		std::vector<std::string>::iterator it = layer_options.begin();
		it != layer_options.end();
		++it
		)
	{
		std::string name = *it;
		std::transform(name.begin(), name.end(), name.begin(), ::tolower);
		qDebug("Layer: %s", (*it).c_str());
		qDebug("Name: %s", name.c_str());
		mCImplicitSequence->AddLayer((*it), name);
	}

	QNetworkAccessManager *oldManager = page()->networkAccessManager();
	NetworkAccessManager *newManager = new NetworkAccessManager(oldManager, this);

	newManager->setSequence(mCImplicitSequence);

	page()->setNetworkAccessManager(newManager);

	page()->setForwardUnsupportedContent(true);
}