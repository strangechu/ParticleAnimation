/********************************************************************************
** Form generated from reading UI file 'GLGuiApplication.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GLGUIAPPLICATION_H
#define UI_GLGUIAPPLICATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "glwidget.h"

QT_BEGIN_NAMESPACE

class Ui_GLGuiApplicationClass
{
public:
    QWidget *centralWidget;
    GLWidget *openGLWidget;
    QPushButton *quitButton;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *GLGuiApplicationClass)
    {
        if (GLGuiApplicationClass->objectName().isEmpty())
            GLGuiApplicationClass->setObjectName(QStringLiteral("GLGuiApplicationClass"));
        GLGuiApplicationClass->resize(681, 492);
        centralWidget = new QWidget(GLGuiApplicationClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        openGLWidget = new GLWidget(centralWidget);
        openGLWidget->setObjectName(QStringLiteral("openGLWidget"));
        openGLWidget->setGeometry(QRect(20, 20, 400, 400));
        quitButton = new QPushButton(centralWidget);
        quitButton->setObjectName(QStringLiteral("quitButton"));
        quitButton->setGeometry(QRect(590, 390, 75, 23));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(510, 70, 112, 34));
        GLGuiApplicationClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(GLGuiApplicationClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 681, 29));
        GLGuiApplicationClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(GLGuiApplicationClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        GLGuiApplicationClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(GLGuiApplicationClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        GLGuiApplicationClass->setStatusBar(statusBar);

        retranslateUi(GLGuiApplicationClass);
        QObject::connect(quitButton, SIGNAL(released()), GLGuiApplicationClass, SLOT(close()));
        QObject::connect(pushButton, SIGNAL(released()), GLGuiApplicationClass, SLOT(onStartBtnClicked()));
        QObject::connect(pushButton, SIGNAL(released()), openGLWidget, SLOT(onStartBtnClicked()));

        QMetaObject::connectSlotsByName(GLGuiApplicationClass);
    } // setupUi

    void retranslateUi(QMainWindow *GLGuiApplicationClass)
    {
        GLGuiApplicationClass->setWindowTitle(QApplication::translate("GLGuiApplicationClass", "GLGuiApplication", 0));
        quitButton->setText(QApplication::translate("GLGuiApplicationClass", "Quit", 0));
        pushButton->setText(QApplication::translate("GLGuiApplicationClass", "Start Simulation", 0));
    } // retranslateUi

};

namespace Ui {
    class GLGuiApplicationClass: public Ui_GLGuiApplicationClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GLGUIAPPLICATION_H
