//
//  Student.cpp
//  Lab04
//
//  Created by Carlos Surillo on 12/10/22.
//

#include <string>
#include <iostream>
#include <iomanip>
#include "Student.hpp"
using namespace::std;

Student::Student()
{
    setCity(" ");
    setName(" ");
    setState(" ");
    setStreet(" ");
    setId(0);
}

Student::Student(string n, string str, string cty, string sta, int i)
{
    setCity(cty);
    setName(n);
    setState(sta);
    setStreet(str);
    setId(i);
}
Student::~Student()
{
    
}
void Student::setName(string n)
{
    studentName = n;
}
string Student::getName() const
{
    return studentName;
}
void Student::setStreet(string str)
{
    street = str;
}
string Student::getStreet() const
{
    return street;
}
void Student::setCity(string cty)
{
    city = cty;
}

string Student::getCity() const
{
    return city;
}

void Student::setState(string sta)
{
    state = sta;
}

string Student::getState() const
{
    return state;
}

void Student::setId(int i)
{
    id = i;
}

int Student::getId() const
{
    return id;
}

void Student::askInfo()
{
    string n, sta, cty, str;
    int i;
    cin.ignore();
    cout << "Enter student information: "<< endl;
    cout << "Name: ";
    getline(cin, n, '\n');
    setName(n);
    cout << "Id #: ";
    cin>> i;
    setId(i);
    cin.ignore();
    cout << "State: ";
    getline(cin, sta, '\n');
    setState(sta);
    cout << "City: ";
    getline(cin, cty, '\n');
    setCity(cty);
    cout << "Street: ";
    getline(cin, str, '\n');
    setStreet(str);
}


void Student::display() const
{
    cout <<left<<setw(15) << getName() << setw(15) << getId();
    cout << setw(15) << getState() <<setw(15)<< getCity() << setw(15)<< getStreet() << endl;
}
