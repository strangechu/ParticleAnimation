#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_GLGuiApplication.h"

class GLGuiApplication : public QMainWindow
{
	Q_OBJECT

public:
	GLGuiApplication(QWidget *parent = Q_NULLPTR);

private:
	Ui::GLGuiApplicationClass ui;
};
