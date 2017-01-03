#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <complex.h>

namespace Ui {
    class MainWindow;
}



class MainWindow : public QMainWindow
{
Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    enum operation {NONE=0,SUM,SUB,DIV,MUL};

    bool firstFieldExpForm = false;
    bool secondFieldExpForm = false;
    bool resultFieldExpForm = false;
    operation selectedOperation = NONE;

    complex firstComplex;
    complex secondComplex;
    complex resultComplex;

public slots:
    void setFirstComplex();
    void setSecondComplex();

    void changeFirstComplexForm();
    void changeSecondComplexForm();

    void reassignAndPrintFirstComplex();
    void reassignAndPrintSecondComplex();

    void setOperation();

    void calculate();
    void changeResultComplexForm();
};

#endif // MAINWINDOW_H
