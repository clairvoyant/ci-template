/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QAction *action_Quit;
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QPushButton *sub;
    QPushButton *n4;
    QPushButton *n6;
    QPushButton *dot;
    QPushButton *n8;
    QPushButton *n0;
    QLabel *display;
    QPushButton *n5;
    QPushButton *n1;
    QPushButton *n3;
    QPushButton *n9;
    QPushButton *equals;
    QPushButton *div;
    QPushButton *n2;
    QPushButton *add;
    QPushButton *mul;
    QPushButton *del;
    QPushButton *C;
    QPushButton *CE;
    QPushButton *n7;
    QMenuBar *menuBar;
    QMenu *menu_File;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName(QStringLiteral("Calculator"));
        Calculator->resize(338, 262);
        action_Quit = new QAction(Calculator);
        action_Quit->setObjectName(QStringLiteral("action_Quit"));
        centralWidget = new QWidget(Calculator);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        sub = new QPushButton(centralWidget);
        sub->setObjectName(QStringLiteral("sub"));

        gridLayout_2->addWidget(sub, 5, 3, 1, 1);

        n4 = new QPushButton(centralWidget);
        n4->setObjectName(QStringLiteral("n4"));

        gridLayout_2->addWidget(n4, 4, 0, 1, 1);

        n6 = new QPushButton(centralWidget);
        n6->setObjectName(QStringLiteral("n6"));

        gridLayout_2->addWidget(n6, 4, 2, 1, 1);

        dot = new QPushButton(centralWidget);
        dot->setObjectName(QStringLiteral("dot"));

        gridLayout_2->addWidget(dot, 6, 2, 1, 1);

        n8 = new QPushButton(centralWidget);
        n8->setObjectName(QStringLiteral("n8"));

        gridLayout_2->addWidget(n8, 3, 1, 1, 1);

        n0 = new QPushButton(centralWidget);
        n0->setObjectName(QStringLiteral("n0"));

        gridLayout_2->addWidget(n0, 6, 1, 1, 1);

        display = new QLabel(centralWidget);
        display->setObjectName(QStringLiteral("display"));
        display->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(display, 0, 0, 1, 4);

        n5 = new QPushButton(centralWidget);
        n5->setObjectName(QStringLiteral("n5"));

        gridLayout_2->addWidget(n5, 4, 1, 1, 1);

        n1 = new QPushButton(centralWidget);
        n1->setObjectName(QStringLiteral("n1"));

        gridLayout_2->addWidget(n1, 5, 0, 1, 1);

        n3 = new QPushButton(centralWidget);
        n3->setObjectName(QStringLiteral("n3"));

        gridLayout_2->addWidget(n3, 5, 2, 1, 1);

        n9 = new QPushButton(centralWidget);
        n9->setObjectName(QStringLiteral("n9"));

        gridLayout_2->addWidget(n9, 3, 2, 1, 1);

        equals = new QPushButton(centralWidget);
        equals->setObjectName(QStringLiteral("equals"));

        gridLayout_2->addWidget(equals, 2, 3, 1, 1);

        div = new QPushButton(centralWidget);
        div->setObjectName(QStringLiteral("div"));

        gridLayout_2->addWidget(div, 3, 3, 1, 1);

        n2 = new QPushButton(centralWidget);
        n2->setObjectName(QStringLiteral("n2"));

        gridLayout_2->addWidget(n2, 5, 1, 1, 1);

        add = new QPushButton(centralWidget);
        add->setObjectName(QStringLiteral("add"));

        gridLayout_2->addWidget(add, 6, 3, 1, 1);

        mul = new QPushButton(centralWidget);
        mul->setObjectName(QStringLiteral("mul"));

        gridLayout_2->addWidget(mul, 4, 3, 1, 1);

        del = new QPushButton(centralWidget);
        del->setObjectName(QStringLiteral("del"));

        gridLayout_2->addWidget(del, 2, 2, 1, 1);

        C = new QPushButton(centralWidget);
        C->setObjectName(QStringLiteral("C"));

        gridLayout_2->addWidget(C, 2, 1, 1, 1);

        CE = new QPushButton(centralWidget);
        CE->setObjectName(QStringLiteral("CE"));

        gridLayout_2->addWidget(CE, 2, 0, 1, 1);

        n7 = new QPushButton(centralWidget);
        n7->setObjectName(QStringLiteral("n7"));

        gridLayout_2->addWidget(n7, 3, 0, 1, 1);

        Calculator->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Calculator);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 338, 21));
        menu_File = new QMenu(menuBar);
        menu_File->setObjectName(QStringLiteral("menu_File"));
        Calculator->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Calculator);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Calculator->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Calculator);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Calculator->setStatusBar(statusBar);

        menuBar->addAction(menu_File->menuAction());
        menu_File->addAction(action_Quit);

        retranslateUi(Calculator);
        QObject::connect(n1, SIGNAL(clicked()), Calculator, SLOT(on_number_clicked()));
        QObject::connect(n2, SIGNAL(clicked()), Calculator, SLOT(on_number_clicked()));
        QObject::connect(n3, SIGNAL(clicked()), Calculator, SLOT(on_number_clicked()));
        QObject::connect(n6, SIGNAL(clicked()), Calculator, SLOT(on_number_clicked()));
        QObject::connect(n5, SIGNAL(clicked()), Calculator, SLOT(on_number_clicked()));
        QObject::connect(n4, SIGNAL(clicked()), Calculator, SLOT(on_number_clicked()));
        QObject::connect(n7, SIGNAL(clicked()), Calculator, SLOT(on_number_clicked()));
        QObject::connect(n8, SIGNAL(clicked()), Calculator, SLOT(on_number_clicked()));
        QObject::connect(n9, SIGNAL(clicked()), Calculator, SLOT(on_number_clicked()));
        QObject::connect(n0, SIGNAL(clicked()), Calculator, SLOT(on_number_clicked()));
        QObject::connect(CE, SIGNAL(clicked()), Calculator, SLOT(on_CE_clicked()));

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QMainWindow *Calculator)
    {
        Calculator->setWindowTitle(QApplication::translate("Calculator", "Calculator", Q_NULLPTR));
        action_Quit->setText(QApplication::translate("Calculator", "&Quit", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_Quit->setShortcut(QApplication::translate("Calculator", "Alt+Q", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        sub->setText(QApplication::translate("Calculator", "-", Q_NULLPTR));
        n4->setText(QApplication::translate("Calculator", "4", Q_NULLPTR));
        n6->setText(QApplication::translate("Calculator", "6", Q_NULLPTR));
        dot->setText(QApplication::translate("Calculator", ".", Q_NULLPTR));
        n8->setText(QApplication::translate("Calculator", "8", Q_NULLPTR));
        n0->setText(QApplication::translate("Calculator", "0", Q_NULLPTR));
        display->setText(QString());
        n5->setText(QApplication::translate("Calculator", "5", Q_NULLPTR));
        n1->setText(QApplication::translate("Calculator", "1", Q_NULLPTR));
        n3->setText(QApplication::translate("Calculator", "3", Q_NULLPTR));
        n9->setText(QApplication::translate("Calculator", "9", Q_NULLPTR));
        equals->setText(QApplication::translate("Calculator", "=", Q_NULLPTR));
        div->setText(QApplication::translate("Calculator", "/", Q_NULLPTR));
        n2->setText(QApplication::translate("Calculator", "2", Q_NULLPTR));
        add->setText(QApplication::translate("Calculator", "+", Q_NULLPTR));
        mul->setText(QApplication::translate("Calculator", "*", Q_NULLPTR));
        del->setText(QApplication::translate("Calculator", "<", Q_NULLPTR));
        C->setText(QApplication::translate("Calculator", "C", Q_NULLPTR));
        CE->setText(QApplication::translate("Calculator", "CE", Q_NULLPTR));
        n7->setText(QApplication::translate("Calculator", "7", Q_NULLPTR));
        menu_File->setTitle(QApplication::translate("Calculator", "&File", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
