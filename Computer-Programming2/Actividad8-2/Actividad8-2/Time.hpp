//
//  Time.hpp
//  Actividad8-2
//
//  Created by Carlos Surillo on 1/25/23.
//

#ifndef Time_hpp
#define Time_hpp
#include "NegativeNum.h"
#include <iostream>
using namespace::std;

class Time
{
private:
    int sec;
    int min;
    int hrs;
    
public:
    Time();
    Time (int, int, int);
    Time(const Time& obj);
    ~Time();
    void set(int aH, int aM, int aS);
    void setHours(int);
    void setSec(int);
    void setMin(int);
    int getHours() const;
    int getSec() const;
    int getMin() const;
    bool operator > (const Time &obj) const;
    bool operator < (const Time &obj) const;
    bool operator == (const Time &obj) const;
    const Time &operator=(const Time &obj);
    friend istream & operator >> (istream &input, Time &obj);
    friend ostream & operator << (ostream &strm, Time &obj);
};

#endif /* Time_hpp */

