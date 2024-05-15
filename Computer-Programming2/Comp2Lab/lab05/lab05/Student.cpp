//
//  Student.cpp
//  lab05
//
//  Created by Carlos Surillo on 12/21/22.
//

#include "Student.hpp"
#include <string>
#include <iostream>
#include <iomanip>
using namespace::std;

Student::Student()
{
    char temp[50] = " ";
    setCity(temp);
    setName(temp);
    setState(temp);
    setStreet(temp);
    setId(0);
}

Student::Student(char* n, char* str, char* cty, char* sta, long i)
{
    setCity(cty);
    setName(n);
    setState(sta);
    setStreet(str);
    setId(i);
}
Student::~Student()
{
    delete [] city;
    
    delete [] studentName;
    
    delete [] state;
    
    delete[] street;
  
}
void Student::setName(char* n)
{
    studentName = new char[strlen(n) + 1];
    strcpy(studentName, n);
}
char* Student::getName() const
{
    return studentName;
}
void Student::setStreet(char* str)
{
    street = new char[strlen(str) + 1];
    strcpy(street, str);
}
char* Student::getStreet() const
{
    return street;
}
void Student::setCity(char* cty)
{
    city = new char[strlen(cty) + 1];
    strcpy(city, cty);
}

char* Student::getCity() const
{
    return city;
}

void Student::setState(char* sta)
{
    state = new char[strlen(sta) + 1];
    strcpy(state, sta);
}

char* Student::getState() const
{
    return state;
}

void Student::setId(long i)
{
    id = i;
}

long Student::getId() const
{
    return id;
}

void Student::askInfo()
{
    const int SIZE = 30;
    char n[30], sta[30], cty[30], str[30];
    long i;
    cin.ignore();
    cout << "Enter student information: "<< endl;
    cout << "Name: ";
    cin.getline(n, SIZE);
    setName(n);
    cout << "Id #: ";
    cin>> i;
    setId(i);
    cin.ignore();
    cout << "State: ";
    cin.getline(sta, SIZE);
    setState(sta);
    cout << "City: ";
    cin.getline(cty, SIZE);
    setCity(cty);
    cout << "Street: ";
    cin.getline(str, SIZE);
    setStreet(str);
}


void Student::display() const
{
    cout <<left<<setw(15) << getName() << setw(15) << getId();
    cout << setw(15) << getState() <<setw(15)<< getCity() << setw(15)<< getStreet() << endl;
}
