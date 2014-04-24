#ifndef NOISEREPLY_H
#define NOISEREPLY_H

#include <QNetworkReply>
#include <QUrlQuery>
#include <QTimer>
#include <QFile>
#include <QDir>
#include <QImage>
#include <QBuffer>
#include <anl.h>

class NoiseReply : public QNetworkReply
{
public:
	NoiseReply(const QUrl &url, anl::CImplicitSequence *pImplicitSequence);
	void abort();
	qint64 bytesAvailable() const;
	bool isSequential() const;

protected:
	qint64 readData(char *data, qint64 maxSize);

private:
	void processData(const QUrl &url, anl::CImplicitSequence *pImplicitSequence);
	void setContent();

	QByteArray content;
	qint64 offset;
};

#endif //NOISEREPLY_H