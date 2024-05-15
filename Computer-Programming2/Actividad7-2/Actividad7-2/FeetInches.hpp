//
//  FeetInches.hpp
//  Actividad7-2
//
//  Created by Carlos Surillo on 1/28/23.
//

#ifndef FeetInches_hpp
#define FeetInches_hpp
#include <iostream>
using namespace::std;

class FeetInches
{
private:
    double feet;
    double inches;
public:
    FeetInches();
    FeetInches(double, double);
    FeetInches(const FeetInches& obj);
    ~FeetInches();
    void setFeet(int f);
    void setInch(int inch);
    double getFeet() const;
    double getInch() const;
    FeetInches operator * (const FeetInches &obj);
    double operator * (double obj);
    FeetInches operator + (const FeetInches &obj);
    friend istream &operator >> (istream &in, FeetInches &obj);
    friend ostream &operator << (ostream &out, FeetInches &obj);
};

#endif /* FeetInches_hpp */
