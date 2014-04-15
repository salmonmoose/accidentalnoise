#ifndef NOISEREPLY_H
#define NOISEREPLY_H

#include <QNetworkReply>
#include <QTimer>
#include <QFile>
#include <QDir>
#include <QImage>
#include <QBuffer>

class NoiseReply : public QNetworkReply
{
public:
	NoiseReply(const QUrl &url);
	void abort();
	qint64 bytesAvailable() const;
	bool isSequential() const;

protected:
	qint64 readData(char *data, qint64 maxSize);

private:
	void processData();
	void setContent();

	QByteArray content;
	qint64 offset;
};

#endif //NOISEREPLY_H