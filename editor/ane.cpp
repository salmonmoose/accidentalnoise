#include <QApplication>
#include "noiseview.h"

int main(int argc, char* argv[]) {
	QApplication app(argc, argv);
	NoiseView *view = new NoiseView();

	view->show();

	return app.exec();
}
