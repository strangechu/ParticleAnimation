#include "GLGuiApplication.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	GLGuiApplication w;
	w.show();
	return a.exec();
}
