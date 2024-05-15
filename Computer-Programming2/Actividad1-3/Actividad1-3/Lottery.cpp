//
//  Lottery.cpp
//  Actividad1-3
//


#include "Lottery.hpp"
#include <iostream>
using namespace std;

Lottery::Lottery()
{
    num = 0;
}

void Lottery::setValues(int a)
{
    num = a;
}
void Lottery::display() const
{
    cout << getValue() << "  ";
}

int Lottery::getValue() const
{
    return num;
}
