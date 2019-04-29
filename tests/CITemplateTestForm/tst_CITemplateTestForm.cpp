
#include <QObject>
#include <QtTest>

#include "StackCalc.hh"
#include "calculator.h"

#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>


class tst_CITemplateTestForm: public QObject
{
      Q_OBJECT

    private slots:
      void testFormMul();
    private:
      Calculator calc;

};


void 
tst_CITemplateTestForm::testFormMul()
{

    QApplication::setActiveWindow(&calc);

    QTest::mouseClick(calc.findChild<QPushButton*>("n2"),     Qt::LeftButton);
    QTest::mouseClick(calc.findChild<QPushButton*>("mul"),    Qt::LeftButton);
    QTest::mouseClick(calc.findChild<QPushButton*>("n3"),     Qt::LeftButton);
    QTest::mouseClick(calc.findChild<QPushButton*>("equals"), Qt::LeftButton);

    QCOMPARE(calc.findChild<QLabel*>("display")->text(), QString("works"));

}




QTEST_MAIN(tst_CITemplateTestForm)
#include "tst_CITemplateTestForm.moc"
