//
//  Date.hpp
//  Actividad12-1
//
//  Created by Carlos Surillo on 5/16/23.
//

#ifndef Date_h
#define Date_h

#include <iostream>
using namespace::std;

class Date
{
private:
    int day, month, year;
public:
    Date();
    Date(int, int, int);
    Date(const Date&);
    ~Date();
    void setDay(int);
    void setMonth(int);
    void setYear(int);
    int getDay() const;
    int getMonth() const;
    int getYear() const;
    bool operator < (const Date&) const;
    bool operator > (const Date&) const;
    bool operator <= (const Date&) const;
    bool operator >= (const Date&) const;
    bool operator == (const Date&) const;
    friend istream & operator >> (istream&, Date&);
    friend ostream & operator << (ostream&, const Date&);
};

Date::Date()
{
    setDay(0);
    setMonth(0);
    setYear(0);
}
Date::Date(int aD, int aM, int aY)
{
    setDay(aD);
    setMonth(aM);
    setYear(aY);
}
Date::Date(const Date& obj)
{
    setDay(obj.getDay());
    setMonth(obj.getMonth());
    setYear(obj.getYear());
}
Date::~Date()
{
    
}
void Date::setDay(int aD)
{
    day = aD;
}
void Date::setMonth(int aM)
{
    month = aM;
}
void Date::setYear(int aY)
{
    year = aY;
}
int Date::getDay() const
{
    return day;
}
int Date::getMonth() const
{
    return month;
}
int Date::getYear() const
{
    return year;
}
bool Date::operator < (const Date& obj) const
{
    if (getYear() < obj.getYear())
        return true;
    else if(getYear()== obj.getYear())
    {
        if(getMonth() < obj.getMonth())
            return true;
        else if(getMonth() == obj.getMonth())
        {
            if(getDay()< obj.getDay())
                return true;
            else
                return false;
        }
        else
            return false;
    }
    else
        return false;
}
bool Date::operator > (const Date& obj) const
{
    if (getYear() > obj.getYear())
        return true;
    else if(getYear()== obj.getYear())
    {
        if(getMonth() > obj.getMonth())
            return true;
        else if(getMonth() == obj.getMonth())
        {
            if(getDay()> obj.getDay())
                return true;
            else
                return false;
        }
        else
            return false;
    }
    else
        return false;
}
bool Date::operator == (const Date& obj) const
{
    if(getYear()== obj.getYear() && getMonth() == obj.getMonth() && getDay()== obj.getDay())
        return true;
    else
        return false;
}


bool Date::operator <= (const Date& obj) const
{
    if(getYear() <= obj.getYear() && getMonth() <= obj.getMonth() && getDay() <= obj.getDay())
        return true;
     else
         return false;
}
bool Date::operator >= (const Date& obj) const
{
   if(getYear() >= obj.getYear() && getMonth() >= obj.getMonth() && getDay() >= obj.getDay())
       return true;
    else
        return false;
}

istream & operator >> (istream& in, Date& obj)
{
    cout << "Day: ";
    in>> obj.day;
    cout << "Month: ";
    in>> obj.month;
    cout << "Year: ";
    in>> obj.year;
    return in;
}
ostream & operator << (ostream& out, const Date& obj)
{
    out<< obj.getMonth() << "/" << obj.getDay() << "/" << obj.getYear();
    return out;
}

#endif /* Date_h */
