
#ifndef __STACKCALC_H__
#define __STACKCALC_H__


#include <QStack>
#include <QSharedPointer>


namespace StackCalc {

    typedef enum {
        NUMBER,
        SUBSTRACT,
        MUL,
        DIV,
        ADD,
        UNDEF 
    } ItemType;

    struct Item {
        ItemType _type;
        double   _val;

        Item(ItemType t) { _type = t;      _val = 0.0; };
        Item(double   v) { _type = NUMBER; _val = v; };

    
    };

    typedef QSharedPointer<Item> PItem;
    typedef QStack<PItem>        ItemStack;


    class Calculator {
        private:
            ItemStack _items;

            bool IsValid(ItemStack& q, PItem& item1, PItem& item2);

            double Add(ItemStack& q);
            double Mul(ItemStack& q);
            double Sub(ItemStack& q);
            double Div(ItemStack& q);

            Calculator(const Calculator&)            = delete;
            Calculator& operator=(const Calculator&) = delete;
        public:
            Calculator() {};

            void AddOperation(ItemType t);
            void AddNumber(double d);
            bool Calc(double& result);  // TODO exception or error handling.
            void Clear(void);  // TODO exception or error handling.
    };

};

#endif
