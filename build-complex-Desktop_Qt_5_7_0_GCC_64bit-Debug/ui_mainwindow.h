/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *mainlLayout;
    QHBoxLayout *firstFieldLayout;
    QCheckBox *firstF_ExpForm;
    QLineEdit *firstF_firstLine;
    QLineEdit *firstF_secondLine;
    QPushButton *firstF_changeFormButton;
    QHBoxLayout *secondFieldLayout;
    QCheckBox *secondF_ExpForm;
    QLineEdit *secondF_firstLine;
    QLineEdit *secondF_secondLine;
    QPushButton *secondF_changeFormButton;
    QHBoxLayout *downLayout;
    QVBoxLayout *operationLayout;
    QLabel *label;
    QRadioButton *sumButton;
    QRadioButton *subButton;
    QRadioButton *divButton;
    QRadioButton *mulButton;
    QVBoxLayout *resultLayout;
    QLabel *label_3;
    QLineEdit *resultFirstField;
    QLineEdit *resultSecondField;
    QPushButton *changeFormButton;
    QPushButton *calculateButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(342, 209);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 327, 192));
        mainlLayout = new QVBoxLayout(verticalLayoutWidget);
        mainlLayout->setSpacing(6);
        mainlLayout->setContentsMargins(11, 11, 11, 11);
        mainlLayout->setObjectName(QStringLiteral("mainlLayout"));
        mainlLayout->setContentsMargins(0, 0, 0, 0);
        firstFieldLayout = new QHBoxLayout();
        firstFieldLayout->setSpacing(6);
        firstFieldLayout->setObjectName(QStringLiteral("firstFieldLayout"));
        firstF_ExpForm = new QCheckBox(verticalLayoutWidget);
        firstF_ExpForm->setObjectName(QStringLiteral("firstF_ExpForm"));

        firstFieldLayout->addWidget(firstF_ExpForm);

        firstF_firstLine = new QLineEdit(verticalLayoutWidget);
        firstF_firstLine->setObjectName(QStringLiteral("firstF_firstLine"));

        firstFieldLayout->addWidget(firstF_firstLine);

        firstF_secondLine = new QLineEdit(verticalLayoutWidget);
        firstF_secondLine->setObjectName(QStringLiteral("firstF_secondLine"));

        firstFieldLayout->addWidget(firstF_secondLine);

        firstF_changeFormButton = new QPushButton(verticalLayoutWidget);
        firstF_changeFormButton->setObjectName(QStringLiteral("firstF_changeFormButton"));

        firstFieldLayout->addWidget(firstF_changeFormButton);


        mainlLayout->addLayout(firstFieldLayout);

        secondFieldLayout = new QHBoxLayout();
        secondFieldLayout->setSpacing(6);
        secondFieldLayout->setObjectName(QStringLiteral("secondFieldLayout"));
        secondF_ExpForm = new QCheckBox(verticalLayoutWidget);
        secondF_ExpForm->setObjectName(QStringLiteral("secondF_ExpForm"));

        secondFieldLayout->addWidget(secondF_ExpForm);

        secondF_firstLine = new QLineEdit(verticalLayoutWidget);
        secondF_firstLine->setObjectName(QStringLiteral("secondF_firstLine"));

        secondFieldLayout->addWidget(secondF_firstLine);

        secondF_secondLine = new QLineEdit(verticalLayoutWidget);
        secondF_secondLine->setObjectName(QStringLiteral("secondF_secondLine"));

        secondFieldLayout->addWidget(secondF_secondLine);

        secondF_changeFormButton = new QPushButton(verticalLayoutWidget);
        secondF_changeFormButton->setObjectName(QStringLiteral("secondF_changeFormButton"));

        secondFieldLayout->addWidget(secondF_changeFormButton);


        mainlLayout->addLayout(secondFieldLayout);

        downLayout = new QHBoxLayout();
        downLayout->setSpacing(6);
        downLayout->setObjectName(QStringLiteral("downLayout"));
        operationLayout = new QVBoxLayout();
        operationLayout->setSpacing(6);
        operationLayout->setObjectName(QStringLiteral("operationLayout"));
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        operationLayout->addWidget(label);

        sumButton = new QRadioButton(verticalLayoutWidget);
        sumButton->setObjectName(QStringLiteral("sumButton"));

        operationLayout->addWidget(sumButton);

        subButton = new QRadioButton(verticalLayoutWidget);
        subButton->setObjectName(QStringLiteral("subButton"));

        operationLayout->addWidget(subButton);

        divButton = new QRadioButton(verticalLayoutWidget);
        divButton->setObjectName(QStringLiteral("divButton"));

        operationLayout->addWidget(divButton);

        mulButton = new QRadioButton(verticalLayoutWidget);
        mulButton->setObjectName(QStringLiteral("mulButton"));

        operationLayout->addWidget(mulButton);


        downLayout->addLayout(operationLayout);

        resultLayout = new QVBoxLayout();
        resultLayout->setSpacing(6);
        resultLayout->setObjectName(QStringLiteral("resultLayout"));
        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        resultLayout->addWidget(label_3);

        resultFirstField = new QLineEdit(verticalLayoutWidget);
        resultFirstField->setObjectName(QStringLiteral("resultFirstField"));

        resultLayout->addWidget(resultFirstField);

        resultSecondField = new QLineEdit(verticalLayoutWidget);
        resultSecondField->setObjectName(QStringLiteral("resultSecondField"));

        resultLayout->addWidget(resultSecondField);

        changeFormButton = new QPushButton(verticalLayoutWidget);
        changeFormButton->setObjectName(QStringLiteral("changeFormButton"));

        resultLayout->addWidget(changeFormButton);

        calculateButton = new QPushButton(verticalLayoutWidget);
        calculateButton->setObjectName(QStringLiteral("calculateButton"));

        resultLayout->addWidget(calculateButton);


        downLayout->addLayout(resultLayout);


        mainlLayout->addLayout(downLayout);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        firstF_ExpForm->setText(QApplication::translate("MainWindow", "Exp form", 0));
        firstF_firstLine->setText(QString());
        firstF_changeFormButton->setText(QApplication::translate("MainWindow", "Change form", 0));
        secondF_ExpForm->setText(QApplication::translate("MainWindow", "Exp form", 0));
        secondF_firstLine->setText(QString());
        secondF_changeFormButton->setText(QApplication::translate("MainWindow", "Change form", 0));
        label->setText(QApplication::translate("MainWindow", "Select operation:", 0));
        sumButton->setText(QApplication::translate("MainWindow", "Sum", 0));
        subButton->setText(QApplication::translate("MainWindow", "Subtraction", 0));
        divButton->setText(QApplication::translate("MainWindow", "Division", 0));
        mulButton->setText(QApplication::translate("MainWindow", "Multiplication", 0));
        label_3->setText(QApplication::translate("MainWindow", "Result:", 0));
        changeFormButton->setText(QApplication::translate("MainWindow", "Change result form", 0));
        calculateButton->setText(QApplication::translate("MainWindow", "Calculate", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
