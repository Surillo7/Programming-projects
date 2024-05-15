//
//  SalaryClass.cpp
//  Salary
//
//  Created by Carlos Surillo on 11/17/22.
//

#include "SalaryClass.hpp"
#include <iostream>
#include <string>
using namespace std;

Salary::Salary()
{
    cout<< "Invocando constructor" << endl;
    setRate(10);
    setHours(25);
    setName("John Doe");
}

Salary::~Salary()
{
    cout<< "Invocando destructor"<<endl;
}

Salary::Salary(double h, double r, string n)
{
    setName(n);
    setRate(r);
    setHours(h);
}

Salary::Salary(const Salary &obj)
{
    setRate(obj.getRate());
    setName(obj.getName());
    setHours(obj.getHours());
}


void Salary::setName(string n)
{
    name = n;
}
void Salary::setHours(double h)
{
    hours = h;
}
void Salary::setRate(double r)
{
    rate = r;
}
void Salary::display() const
{
    cout<< "Employee data: " << endl;
    cout<< "Name: "<< getName()<<endl;
    cout<< "Hours Worked: "<< getHours()<<endl;
    cout << "Pay rate: $" << getRate()<<endl;
    cout<< "Pay: $"<< getPay() << endl;
}
double Salary::getHours() const
{
    return hours;
}
double Salary::getRate() const
{
    return rate;
}
double Salary:: getPay() const
{
    return getHours() * getRate();
}
string Salary::getName() const
{
    return name;
}
