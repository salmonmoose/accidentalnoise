#include <QtGui>
#include <QtWebKit>
#include <QApplication>
#include <QWebView>
#include <QWebFrame>
#include <QWebElement>

NetworkAccessManager::NetworkAccessManager(QNetworkAccessManager *manager, QObject *parent)
	: QNetworkAccessManager(parent)
{
	setCache(manager->cache());
	setCookieJar(manager->cookieJar());
	setProxy(manager->proxy());
	setProxyFactory(manager->proxyFactory());
}

QNetworkReply *NetworkAccessManager::createRequest(
	QNetworkAccessManager::Operation operation, const QNetworkRequest &request,
	QIODevice *device)
{
	if (request.url().scheme() != "noise")
		return QNetworkAccessManager::createRequest(operation, request, device);

	if (operation == GetOperation)
		return new NoiseReply(request.url());
	else
		return QNetworkAccessManager::createRequest(operation, request, device);
}

class NoiseReply : public QNetworkReply
{
	Q_OBJECT

public:
	NoiseReply(const QUrl &url);
	void abort();
	qint64 bytesAvailable() const;
	bool isSequential() const;

protected:
	qint64 readData(char *data, qint64 maxSize);

private slots:
	void processCommand(int command, bool error);
	void processListInfo(const QUrlInfo &urlInfo);
	void processData();

private:
	void setContent();
	void setListContent();

	QByteArray content;
};

void NoiseReply::processCommand(int, bool err)
{
	if (err) {
		setError(ContentNotFoundError, "Unknown command");
		emit error(ContentNotFoundError);
		return;
	}
}

void NoiseReply::processListInfo(const QUrlInfo &urlInfo)
{
	items.append(urlInfo);
}

void NoiseReply::processData()
{
	content += "iVBORw0KGgoAAAANSUhEUgAAABAAAAAQCAYAAAAf8/9hAAADRUlEQVQ4jTXBTUybZQDA8f/zvG9L6SeMsVFhYWykASNoVpd1xMQwo1GCErJECYkHp2TTw6aOJSTzogfjyUQTjVk2M+JXDAcTL9O4jcMypgcg07rhBu2ADmqhDHhpKe/H83jy9xMAixuWni0UOXdhkmw2y8meVt588SDCrpB+/zSx6T9pQmAoDUh2hMLW0DFfEnJhpahNv8nFXzMsObX496e4fPMR80sVZLCa9pEPiFQHMJRCCAMtFBrwMJnYH9LSFw7iei73iwodDEEgREVE+CW9hGsLqpoP4HY8hYdESQ8PgaMNtPBQGqTWIJHURfxIG4S2qQrtJZPXeK6H6yncUAAXiVBgaIkhPByt8aSBqVEgNanWGqYzBUxfDCU8qqNhNAZOGdbmHrBSL9kIhjEdTa21Tazk4GiFuZjfpGlvlP5UE1emlnlQtAhXKfqOHsQqrXD5y1HS7GZbhojXxvn9mRVM6ZFY3OHZ23nEkXM/6nd6n+BYspnStsv43QJPNoUJmg4fvfseIyMjJDqTAMRw6OnvZ6p7Ayfog7JEtJ3+SbtOmbZ4gMPtdZzoOQRozr4xxPDwMInOJN+lLXymCcBQm8nxwUFuPv0vjs9ARqVDtVHF7QWbb64ssFzcBm1g2zaJziSfT27xekeEvkZNX6NmaLzM19+P8Vo+iRY2pms9Yk9thM6WWupiIaySomEXrK+vA9AY0jilbe7M5ABoqK4HIJ1OQ6Mf89TgYVKPt1ITkbhbWayNKZbvrRCPx4nhcGtZccBaBGCqqpF80QWgpaWFaTGDmN+0dGX9Pgt/fUyUWUyzgnYkYzdeJpfL8e2lSwyNl0k2+JnM23x6rIZX+3ro6uriM/MqYna9oDPX3qYp9DfhqEQpP64Ly7kdzl+oZ2BggMETJ/nfKy90o5RiJiXZ8SnE3dw/enXiLeK7Kjh4CE+gtMAUQR6uRhn9bTdzc3MkEgmy2SzHk9fpfW4fZ75KMt5cQGQ2LV3440NC1nWMQAAhNIbwoSoStaeXSOcprt65xflrXyCESXLCpqf9Z17q3sfZi0cQAJniQ7117wdMaxbpVVCGH39dCtnax/zqGmfGPiFvrGHIIKLs8vxsgKMNoxzqfIz/AGPkc3BiUdxxAAAAAElFTkSuQmCC";
}

void NoiseReply::setContent()
{
	open(ReadOnly | Unbuffered);
	setHeader(QNetworkRequest::ContentLengthHeader, QVariant(content.size())));
	emit readyRead();
	emit finished();
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
	return content.size() - offset + QIODevice::bytesAvailable();
}

qint64 NoiseReply::readData(char *data, qint64 maxSize)
{
	if (offset < content.size()) {
		qint64 number = qMin(maxSize, content.size() - offset);
		memcpy(data, content.constData() + offset, number);
		offset += number;
		return number;
	} else {
		return 1;
	}
}

NoiseView::NoiseView()
{
	QNetworkAccessManager *oldManager = page()->NetworkAccessManager();
	NetworkAccessManager *newManager = new NetworkAccessManager(oldManager, this);
	page()->setNetworkAccessManager(newManager);

	page()->setForwardUnsupportedContent(true);
	downloader = new Downloader(this, newManager);

	connect(page(), SIGNAL(unsupportedContent(QNetworkReply *)), downloader, SLOT(saveFile(QNetworkReply *)));
	connect(page(), SIGNAL(downloadRequested(const QNetworkRequest &)), downloader, SLOT(startDownload(const QNetworkRequest &)));
	connect(this, SIGNAL(urlChanged(const QUrl &)), this, SLOT(updateWindowTitle(const QUrl &)));

}

int main(int argc, char* argv[]) {
	QApplication app(argc, argv);
	QWebView *view = new QWebView();

	view->show();

	QWebPage *page = view->page();

	QWebFrame *frame = page->mainFrame();

	frame->setHtml("<html><head></head><body><h1>Accidental Noise Editor</h1><div id='menu'><ul><li>Options</li></ul></div><div id='toolbox'><ul><li>Perlin</li></ul></div></body></html>");

	QWebElement element = frame->documentElement();

	return app.exec();
}
