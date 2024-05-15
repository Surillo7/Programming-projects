//
//  Contact_Info.cpp
//  contactinfo
//
//  Created by Carlos Surillo on 12/6/22.
//

#include<iostream>
using namespace::std;
#include "Contact_Info.hpp"

ContactInfo::ContactInfo()
{
    char tempName[20] = "Jose Rivera";
    char tempPhone[20] = "000-000-0000";
    setName(tempName);
    setPhone(tempPhone);
}
//Constructor
ContactInfo::ContactInfo(char *n, char *p)
{ // Initialize the name attribute.
    setName(n);
    // Initialize the phone attribute.
    setPhone(p);
}

// Destructor
ContactInfo::~ContactInfo()
{
    delete[] name;
    delete[] phone;
}


void ContactInfo::setName(char *n)
{
    name = new char[strlen(n) + 1];
    strcpy(name, n);
}

// Private member function: initPhone
// This function initializes the phone attribute.
void ContactInfo::setPhone(char *p)
{
    phone = new char[strlen(p) + 1];
    strcpy(phone, p);
}

const char *ContactInfo::getName() const
{
     return name;
}

const char *ContactInfo::getPhoneNumber() const
{
     return phone;
}

void ContactInfo::display() const
{
    cout << "Nombre:" << getName() << endl;
    cout << "Telephono:" << getPhoneNumber() << endl;
}
