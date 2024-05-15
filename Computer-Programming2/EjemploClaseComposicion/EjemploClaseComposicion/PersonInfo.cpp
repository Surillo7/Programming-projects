//
//  PersonInfo.cpp
//  EjemploClaseComposicion
//
//  Created by Carlos Surillo on 1/12/23.
//

#include "PersonInfo.hpp"
#include<iostream>
#include<string>
using namespace::std;


// This function initializes the first Name  and lastName attribute.
PersonInfo::PersonInfo(){
    char aFirstName[20] = "Jhon";
    char aLastName[20] = "Doe";
    setFirstName(aFirstName);
    setLastName(aLastName);
}

PersonInfo::PersonInfo(string aFirstName, string aLastName){
    setFirstName(aFirstName);
    setLastName(aLastName);
}

// Destructor function
PersonInfo::~PersonInfo(){
    cout << "The Destructor of PersonInfo class is called\n ";
}

void PersonInfo :: setFirstName(string aFirstName){
    firstName = aFirstName;
}
void PersonInfo :: setLastName(string aLastName){
        lastName =aLastName;
}
string PersonInfo :: getFirstName() const{
    return firstName;
}
string PersonInfo :: getLastName() const{
        return lastName;
    }

ostream &operator << (ostream &strm, const PersonInfo &rigthObject)
{
    strm <<"Name: "<< rigthObject.getFirstName() << " " << rigthObject.getLastName() << endl;
    return strm;
}

istream &operator >> (istream &strm, PersonInfo &rigthObject)
{
    string aFirstName;
    string aLastName;

    cout << "First Name: ";
    getline(strm,aFirstName);
    // Prompt the user for the first name.
    rigthObject.setFirstName(aFirstName);
    cin.ignore();
    cout << "Last Name: ";
    getline(strm, aLastName);
    // Prompt the user for the first name.
    rigthObject.setLastName(aLastName);
    return strm;
}
