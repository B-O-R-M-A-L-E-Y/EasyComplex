#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //Connection changes bool variable if ChangeForm button is clicked
    connect(ui->firstF_changeFormButton,SIGNAL(clicked()),this,SLOT(changeFirstComplexForm()));
    connect(ui->secondF_changeFormButton,SIGNAL(clicked()),this,SLOT(changeSecondComplexForm()));
    //Connection sets up complex number if QLineEdit boxes aren`t empty & editing is finished
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
void MainWindow::editFirstComplex()
{
    if(firstFieldExpForm) firstField.assignWithExp((ui->firstF_firstLine->text()).toDouble(),
                                                   (ui->firstF_secondLine->text()).toDouble());
    else firstField.assignWithExp((ui->firstF_firstLine->text()).toDouble(),
                                  (ui->firstF_secondLine->text()).toDouble());
}

/**
 * @brief MainWindow::editSecondComplex
 * Slot reads values from QLineEdit boxes and assign appropriate
 * complex numbers with them.
 */
void MainWindow::editSecondComplex()
{
    if(secondFieldExpForm) secondField.assignWithExp((ui->secondF_firstLine->text()).toDouble(),
                                                   (ui->secondF_secondLine->text()).toDouble());
    else secondField.assignWithExp((ui->secondF_firstLine->text()).toDouble(),
                                  (ui->secondF_secondLine->text()).toDouble());
}

/**
 * @brief MainWindow::changeFirstComplexForm
 * Slot changes state of variable enabling/disabling exponential form.
 */
void MainWindow::changeFirstComplexForm()
{
    if (firstFieldExpForm) firstFieldExpForm=false;
    else firstFieldExpForm = true;
}

/**
 * @brief MainWindow::changeFirstComplexForm
 * Slot changes state of variable enabling/disabling exponential form.
 */
void MainWindow::changeSecondComplexForm()
{
    if (secondFieldExpForm) secondFieldExpForm=true;
    else secondFieldExpForm = true;
}
