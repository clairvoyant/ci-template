
#include <QObject>
#include <QtTest>

#include "StackCalc.hh"

class tst_CITemplateTestInternalBasic: public QObject
{
      Q_OBJECT

    private slots:
      void testBasicMul();
      void testBasicAdd();
      void testBasicDiv();
      void testBasicSub();
};


void 
tst_CITemplateTestInternalBasic::testBasicMul()
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
tst_CITemplateTestInternalBasic::testBasicAdd()
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
tst_CITemplateTestInternalBasic::testBasicDiv()
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
tst_CITemplateTestInternalBasic::testBasicSub()
{
    StackCalc::Calculator calc;

    calc.AddNumber(20.0);
    calc.AddNumber(3.0);
    calc.AddOperation(StackCalc::ItemType::SUBSTRACT);

    double value;
    bool ok = calc.Calc(value);

    QCOMPARE(ok, true);
    QCOMPARE(value, 17.0);
}


QTEST_MAIN(tst_CITemplateTestInternalBasic)
#include "tst_CITemplateTestInternalBasic.moc"
