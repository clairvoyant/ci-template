
#include <QObject>
#include <QtTest>

#include "StackCalc.hh"

class tst_CITemplateTestForm: public QObject
{
      Q_OBJECT

    private slots:
      void testFormMul();
      void testFormAdd();
      void testFormDiv();
      void testFormSub();
      void testFormClear();
      void testFormErrorCheck();
};


void 
tst_CITemplateTestForm::testFormMul()
{
    StackCalc::Calculator calc;

    calc.AddNumber(2.0);
    calc.AddNumber(3.0);
    calc.AddOperation(StackCalc::ItemType::MUL);

    double value;
    bool ok = calc.Calc(value);

    QCOMPARE(ok, true);
    QCOMPARE(value, 6.0);
}

void 
tst_CITemplateTestForm::testFormAdd()
{
    StackCalc::Calculator calc;

    calc.AddNumber(2.0);
    calc.AddNumber(3.0);
    calc.AddOperation(StackCalc::ItemType::ADD);

    double value;
    bool ok = calc.Calc(value);

    QCOMPARE(ok, true);
    QCOMPARE(value, 5.0);
}
void 
tst_CITemplateTestForm::testFormDiv()
{
    StackCalc::Calculator calc;

    calc.AddNumber(16.0);
    calc.AddNumber(2.0);
    calc.AddOperation(StackCalc::ItemType::DIV);

    double value;
    bool ok = calc.Calc(value);

    QCOMPARE(ok, true);
    QCOMPARE(value, 8.0);
}

void 
tst_CITemplateTestForm::testFormSub()
{
    StackCalc::Calculator calc;

    calc.AddNumber(20.0);
    calc.AddNumber(3.0);
    calc.AddOperation(StackCalc::ItemType::SUBSTRACT);

    double value;
    bool ok = calc.Calc(value);

    QCOMPARE(ok,    true);
    QCOMPARE(value, 17.0);
}

void 
tst_CITemplateTestForm::testFormClear()
{
    StackCalc::Calculator calc;

    calc.AddNumber(20.0);
    calc.AddNumber(3.0);
    calc.AddOperation(StackCalc::ItemType::SUBSTRACT);
    calc.Clear();

    double value;
    bool ok = calc.Calc(value);

    QCOMPARE(ok, false);
}


void 
tst_CITemplateTestForm::testFormErrorCheck()
{
    StackCalc::Calculator calc;

    calc.AddNumber(20.0);
    calc.AddNumber(3.0);
    calc.AddNumber(5.2); // unexpected.

    double value;
    bool ok = calc.Calc(value);

    QCOMPARE(ok, false);
}



QTEST_MAIN(tst_CITemplateTestForm)
#include "tst_CITemplateTestForm.moc"
