//
//  Lottery.hpp
//  Actividad1-3
//
//Carlos Surillo
//Stephanie Cruz
//Alanna Vega


#ifndef Lottery_hpp
#define Lottery_hpp
#include <iostream>
using namespace::std;

class Lottery
{
private:
    int num;
public:
    Lottery();
    void setValues(int);
    void display() const;
    int getValue() const;
};
#endif
