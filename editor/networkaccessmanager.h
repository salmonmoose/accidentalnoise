#ifndef NETWORKACCESSMANAGER_H
#define NETWORKACCESSMANAGER_H

#include <QNetworkAccessManager>
#include <QtNetwork>
#include "anl.h"
#include "noisereply.h"

class NetworkAccessManager : public QNetworkAccessManager
{
public:
	NetworkAccessManager(QNetworkAccessManager *oldManager, QObject *parent = 0);
	void setSequence(anl::CImplicitSequence * nCImplicitSequence);
	anl::CImplicitSequence * mCImplicitSequence;
protected:
	QNetworkReply *createRequest(Operation operation, const QNetworkRequest &request, QIODevice *device);
};

#endif //NETWORKACCESSMANAGER_H