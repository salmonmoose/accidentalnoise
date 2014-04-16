#include <QtGui>
#include <QtWebKit>
#include <QApplication>
#include <QWebView>
#include <QWebFrame>
#include <QWebElement>
#include <QWebSettings>
#include "noiseview.h"
#include "noisereply.h"

int main(int argc, char* argv[]) {
	qDebug("Creating new QApplication");

	QApplication app(argc, argv);
	NoiseView *view = new NoiseView();

	QString fileName = QDir::currentPath() + "/interface.html";

	view->load(QUrl::fromLocalFile(fileName));

	view->show();

	return app.exec();
}
