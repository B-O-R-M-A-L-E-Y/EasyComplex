#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <complex.h>

namespace Ui {
class MainWindow;
}

enum operation {NONE=0,SUM,SUB,DIV,MUL};

class MainWindow : public QMainWindow
{
Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

    bool firstFieldExpForm = false;
    bool secondFieldExpForm = false;
    operation selectedOperation = NONE;

    complex firstField;
    complex secondField;
    complex resultField;

public slots:
    void editFirstComplex();
    void editSecondComplex();
    void changeFirstComplexForm();
    void changeSecondComplexForm();
};

#endif // MAINWINDOW_H
