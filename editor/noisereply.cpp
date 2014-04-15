#include "noisereply.h"

NoiseReply::NoiseReply(const QUrl &url)
	: QNetworkReply()
{
	processData();
	setContent();
}

void NoiseReply::processData()
{

	qDebug("processData");

	QImage image(256,256,QImage::Format_RGB32);

	QRgb value;

	value = qRgb(127,127,127);

	image.fill(value);

	QBuffer buffer(&content);

	buffer.open(QIODevice::WriteOnly);
	image.save(&buffer, "PNG");

	//QFile file(QDir::currentPath() + "/test.png");

	//if (!file.open(QIODevice::ReadOnly)) return;

	//content = file.readAll();

	qDebug("Content: %s", content.data());
}

void NoiseReply::setContent()
{
	offset = 0;

	qDebug("Size: %d", content.size());

	open(ReadOnly | Unbuffered);
	setHeader(QNetworkRequest::ContentLengthHeader, QVariant(content.size()));
	setHeader(QNetworkRequest::ContentTypeHeader, "image/png");

    QTimer::singleShot( 0, this, SIGNAL(readyRead()) );
    QTimer::singleShot( 0, this, SIGNAL(finished()) );
}

void NoiseReply::abort()
{

}

bool NoiseReply::isSequential() const
{
	return true;
}

qint64 NoiseReply::bytesAvailable() const
{
	qint64 available = content.size() - offset + QIODevice::bytesAvailable();

	qDebug("Size: %d - Offset: %d + Available: %d = Bytes Available: %d", content.size(), offset, QIODevice::bytesAvailable(), available);

	return available;
}

qint64 NoiseReply::readData(char *data, qint64 maxSize)
{
	qDebug("reading data");

	if (offset < content.size()) {
		qint64 number = qMin(maxSize, content.size() - offset);
		memcpy(data, content.constData() + offset, number);
		offset += number;
		return number;
	} else {
		return -1;
	}
}
