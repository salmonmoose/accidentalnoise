#include "noisereply.h"

NoiseReply::NoiseReply(const QUrl &url, anl::CImplicitSequence * pImplicitSequence)
	: QNetworkReply()
{
	processData(url, pImplicitSequence);
	setContent();
}

void NoiseReply::processData(const QUrl &url, anl::CImplicitSequence * pImplicitSequence)
{
	int x_size = 256;
	int y_size = 256;

	if (url.hasQuery()) {
		QUrlQuery query(url);

		if (query.hasQueryItem("x")) {
			x_size = query.queryItemValue("x").toInt();
		}

		if (query.hasQueryItem("y")) {
			y_size = query.queryItemValue("y").toInt();
		}
	}

	qDebug() << QString("Generating Layer: %1 X: %2, Y: %3").arg(url.host()).arg(x_size).arg(y_size).toStdString().c_str();

	QImage image(x_size, y_size,QImage::Format_RGB32);

	QRgb value;

	QBuffer buffer(&content);

	int depth;

	for (int y = 0; y < y_size; y++) {
		for (int x = 0; x < x_size; x++) {

			depth = ((int)255 * pImplicitSequence->get(
				url.host().toStdString().c_str(),
				x / (float)x_size,
				y / (float)y_size
			));

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

	return available;
}

qint64 NoiseReply::readData(char *data, qint64 maxSize)
{
	if (offset < content.size()) {
		qint64 number = qMin(maxSize, content.size() - offset);
		memcpy(data, content.constData() + offset, number);
		offset += number;
		return number;
	} else {
		return -1;
	}
}
