#ifndef NETWORKACCESSMANAGER_H
#define NETWORKACCESSMANAGER_H

#include <QNetworkAccessManager>
#include <QtNetwork>
#include "anl.h"
#include "noisereply.h"
#include "accidentalnoisesequence.h"

class NetworkAccessManager : public QNetworkAccessManager
{
public:
	NetworkAccessManager(QNetworkAccessManager *oldManager, anl::CImplicitSequence *nCImplicitSequence, QObject *parent = 0);

	anl::CImplicitSequence * mCImplicitSequence;
protected:
	QNetworkReply *createRequest(Operation operation, const QNetworkRequest &request, QIODevice *device);
};

#endif //NETWORKACCESSMANAGER_H