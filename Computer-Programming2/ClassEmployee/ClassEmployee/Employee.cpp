//
//  Employee.cpp
//  ClassEmployee
//
//  Created by Carlos Surillo on 11/29/22.
//

#include "Employee.hpp"
#include<iostream>
#include<iomanip>
using namespace::std;

Employee::Employee()
{
    setName(" ");
    setIdNumber(0);
    setDepartment(" ");
    setPosition(" ");
}
Employee::Employee(string aName, int anIdNumber, string aDepartment, string aPosition)
{
    setName(aName);
    setIdNumber(anIdNumber);
    setDepartment(aDepartment);
    setPosition(aPosition);
}
void Employee::setEmployee(string aName, int anIdNumber, string aDepartment,
string  aPosition)
{
    setName(aName);
    setIdNumber(anIdNumber);
    setDepartment(aDepartment);
    setPosition(aPosition);
}

void Employee::setName(string aName)
{
    name = aName;
}

void Employee::setIdNumber(int anIdNumber)
{
    idNumber = anIdNumber;
}

void Employee::setDepartment(string aDepartment)
{
    department = aDepartment;
}

void Employee::setPosition(string  aPosition)
{
    position = aPosition;
}
string Employee::getName() const
{
    return name;
}
int Employee::getIdNumber() const
{
    return idNumber;
}
string Employee::getDepartment() const
{
    return department;
}
string Employee::getPosition() const
{
    return position;
}
void Employee::display() const
{
    cout <<left<<setw(15) << getName() << setw(8) << getIdNumber();
    cout << setw(15) << getDepartment()<<setw(15)<< position << endl;
}
