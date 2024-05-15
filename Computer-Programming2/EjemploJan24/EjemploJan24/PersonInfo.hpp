//
//  PersonInfo.hpp
//  EjemploJan24
//
//  Created by Carlos Surillo on 1/24/23.
//

#ifndef PersonInfo_hpp
#define PersonInfo_hpp
#include<iostream>
using namespace::std;
#include "MyString.hpp"
class PersonInfo
{
    friend ostream &operator << (ostream &strm, const PersonInfo &rigthObject);
    friend istream &operator >> (istream &strm, PersonInfo &rigthObject);
private:
    MyString firstName; // The contact's first name
    MyString lastName; // The contact's last Name
public:
    // Constructors functions
    PersonInfo();
    PersonInfo(MyString aFirstName, MyString aLastName);
    PersonInfo(const PersonInfo &rigthObject);
    // Destructor
    ~PersonInfo();
    void setFirstName(MyString aFirstName);
    void setLastName(MyString aLastNam);
    MyString getFirstName() const;
    MyString getLastName() const;
    PersonInfo operator=(const PersonInfo &rigthObject);
    bool operator==(const PersonInfo &rigthObject);
    bool operator<(const PersonInfo &rigthObject);
    bool operator>(const PersonInfo &rigthObject);

};
#endif /* PersonInfo_hpp */
