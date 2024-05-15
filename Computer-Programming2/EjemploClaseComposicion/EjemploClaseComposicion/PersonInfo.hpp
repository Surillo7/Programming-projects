//
//  PersonInfo.hpp
//  EjemploClaseComposicion
//
//  Created by Carlos Surillo on 1/12/23.
//

#ifndef PersonInfo_hpp
#define PersonInfo_hpp

#include<iostream>
#include <string>
using namespace::std;

class PersonInfo
{
    friend ostream &operator << (ostream &strm, const PersonInfo &rigthObject);
    friend istream &operator >> (istream &strm, PersonInfo &rigthObject);
private:
    string firstName; // The contact's first name
    string lastName; // The contact's last Name
public:
    // Constructors functions
    PersonInfo();
    PersonInfo(string aFirstName, string aLastName);
    // Destructor
    ~PersonInfo();
    void setFirstName(string aFirstName);
    void setLastName(string aLastNam);
    string getFirstName() const;
    string getLastName() const;
};
#endif

