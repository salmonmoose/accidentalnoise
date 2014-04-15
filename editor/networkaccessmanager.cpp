#include "networkaccessmanager.h"

NetworkAccessManager::NetworkAccessManager(QNetworkAccessManager *manager, QObject *parent)
	: QNetworkAccessManager(parent)
{
	qDebug("creating new NetworkAccessManager");
	setCache(manager->cache());
	setCookieJar(manager->cookieJar());
	setProxy(manager->proxy());
	setProxyFactory(manager->proxyFactory());

	mCImplicitSequence = new anl::CImplicitSequence();
	mCImplicitSequence->RegisterTypes();

	mCImplicitSequence->AddLayer("Sphere", "sphere01");
	mCImplicitSequence->AddLayer("Fractal", "fractal01");
	mCImplicitSequence->SetRenderNode("sphere01");
}

QNetworkReply *NetworkAccessManager::createRequest(
	QNetworkAccessManager::Operation operation, const QNetworkRequest &request,
	QIODevice *device)
{
	qDebug(request.url().scheme().toStdString().c_str());

	if (request.url().scheme() != "noise") {
		qDebug("Not noise scheme");
		return QNetworkAccessManager::createRequest(operation, request, device);
	} else {
		qDebug("noise scheme");
	}

	if (operation == GetOperation) {
		qDebug("found noise request");

		NoiseReply *response = new NoiseReply(request.url(), mCImplicitSequence);

		if (response->isFinished()) {
			qDebug("noise request finished");
		} else {
			if (response->isRunning()) {
				qDebug("noise request running");
			} else {
				qDebug("Noise request neither running nor finished");
			}
		}

		if (response->error() > 0) {
			qDebug("Error is greater than 0");
		} else {
			qDebug("No Error");
		}

		QVariant sizeVar = response->header(QNetworkRequest::ContentLengthHeader);

		QVariant typeVar = response->header(QNetworkRequest::ContentTypeHeader);

		qDebug(
			"Size: %s Type: %s",
			sizeVar.toString().toStdString().c_str(),
			typeVar.toString().toStdString().c_str()
		);

		return response;
	}
	else {
		return QNetworkAccessManager::createRequest(operation, request, device);
	}
}
