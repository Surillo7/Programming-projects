//
//  Instructor.hpp
//  EjemploClaseAgregacion
//
//  Created by Carlos Surillo on 1/12/23.
//

#ifndef Instructor_hpp
#define Instructor_hpp

#include <iostream>
#include <string>
using namespace std;

// Instructor class
class Instructor
{

private:
    string firstName, lastName, officeNumber;
public:
    // The default constructor stores empty strings // in the string objects.
    Instructor();
    // Constructor
    Instructor(string lname, string fname, string office);
    // set function
    void set(string lname, string fname, string office);
    // print function
    void print() const;
};
#endif /* Instructor_hpp */
