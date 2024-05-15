//
//  Person.hpp
//  Lab07
//
//  Created by Carlos Surillo on 2/4/23.
//

#ifndef Person_hpp
#define Person_hpp
#include "Date.hpp"
#include <string>
#include <iomanip>
using namespace::std;



class Person
{
protected:
    string firstName;
    string lastName;
    Date * birthDate;
    string ssn;
public:
    Person()
    {
        setFirst(" ");
        setLast(" ");
        setssN(" ");
        birthDate = new Date;
        birthDate->setDate(0,0,0);
    }
    
    Person(string Fname, string Lname, string ssN, Date *adate)
    {
        setFirst(Fname);
        setLast(Lname);
        setssN(ssN);
        setBDate(adate);
    }
    
    ~Person()
    {
        delete birthDate;
    }
    
    void setFirst(string Fname)
    {
        firstName = Fname;
    }
    
    void setLast(string Lname)
    {
        lastName = Lname;
    }
    
    void setssN(string sSn)
    {
        ssn = sSn;
    }
    
    void setBDate(Date *adate)
    {
        birthDate = new Date;
        birthDate = adate;
    }
    
    string getFirst() const
    {
        return firstName;
    }
    string getLast() const
    {
        return lastName;
    }
    string getSsN() const
    {
        return ssn;
    }

    Date * getBDate() const
    {
        return birthDate;
    }
};
#endif /* Person_hpp */
