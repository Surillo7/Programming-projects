//
//  Soccer.hpp
//  Actividad11-1
//
//  Created by Carlos Surillo on 2/10/23.
//

#ifndef Soccer_hpp
#define Soccer_hpp
#include <iostream>
#include <string>
#include "MyString.hpp"
using namespace std;
class Soccer
{
private:
    MyString name;
    int number;
    int points;
public:
    Soccer();
    Soccer(MyString& aName, int aNumber, int aPoints);
    Soccer(const Soccer&);
    ~Soccer();
    void setName(MyString& aName);
    void setNumber(int);
    void setPoints(int);
    const MyString & getName() const;
    int getNumber() const;
    int getPoints() const;
    const Soccer& operator=(const Soccer&);
    bool operator == (const Soccer &obj);
    bool operator < (const Soccer& obj);
    bool operator > (const Soccer& obj);
    friend ostream& operator<<(ostream&, const Soccer&);
    friend istream& operator>>(istream&, Soccer&);
};


#endif /* Soccer_hpp */
