
#include <QObject>
#include <QtTest>

#include "StackCalc.hh"

class tst_CITemplateTestBasic: public QObject
{
      Q_OBJECT

    private slots:
      void testBasicMul();
      void testBasicAdd();
      void testBasicDiv();
      void testBasicSub();
      void testBasicClear();
      void testBasicErrorCheck();
};


void 
tst_CITemplateTestBasic::testBasicMul()
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
tst_CITemplateTestBasic::testBasicAdd()
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
tst_CITemplateTestBasic::testBasicDiv()
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
tst_CITemplateTestBasic::testBasicSub()
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
tst_CITemplateTestBasic::testBasicClear()
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
tst_CITemplateTestBasic::testBasicErrorCheck()
{
    StackCalc::Calculator calc;

    calc.AddNumber(20.0);
    calc.AddNumber(3.0);
    calc.AddNumber(5.2); // unexpected.

    double value;
    bool ok = calc.Calc(value);

    QCOMPARE(ok, false);
}



QTEST_MAIN(tst_CITemplateTestBasic)
#include "tst_CITemplateTestBasic.moc"
