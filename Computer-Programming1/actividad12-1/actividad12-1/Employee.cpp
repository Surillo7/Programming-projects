//
//  Employee.cpp
//  actividad12-1
//
//  Created by Carlos Surillo on 10/20/22.
//

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
#include "Employee.hpp"

Employee::Employee()
{
    set_name(" ");
    set_id(0);
    set_department(" ");
    set_position(" ");
}
Employee::Employee(string aName, int aIdNumber, string aDepartment, string aPosition)
{
    set_name(aName);
    set_id(aIdNumber);
    set_department(aDepartment);
    set_position(aPosition);
}
Employee::Employee(string aName, int aIdNumber)
{
    set_name(aName);
    set_id(aIdNumber);
    set_department(" ");
    set_position(" ");
}
void Employee::set_name(string aName)
{
    name = aName;
}
void Employee:: set_id(int aIdNumber)
{
    idNumber = aIdNumber;
}
void Employee::set_department(string aDepartment)
{
    department = aDepartment;
}
void Employee::set_position(string aPosition)
{
    position = aPosition;
}
void Employee::set(string aName, int aIdNumber, string aDepartment, string aPosition)
{
    set_name(aName);
    set_id(aIdNumber);
    set_department(aDepartment);
    set_position(aPosition);
}
string Employee::getName() const
{
    return name;
}
string Employee::getDepartment() const
{
    return department;
}
string Employee::getPosition() const
{
    return position;
}
int Employee::getId() const
{
    return idNumber;
}
void Employee::display() const
{
    cout<< getName() << "\t\t"<< getId() << "\t\t" << getDepartment() << "\t\t" << getPosition()<< endl;
}
