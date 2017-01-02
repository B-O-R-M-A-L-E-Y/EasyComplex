#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //Connection sets up complex numbers if QLineEdit boxes aren`t empty & text has changed
    connect(ui->firstF_secondLine,SIGNAL(textChanged(QString)),this,SLOT(setFirstComplex()));
    connect(ui->secondF_secondLine,SIGNAL(textChanged(QString)),this,SLOT(setSecondComplex()));
    //Connection reassigns complex numbers if ChangeForm button is clicked
    connect(ui->firstF_changeFormButton,SIGNAL(clicked()),this,SLOT(reassignAndPrintFirstComplex()));
    connect(ui->secondF_changeFormButton,SIGNAL(clicked()),this,SLOT(reassignAndPrintSecondComplex()));
    //Connection change status of complex form if CheckBox Exp form was clicked
    connect(ui->firstF_ExpForm,SIGNAL(stateChanged(int)),this,SLOT(changeFirstComplexForm()));
    connect(ui->secondF_ExpForm,SIGNAL(stateChanged(int)),this,SLOT(changeSecondComplexForm()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

/**
 * @brief MainWindow::editFirstComplex
 * Slot reads values from QLineEdit boxes and assign appropriate
 * complex numbers with them.
 */
void MainWindow::setFirstComplex()
{
    //check if not empty
    if (!((ui->firstF_firstLine->text()).isEmpty()) && !((ui->firstF_secondLine->text()).isEmpty())) {
        //check complex form
        if (firstFieldExpForm) firstComplex.assignWithExp((ui->firstF_firstLine->text()).toDouble(),
                                                          (ui->firstF_secondLine->text()).toDouble());
        else firstComplex.assignWithAlg((ui->firstF_firstLine->text()).toDouble(),
                                        (ui->firstF_secondLine->text()).toDouble());
    }
}

/**
 * @brief MainWindow::editSecondComplex
 * Slot reads values from QLineEdit boxes and assign appropriate
 * complex numbers with them.
 */
void MainWindow::setSecondComplex()
{
    //check if not empty
    if (!((ui->secondF_firstLine->text()).isEmpty()) && !((ui->secondF_secondLine->text()).isEmpty())) {
        //check complex form
        if (secondFieldExpForm) secondComplex.assignWithExp((ui->secondF_firstLine->text()).toDouble(),
                                                            (ui->secondF_secondLine->text()).toDouble());
        else secondComplex.assignWithAlg((ui->secondF_firstLine->text()).toDouble(),
                                         (ui->secondF_secondLine->text()).toDouble());
    }
}

/**
 * @brief MainWindow::changeFirstComplexForm
 * Slot changes state of variable enabling/disabling exponential form.
 */
void MainWindow::changeFirstComplexForm()
{
    if (firstFieldExpForm) {
        firstFieldExpForm=false;
        return;
    }
    else {
        firstFieldExpForm = true;
        return;
    }
}

/**
 * @brief MainWindow::changeFirstComplexForm
 * Slot changes state of variable enabling/disabling exponential form.
 */
void MainWindow::changeSecondComplexForm()
{
    if (secondFieldExpForm) {
        secondFieldExpForm=false;
        return;
    }
    else {
        secondFieldExpForm = true;
        return;
    }
}

/**
 * @brief MainWindow::reassignAndPrintFirstComplex
 * Slot reassigns first complex number form. If Exp form was declared it will change
 * it on Alg form.
 */
void MainWindow::reassignAndPrintFirstComplex()
{
    //check if not empty
    if (!((ui->firstF_firstLine->text()).isEmpty()) && !((ui->firstF_secondLine->text()).isEmpty())) {
        //check if exponential form then convert to algebraic form
        if(firstFieldExpForm) {
            //firstFieldExpForm=false;
            ui->firstF_ExpForm->click();
            QString real = QString::number(firstComplex.get_real_part());
            QString image = QString::number(firstComplex.get_imag_part());
            ui->firstF_firstLine->setText(real);
            ui->firstF_secondLine->setText(image);
            return;
        }
        else {
            //firstFieldExpForm=true;
            ui->firstF_ExpForm->click();
            QString mod = QString::number(firstComplex.get_mod());
            QString arg = QString::number(firstComplex.get_arg());
            ui->firstF_firstLine->setText(mod);
            ui->firstF_secondLine->setText(arg);
            return;
        }
    }
}

/**
 * @brief MainWindow::reassignAndPrintFirstComplex
 * Slot reassigns second complex number form. If Exp form was declared it will change
 * it on Alg form.
 */
void MainWindow::reassignAndPrintSecondComplex()
{
    //check if not empty
    if(!((ui->secondF_firstLine->text()).isEmpty()) && !((ui->secondF_secondLine->text()).isEmpty())) {
        //check if exponential form then convert to algebraic form
        if(secondFieldExpForm) {
            //secondFieldExpForm=false;
            ui->secondF_ExpForm->click();
            QString real = QString::number(secondComplex.get_real_part());
            QString image = QString::number(secondComplex.get_imag_part());
            ui->secondF_firstLine->setText(real);
            ui->secondF_secondLine->setText(image);
            return;
        }
        else {
            //secondFieldExpForm=true;
            ui->secondF_ExpForm->click();
            QString mod = QString::number(secondComplex.get_mod());
            QString arg = QString::number(secondComplex.get_arg());
            ui->secondF_firstLine->setText(mod);
            ui->secondF_secondLine->setText(arg);
            return;
        }
    }
}
