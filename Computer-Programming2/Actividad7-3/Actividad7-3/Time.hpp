//
//  Time.hpp
//  Actividad7-3
//
//  Created by Carlos Surillo on 1/18/23.
//

#ifndef Time_hpp
#define Time_hpp
#include <string>
#include "Name.hpp"
#include "NegativeNum.h"
#include <iostream>
using namespace::std;

class Time
{
private:
    Name name;
    int sec;
    int min;
    int hrs;
    
public:
    Time();
    Time (int, int, int, Name &);
    Time (int, int, int,char * first, char* last);
    Time(const Time& obj);
    ~Time();
    void set(int aH, int aM, int aS,Name &aName);
    void set(int, int, int, char*, char*);
    void setHours(int);
    void setSec(int);
    void setMin(int);
    void setName(char*, char*);
    void setName(Name &);
    const Name & getName() const;
    int getHours() const;
    int getSec() const;
    int getMin() const;
    bool operator > (const Time &obj) const;
    bool operator == (const Time &obj) const;
    const Time &operator=(const Time &obj);
    friend istream & operator >> (istream &input, Time &obj);
    friend ostream & operator << (ostream &strm, Time &obj);
};

#endif /* Time_hpp */
