//
//  MagicDate.h
//  MagicDate
//
//  Created by Carlos Surillo on 1/12/23.
//

#ifndef MagicDate_h
#define MagicDate_h
#include<iostream>
using namespace::std;
#include "Date.h";

class MagicDate
{
private:
    Date date;
public:
    MagicDate(int month, int day, int year);
    int getYear() const;
    bool getMagicDay() const;
    void display() const;
};

#endif /* MagicDate_h */
