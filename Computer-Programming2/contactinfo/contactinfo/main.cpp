//
//  main.cpp
//  contactinfo
//
//  Created by Carlos Surillo on 12/6/22.
//

#include<iostream>
#include<string>
using namespace::std;
#include "Contact_Info.hpp"

int main()
{
    char tempName[20] = "Brian Rosado";
    char tempPhone[20] = "787-890-8909";
    ContactInfo std1(tempName, tempPhone), std2;
    char *name = nullptr;
    char *phoneNumber = nullptr;
    const int SIZE = 15;
    name = new char[SIZE];
    phoneNumber = new char[SIZE];
    std1.display();
    std2.display();
    cout << "Entre su nombre:";
    cin.getline(name, SIZE);
    cout << "Entre su numero de telefono:";
    cin.getline(phoneNumber, SIZE);
    std2.setName(name);
    std2.setPhone(phoneNumber);
    std2.display();
    delete [] name;
    name = nullptr;
    delete [] phoneNumber;
    phoneNumber = nullptr;
    
    return 0;
}
