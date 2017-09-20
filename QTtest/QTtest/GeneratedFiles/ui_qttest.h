/********************************************************************************
** Form generated from reading UI file 'qttest.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTTEST_H
#define UI_QTTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QTtestClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QTtestClass)
    {
        if (QTtestClass->objectName().isEmpty())
            QTtestClass->setObjectName(QStringLiteral("QTtestClass"));
        QTtestClass->resize(600, 400);
        menuBar = new QMenuBar(QTtestClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        QTtestClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QTtestClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QTtestClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(QTtestClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QTtestClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(QTtestClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QTtestClass->setStatusBar(statusBar);

        retranslateUi(QTtestClass);

        QMetaObject::connectSlotsByName(QTtestClass);
    } // setupUi

    void retranslateUi(QMainWindow *QTtestClass)
    {
        QTtestClass->setWindowTitle(QApplication::translate("QTtestClass", "QTtest", 0));
    } // retranslateUi

};

namespace Ui {
    class QTtestClass: public Ui_QTtestClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTTEST_H
