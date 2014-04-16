#include "noisereply.h"

NoiseReply::NoiseReply(const QUrl &url, anl::CImplicitSequence * pImplicitSequence)
	: QNetworkReply()
{
	processData(url, pImplicitSequence);
	setContent();
}

void NoiseReply::processData(const QUrl &url, anl::CImplicitSequence * pImplicitSequence)
{

	qDebug("processData");

	qDebug("Host: %s", url.host().toStdString().c_str());

	QImage image(256,256,QImage::Format_RGB32);

	QRgb value;

	QBuffer buffer(&content);

	int depth;

	for (int y = 0; y < 256; y++) {
		for (int x = 0; x < 256; x++) {
			depth = ((int)127 * pImplicitSequence->get(url.host().toStdString().c_str(), x / 255.0, y / 255.0));
			value = qRgb(depth, depth, depth);
			image.setPixel(x,y, value);
		}
	}

	buffer.open(QIODevice::WriteOnly);
	image.save(&buffer, "PNG");
}

void NoiseReply::setContent()
{
	offset = 0;

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

	qDebug("Size: %d - Offset: %d + Available: %d = Bytes Available: %d", content.size(), (int)offset, (int)QIODevice::bytesAvailable(), (int)available);

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
