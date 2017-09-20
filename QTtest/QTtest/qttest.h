#ifndef QTTEST_H
#define QTTEST_H

#include <QtWidgets/QMainWindow>
#include "ui_qttest.h"

class QTtest : public QMainWindow
{
    Q_OBJECT

public:
    QTtest(QWidget *parent = 0);
    ~QTtest();

private:
    Ui::QTtestClass ui;
};

#endif // QTTEST_H
