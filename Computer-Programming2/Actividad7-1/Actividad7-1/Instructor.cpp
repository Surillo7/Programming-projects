//
//  Instructor.cpp
//  Actividad7-1
//
//  Created by Carlos Surillo on 1/12/23.
//

#include "Instructor.hpp"
#include <iostream>
#include <string>
using namespace std;



Instructor::Instructor()
{
    setFirstName(" ");
    setLastName(" ");
    setOfficeNumber(" ");
}
// Constructor
Instructor::Instructor(string lname, string fname, string office)
{
    setFirstName(fname);
    setLastName(lname);
    setOfficeNumber(office);
}
Instructor::Instructor(const Instructor &obj)
{
    setFirstName(obj.getFirstName());
    setLastName(obj.getLastName());
    setOfficeNumber(obj.getOfficeNumber());
}
Instructor::~Instructor()
{
    
}
// set function
void Instructor::set(string lname, string fname, string office)
{
    firstName = fname;
    lastName = lname;
    officeNumber = office;
}
void Instructor::setLastName(string lname)
{
    lastName = lname;
}
void Instructor::setFirstName(string fname)
{
    firstName = fname;
}
void Instructor::setOfficeNumber(string office)
{
    officeNumber = office;
}
string Instructor::getLastName() const
{
    return lastName;
}
string Instructor::getFirstName() const
{
    return firstName;
}
string Instructor::getOfficeNumber() const
{
    return officeNumber;
}
ostream &operator << (ostream &strm, const Instructor &obj)
{
    strm << "First Name: " << obj.getFirstName()<< endl;
    strm << "Last Name: " << obj.getLastName()<< endl;
    strm << "Office Number: " << obj.getOfficeNumber()<< endl;
    return strm;
}
istream &operator >> (istream &strm, Instructor &obj)
{
    string Fn, Ln, ofN;
    
    cout << "First Name: ";
    getline(strm,Fn);
    obj.setFirstName(Fn);
    
    cout << "Last Name: ";
    getline(strm,Ln);
    obj.setLastName(Ln);
    
    cout << "Office Number: ";
    getline(strm,ofN);
    obj.setOfficeNumber(ofN);
    return strm;
}
