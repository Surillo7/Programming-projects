//
//  Instructor.hpp
//  Actividad7-1
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
    string lastName; // Last name
    string firstName; // First name
    string officeNumber; // Office number
public:
    // The default constructor stores empty strings
    // in the string objects.
    Instructor();
    // Constructor
    Instructor(string lname, string fname, string office);
    Instructor(const Instructor &obj);
    ~Instructor();
    // set function
    void set(string lname, string fname, string office);
    void setLastName(string lname);
    void setFirstName(string fname);
    void setOfficeNumber(string office);
    string getLastName() const;
    string getFirstName() const;
    string getOfficeNumber() const;
    friend ostream &operator << (ostream &strm, const Instructor &obj);
    friend istream &operator >> (istream &strm, Instructor &obj);
};

#endif /* Instructor_hpp */
