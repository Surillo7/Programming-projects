//
//  PersonInfo.h
//  Actividad12-1
//
//  Created by Carlos Surillo on 5/16/23.
//

#ifndef PersonInfo_h
#define PersonInfo_h

#include <iostream>
using namespace::std;
#include "MyString.h"
#include "Date.h"

class PersonInfo
{
private:
    MyString name;
    Date birthday;
public:
    PersonInfo();
    PersonInfo(MyString, Date);
    PersonInfo(const PersonInfo&);
    ~PersonInfo();
    void setName(MyString);
    void setDate(Date);
    MyString getName() const;
    Date getDate() const;
    bool operator < (const PersonInfo&) const;
    bool operator > (const PersonInfo&) const;
    bool operator == (const PersonInfo&) const;
    friend istream & operator >> (istream&, PersonInfo&);
    friend ostream & operator << (ostream&, const PersonInfo&);
};

PersonInfo::PersonInfo():name(), birthday(){}

PersonInfo::PersonInfo(MyString aN, Date bDay):name(aN), birthday(bDay){}

PersonInfo::PersonInfo(const PersonInfo& obj)
{
    setName(obj.getName());
    setDate(obj.getDate());
}

PersonInfo::~PersonInfo(){}

void PersonInfo::setName(MyString aN)
{
    name = aN;
}

void PersonInfo::setDate(Date bday)
{
    birthday = bday;
}

MyString PersonInfo::getName() const
{
    return name;
}

Date PersonInfo::getDate() const
{
    return birthday;
}

bool PersonInfo::operator < (const PersonInfo& obj) const
{
    return (getDate() < obj.getDate());
}
bool PersonInfo::operator > (const PersonInfo& obj) const
{
    return (getDate() > obj.getDate());
}
bool PersonInfo::operator == (const PersonInfo& obj) const
{
    return (getDate() == obj.getDate());
}
istream & operator >> (istream& in, PersonInfo& obj)
{
    cout << "Enter name: ";
    in>> obj.name;
    cout<< "Enter birthdate: " << endl;
    in>> obj.birthday;
    return in;
}
ostream & operator << (ostream& out, const PersonInfo& obj)
{
    out<< "Name: " << obj.getName() << endl;
    out<< "Birthdate: " << obj.getDate()<< endl;
    return out;
}
                                
#endif /* PersonInfo_h */
