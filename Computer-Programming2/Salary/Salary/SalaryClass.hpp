//
//  SalaryClass.hpp
//  Salary
//
//  Created by Carlos Surillo on 11/17/22.
//

#ifndef SalaryClass_hpp
#define SalaryClass_hpp
#include <iostream>
#include <string>
using namespace::std;

class Salary
{
private:
    double hours;
    double rate;
    string name;
public:
    Salary();
    ~Salary();
    Salary(double, double, string);
    Salary(const Salary &obj);
    void setName(string);
    void setHours(double);
    void setRate(double);
    void display() const;
    double getHours() const;
    double getRate() const;
    double getPay() const;
    string getName() const;
    
};
#endif 
