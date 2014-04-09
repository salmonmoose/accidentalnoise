#include <QtGui>
#include <QtWebKit>
#include <QApplication>
#include <QWebView>
#include <QWebFrame>
#include <QWebElement>

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