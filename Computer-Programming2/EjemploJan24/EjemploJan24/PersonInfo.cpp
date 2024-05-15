//
//  PersonInfo.cpp
//  EjemploJan24
//
//  Created by Carlos Surillo on 1/24/23.
//

#include "PersonInfo.hpp"
#include<iostream>
using namespace::std;


// This function initializes the first Name  and lastName attribute.
PersonInfo::PersonInfo(){
    MyString aFirstName;;
    MyString aLastName;

    setFirstName(aFirstName);
    setLastName(aLastName);
}

PersonInfo::PersonInfo(MyString aFirstName, MyString aLastName){
    setFirstName(aFirstName);
    setLastName(aLastName);
}
PersonInfo::PersonInfo(const PersonInfo &rigthObject){
    setFirstName(rigthObject.getFirstName());
    setLastName(rigthObject.getLastName());
}
// Destructor function
PersonInfo::~PersonInfo(){
    cout << "The Destructor of PersonInfo class is called\n ";
}

void PersonInfo::setFirstName(MyString aFirstName){
    firstName = aFirstName;
}
void PersonInfo::setLastName(MyString aLastName){
        lastName =aLastName;
}
MyString PersonInfo::getFirstName() const{
    return firstName;
}
MyString PersonInfo::getLastName() const{
        return lastName;
    }

PersonInfo PersonInfo ::operator=(const PersonInfo &rigthObject){
    setFirstName(rigthObject.getFirstName());
    setLastName(rigthObject.getLastName());
    return *this;
}
bool PersonInfo ::operator==(const PersonInfo &rigthObject){
    if (getFirstName() == rigthObject.getFirstName())
        return true;
    else
        return false;
}
bool PersonInfo ::operator<(const PersonInfo &rigthObject){
    if (getFirstName() < rigthObject.getFirstName())
        return true;
    else
        return false;
}
bool PersonInfo ::operator > (const PersonInfo &rigthObject){
    if (getFirstName() > rigthObject.getFirstName())
        return true;
    else
        return false;
}

ostream &operator << (ostream &strm, const PersonInfo &rigthObject)
{
    strm << rigthObject.getFirstName() << " " << rigthObject.getLastName() << endl;
    return strm;
}

istream &operator >> (istream &strm, PersonInfo &rigthObject)
{
    cin.ignore();
    cout << "First Name: ";
    strm>> rigthObject.firstName;
    cin.ignore();
    cout << "Last Name: ";
    strm >> rigthObject.lastName;
    return strm;
}

