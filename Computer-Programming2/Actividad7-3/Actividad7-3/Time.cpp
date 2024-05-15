//
//  Time.cpp
//  Actividad7-3
//
//  Created by Carlos Surillo on 1/18/23.
//

#include "Time.hpp"
#include <iostream>
using namespace::std;

Time::Time(): name()
{
    setHours(0);
    setMin(0);
    setSec(0);
}

Time::Time(int aH, int aM, int aS, char* first, char* last):name(first, last)
{
    setHours(aH);
    setMin(aM);
    setSec(aS);
}

Time::Time(int aH, int aM, int aS, Name &aName): name(aName)
{
    setHours(aH);
    setMin(aM);
    setSec(aS);
}

Time::Time(const Time &obj):name(obj.name)
{
    setHours(obj.getHours());
    setMin(obj.getMin());
    setSec(obj.getSec());
}

Time::~Time()
{
    
}


void Time::set(int aH, int aM, int aS,Name &aName)
{
    setHours(aH);
    setMin(aM);
    setSec(aS);
    name = aName;
}


void Time::set(int aH, int aM, int aS, char* first, char* last)
{
    setHours(aH);
    setMin(aM);
    setSec(aS);
    name.setFirst(first);
    name.setLast(last);
}
void Time::setHours(int aH)
{
    if(aH >= 0)
    {
        hrs = aH;
    } else
        throw NegativeNum(aH);
}
void Time::setSec(int aS)
{
    if(aS >= 0)
    {
        sec = aS;
    } else
        throw NegativeNum(aS);
}
void Time::setMin(int aM)
{
    if(aM >= 0)
    {
        min = aM;
    } else
        throw NegativeNum(aM);
}

void Time::setName(char* first, char* last)
{
    name.setFirst(first);
    name.setLast(last);
}
void Time::setName(Name & aName)
{
    name = aName;
}
const Name & Time::getName() const
{
    return this-> name;
}


int Time::getHours() const
{
    return hrs;
}
int Time::getSec() const
{
    return sec;
}
int Time::getMin() const
{
    return min;
}


bool Time::operator > (const Time &obj) const
{
    if(hrs > obj.hrs)
        return true;
    else if(hrs == obj.hrs)
    {
        if(min > obj.min)
            return true;
        else if(min == obj.min)
        {
            if (sec > obj.sec)
                return true;
            else
                return false;
        } else
            return false;
    } else
        return false;
}

//bool operator < (const Time &obj) const;
bool Time::operator == (const Time &obj) const
{
    if(hrs == obj.hrs && min == obj.min && sec == obj.sec)
        return true;
    else
        return false;
}
const Time & Time::operator=(const Time &obj)
{
    hrs = obj.hrs;
    min = obj.min;
    sec = obj.sec;
    name = obj.name;
    
    return *this;
}



istream &operator >> (istream &input, Time &obj)
{
    bool tryAgain;
    int aH, aM, aS;
    
    input >> obj.name;
    
    cout << "Hours: ";
    input >> aH;
    tryAgain = true;
    while (tryAgain)
    {
        try
        {
            obj.setHours(aH);
            tryAgain = false;
        }
        catch (NegativeNum e){
            cout << "Please enter a nonnegative value: ";
            cin >> aH;
        }
    }//end while
    
    cout << "Minutes: ";
    input>> aM;
    tryAgain = true;
    while (tryAgain)
    {
        try
        {
            obj.setMin(aM);
            tryAgain = false;
        }
        catch (NegativeNum e){
            cout << "Please enter a nonnegative value: ";
            cin >> aM;
        }
    }//end while
    
    cout << "Seconds: ";
    input>> aS;
    tryAgain = true;
    while (tryAgain)
    {
        try
        {
            obj.setSec(aS);
            tryAgain = false;
        }
        catch (NegativeNum e){
            cout << "Please enter a nonnegative value: ";
            cin >> aS;
        }
    }//end while
    return input;
}

ostream &operator << (ostream &strm, Time &obj)
{
    strm << "Name: " << obj.name << endl;
    
    strm << "Time(hour:min:sec): " ;
    if (obj.hrs < 10)
        strm << "0" << obj.hrs << ":";
    else
        strm << obj.hrs << ":";
    
    if (obj.min < 10)
        strm << "0" << obj.min << ":";
    else
        strm << obj.min << ":";
    
    if (obj.sec < 10)
        strm << "0" << obj.sec;
    else
        strm << obj.sec;
    
    return strm;
}
