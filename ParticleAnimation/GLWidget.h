#pragma once

#include <QOpenGLWidget.h>
#include <QTimer.h>

class GLWidget : public QOpenGLWidget
{
	Q_OBJECT
public:
	explicit GLWidget(QWidget *parent = 0);
	~GLWidget();

private:
	void GLWidget::initializeGL();
	void GLWidget::paintGL();
	void GLWidget::resizeGL(int w, int h);

private slots:
	void stepSimulation();
	void onStartBtnClicked();
};

