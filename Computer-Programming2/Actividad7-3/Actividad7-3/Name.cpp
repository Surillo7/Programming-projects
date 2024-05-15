//
//  Name.cpp
//  Actividad7-3
//
//  Created by Carlos Surillo on 1/20/23.
//

#include "Name.hpp"
#include <iostream>
using namespace::std;

Name::Name()
{
    char temp[20] = " ";
    setFirst(temp);
    setLast(temp);
}


Name::Name(char* first, char* last)
{
    setFirst(first);
    setLast(last);
}
Name::Name(const Name& obj)
{
    setFirst(obj.getFirst());
    setLast(obj.getLast());
}
Name::~Name()
{
    delete [] firstName;
    delete [] lastName;
}
void Name::setFirst(char* first)
{
    firstName = new char[strlen(first) + 1];
    strcpy(firstName, first);
}
void Name::setLast(char* last)
{
    lastName = new char[strlen(last) + 1];
    strcpy(lastName, last);
}
char* Name::getFirst() const
{
    return firstName;
}
char* Name::getLast() const
{
    return lastName;
}

const Name & Name::operator = (const Name &obj) 
{
    delete [] firstName;
    firstName = new char[strlen(obj.firstName) + 1];
    strcpy(firstName, obj.firstName);

    
    delete [] lastName;
    lastName = new char[strlen(obj.lastName) + 1];
    strcpy(lastName, obj.lastName);
    
    return *this;
}

istream &operator >>(istream &input, Name& obj)
{
    char fN[20];
    char lN[20];
    cin.ignore();
    
    cout << "First Name: ";
    input.getline(fN, 20);
    obj.setFirst(fN);
    
    cout << "Last Name: ";
    input.getline(lN, 20);
    obj.setLast(lN);
    
    return input;
    
}
ostream &operator << (ostream &output, Name& obj)
{
    output << obj.firstName << " " << obj.lastName;
    return output;
}
