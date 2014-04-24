#include "noiseview.h"

NoiseView::NoiseView()
{
	QWebSettings::globalSettings()->setAttribute(QWebSettings::DeveloperExtrasEnabled, true);
	mAccidentalNoiseSequence = new AccidentalNoiseSequence();
	mAccidentalNoiseSequence->buildInterfaceNodes();

	addJSObject();

	QString fileName = QDir::currentPath() + "/interface.html";

	QNetworkAccessManager *oldManager = page()->networkAccessManager();
	NetworkAccessManager *newManager = new NetworkAccessManager(oldManager, mAccidentalNoiseSequence->mCImplicitSequence, this);

	page()->setNetworkAccessManager(newManager);

	page()->setForwardUnsupportedContent(true);

	load(QUrl::fromLocalFile(fileName));

	QWebInspector *inspector = new QWebInspector;
	inspector->setPage(page());
	inspector->show();
}

void NoiseView::addJSObject() {
	page()->mainFrame()->addToJavaScriptWindowObject(QString("AccidentalNoiseSequence"), mAccidentalNoiseSequence);
}