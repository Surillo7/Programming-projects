//
//  Employee.cpp
//  EjemploClaseComposicion
//
//  Created by Carlos Surillo on 1/12/23.
//

#include "Employee.hpp"
#include<iostream>
#include<iomanip>
#include <string>
using namespace::std;
#include "PersonInfo.hpp"
#include "Date.hpp"


Employee::Employee():name(), hireDate(){
    setIdNumber(0);
    setDepartment("");
    setPosition("");
}

Employee::Employee(string aFirstName, string  aLastName, int anIdNumber, string aDepartment, string aPosition, int amonth, int aDay, int aYear){
    name.setFirstName(aFirstName);
    name.setLastName(aLastName);
    setIdNumber(anIdNumber);
    setDepartment(aDepartment);
    setPosition(aPosition);
    hireDate.set(amonth, aDay, aYear);
}

Employee::Employee(const PersonInfo &aName, int anIdNumber, string aDepartment, string aPosition, const Date &anHireDate) :name(aName), hireDate(anHireDate){
    setIdNumber(anIdNumber);
    setDepartment(aDepartment);
    setPosition(aPosition);
    hireDate.set(anHireDate.getMonth(), anHireDate.getMonth(), anHireDate.getDay());
}
Employee::~Employee(){
    cout << "The Destructor of Employee class is called\n ";
}

void Employee::setEmployee(string aFirstName, string  aLastName, int anIdNumber, string aDepartment, string aPosition, int amonth, int aDay, int aYear){
    name.setFirstName(aFirstName);
    name.setLastName(aLastName);
    setIdNumber(anIdNumber);
    setDepartment(aDepartment);
    setPosition(aPosition);
    hireDate.set(amonth, aDay, aYear);
}
void Employee::setEmployee(const PersonInfo &aName, int anIdNumber, string aDepartment, string aPosition, const Date &anHireDate)
{
    name.setFirstName(aName.getFirstName());
    name.setLastName(aName.getLastName());
    setIdNumber(anIdNumber);
    setDepartment(aDepartment);
    setPosition(aPosition);
    hireDate.set(anHireDate.getMonth(), anHireDate.getMonth(), anHireDate.getDay());
}

void Employee::setName(string aFirstName, string  aLastName){
    name.setFirstName(aFirstName);
    name.setLastName(aLastName);
}
void Employee::setName(const PersonInfo &aName){
    name.setFirstName(aName.getFirstName());
    name.setLastName(aName.getLastName());
}
void Employee::setIdNumber(int anIdNumber){
    idNumber = anIdNumber;
}
void Employee::setDepartment(string aDepartment){
    department = aDepartment;
}
void Employee::setPosition(string aPosition){
    position = aPosition;
}
const PersonInfo & Employee::getName() const{
    return name;
}
int Employee::getIdNumber() const{
    return idNumber;
}
string Employee::getDepartment() const{
    return department;
}
string Employee::getPosition() const{
    return position;
}

const Date & Employee::getHireDate() const{
        return hireDate;
    }

ostream &operator << (ostream &strm, const Employee &rigthObject){
    cout << rigthObject.getName();
    cout << "Id Number: " << rigthObject.getIdNumber() << endl;
    cout << "Department: " << rigthObject.getDepartment() << endl;
    cout << "Position:" << rigthObject.getPosition() << endl;
    cout << "Hire date: ";
    cout << rigthObject.getHireDate();
    return strm;
}


istream &operator >> (istream &strm, Employee &rigthObject){
    int anIdNumber;
    string aPosition;
    string aDepartment;

    cin >> rigthObject.name;
    cout << "Enter the Employee Id Number: ";
    cin >> anIdNumber;
    rigthObject.setIdNumber(anIdNumber);
    cout << "Enter the hire date (mm/dd/yyyy) : ";
    cin >> rigthObject.hireDate;
    cin.ignore();
    cout << "Enter the Employee department: ";
    getline(strm, aDepartment);
    rigthObject.setDepartment(aDepartment);
    
    cin.ignore();
    cout << "Enter the Employee position: ";
    getline(strm, aPosition);
    rigthObject.setPosition(aPosition);
    return strm;
}
