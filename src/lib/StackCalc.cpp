
#include <StackCalc.hh>


using namespace StackCalc;


// check 2 operand numbers are available.
bool 
Calculator::IsValid(ItemStack& q, PItem& item1, PItem& item2)
{
    bool valid = false;

    if (q.size()>=2) {
        item2 = q.pop();
        item1 = q.pop();

        if ((item1->_type == NUMBER ) && (item2->_type == NUMBER)) {
            valid = true;
        }
    }         

    return valid;
}



double 
Calculator::Add(ItemStack& q)
{
    PItem item1;
    PItem item2;
    double result = 0.0;

    if (IsValid(_items, item1, item2)) {
        result = item1->_val + item2->_val;
    }
    return result;

}

double 
Calculator::Mul(ItemStack& q)
{

    PItem item1;
    PItem item2;
    double result = 0.0;

    if (IsValid(_items, item1, item2)) {
        result = item1->_val * item2->_val;
    }
    return result;
}

double 
Calculator::Sub(ItemStack& q)
{
    PItem item1;
    PItem item2;
    double result = 0.0;

    if (IsValid(_items, item1, item2)) {
        result = item1->_val - item2->_val;
    }
    return result;
}

double 
Calculator::Div(ItemStack& q)
{
    PItem item1;
    PItem item2;
    double result = 0.0;

    if (IsValid(_items, item1, item2)) {
        if (item2->_val != 0.0) {
            result = item1->_val / item2->_val;
        }
    }
    return result;
}

void
Calculator::AddOperation(ItemType t)
{
    _items.push(PItem(new Item(t)));

}

void
Calculator::AddNumber(double d)
{
    _items.push(PItem(new Item(d)));
}

bool 
Calculator::Calc(double& result)
{
    result  = 0.0;
    bool ok = true;

    while ( !_items.isEmpty()) {
        auto item = _items.pop();

        switch (item->_type) {
            case ItemType::SUBSTRACT:
                result = Sub(_items);
                break;
            case ItemType::MUL:
                result = Mul(_items);
                break;
            case ItemType::DIV:
                result = Div(_items);
                break;
            case ItemType::ADD:
                result = Add(_items);
                break;
            default:
                _items.clear();
                ok = false;
                break;
        }
    }

    return ok;
}

void Calculator::Clear(void)
{
    _items.clear();
}
