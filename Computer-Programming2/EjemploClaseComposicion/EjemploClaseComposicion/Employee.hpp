//
//  Employee.hpp
//  EjemploClaseComposicion
//
//  Created by Carlos Surillo on 1/12/23.
//

#ifndef Employee_hpp
#define Employee_hpp
#include <iostream>
#include<string>
using namespace::std;
#include "PersonInfo.hpp"
#include "Date.hpp"

class Employee
{
    friend ostream &operator << (ostream &strm, const Employee &rigthObject);
    friend istream &operator >> (istream &strm, Employee &rigthObject);
private:
    PersonInfo name;
    int idNumber;
    string department;
    string position;
    Date hireDate;
public:
    Employee();
    Employee(string aFirstName, string  aLastName, int anIdNumber, string aDepartment, string aPosition, int amonth, int aDay, int aYear);
    Employee(const PersonInfo &aName, int anIdNumber, string aDepartment, string aPosition, const Date &anHireDate);
    ~Employee();
    void setEmployee(const PersonInfo &aName, int anIdNumber, string aDepartment, string aPosition, const Date &anHireDate);
    void setEmployee(string aFirstName, string  aLastName, int anIdNumber, string aDepartment, string aPosition, int amonth, int aDay, int aYear);
    void setName(const PersonInfo &aName);
    void setName(string aFirstName, string  aLastName);
    void setIdNumber(int idNumber);
    void setDepartment(string aDepartment);
    void setPosition(string aPosition);
    void setHireDate(const Date &anHireDate);
    void setHireDate(int amonth, int aDay, int aYear);
    const PersonInfo &getName() const;
    int getIdNumber() const;
    string getDepartment() const;
    string getPosition() const;
    const Date &getHireDate() const;
};

#endif /* Employee_hpp */
