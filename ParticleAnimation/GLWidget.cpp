#include "GLWidget.h"
#include <GL/glut.h>
#include "ParticleManager.h"

GLWidget::GLWidget(QWidget *parent) : QOpenGLWidget(parent)
{
}


GLWidget::~GLWidget()
{
}

void GLWidget::initializeGL()
{
	glClearColor(0.2, 0.2, 0.2, 1);
	//glEnable(GL_DEPTH_TEST);
	//glEnable(GL_LIGHT0);
	//glEnable(GL_LIGHTING);
	//glEnable(GL_COLOR_MATERIAL);
}

void GLWidget::paintGL()
{
	ParticleManager* pm = ParticleManager::getInstance();

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	//glMatrixMode(GL_MODELVIEW);
	//glLoadIdentity();
	//gluLookAt(0, 0, 5, 0, 0, 0, 0, 1, 0);

	glColor3f(1, 0, 0);
	//glutSolidSphere(0.1, 20, 20);
	//glRectf(-0.5, -0.5, 0.5, 0.5);
	pm->draw();
	glEnd();
}

void GLWidget::resizeGL(int w, int h)
{
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	//gluPerspective(45.0, (float)w / h, 0.01, 100.0);
	gluOrtho2D(-(float)w / h, (float)w / h, -1.0, 1.0);
}