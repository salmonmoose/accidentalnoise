#include "noiseview.h"

NoiseView::NoiseView()
{
	mAccidentalNoiseSequence = new AccidentalNoiseSequence();
	mAccidentalNoiseSequence->buildInterfaceNodes();

	QString fileName = QDir::currentPath() + "/interface.html";

	QNetworkAccessManager *oldManager = page()->networkAccessManager();
	NetworkAccessManager *newManager = new NetworkAccessManager(oldManager, mAccidentalNoiseSequence->mCImplicitSequence, this);

	page()->setNetworkAccessManager(newManager);

	page()->setForwardUnsupportedContent(true);

	load(QUrl::fromLocalFile(fileName));
}

void NoiseView::addJSObject() {
	page()->mainFrame()->addToJavaScriptWindowObject(QString("AccidentalNoiseSequence"), mAccidentalNoiseSequence);
}