//
//  FeetInches.cpp
//  Actividad7-2
//
//  Created by Carlos Surillo on 1/28/23.
//

#include "FeetInches.hpp"
#include <iostream>
using namespace::std;


FeetInches::FeetInches()
{
    setFeet(0.0);
    setInch(0.0);
}

FeetInches::FeetInches(double f, double inch)
{
    setFeet(f);
    setInch(inch);
}

FeetInches::FeetInches(const FeetInches& obj)
{
    setFeet(obj.getFeet());
    setInch(obj.getInch());
}

FeetInches::~FeetInches()
{
    
}

void FeetInches::setFeet(int f)
{
    feet = f;
}
void FeetInches::setInch(int inch)
{
    inches = inch;
}
double FeetInches::getFeet() const
{
    return feet;
}
double FeetInches::getInch() const
{
    return inches;
}

FeetInches FeetInches::operator * (const FeetInches &obj)
{
    FeetInches res;
    res.feet = feet * obj.feet;
    res.inches = inches * obj.inches;
    return res;
}
FeetInches FeetInches::operator + (const FeetInches &obj)
{
    FeetInches res;
    res.feet = feet + obj.feet;
    res.inches = inches + obj.inches;
    return res;
}

double FeetInches::operator * (double  right)
{
      double temp;
      temp = (feet + (inches/12)) * right;
      return temp;
}

istream &operator >> (istream &in, FeetInches &obj)
{
    double ft;
    cout << "Feet: ";
    cin>> ft;
    cout << "Inches: ";
    in>> obj.inches;
    
    obj.setFeet(ft + (obj.getInch()/12));
    
    return in;
}
ostream &operator << (ostream &out, FeetInches &obj)
{
    out << obj.getFeet();
    return out;
}
