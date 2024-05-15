//
//  Instructor.cpp
//  EjemploClaseAgregacion
//
//  Created by Carlos Surillo on 1/12/23.
//

#include "Instructor.hpp"
#include <iostream>
#include <string>
using namespace std;

Instructor::Instructor()
{
    set("", "", "");
}

Instructor::Instructor(string lname, string fname, string office)
{
    set(lname, fname, office);
}

void Instructor::set(string lname, string fname, string office)
{
    lastName = lname;
    firstName = fname;
    officeNumber = office;
}

void Instructor::print() const
{
    cout << "Last name: " << lastName << endl;
    cout << "First name: " << firstName << endl;
    cout << "Office number: " << officeNumber << endl;
}
