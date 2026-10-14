#include <iostream>
#include "calculator.h"
int main() {
    Calculator calc;
    calc.setXY(12.0F, 10.0f);
    calc.Sum();
    calc.Subs();
    calc.Div();
    calc.Multi();
}