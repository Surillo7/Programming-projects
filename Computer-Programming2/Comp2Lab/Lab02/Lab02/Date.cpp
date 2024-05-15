//
//  Date.cpp
//  Lab02
//
//  Created by Carlos Surillo on 11/26/22.
//

#include "Date.hpp"
#include <iostream>
using namespace::std;

Date::Date()
{
    setDay(0);
    setMonth(0);
    setYear(0000);
}

Date::~Date()
{
    
}

Date::Date(Date &obj)
{
    setDay(obj.getDay());
    setMonth(obj.getMonth());
    setYear(obj.getYear());
}

Date::Date(int aDay, int aMonth, int aYear)
{
    setDay(aDay);
    setMonth(aMonth);
    setYear(aYear);
}

void Date::setMonth(int aMonth)
{
    month = aMonth;
}

void Date::setDay(int aDay)
{
    day = aDay;
}

void Date::setYear(int aYear)
{
    year = aYear;
}

void Date::setDate(int aDay, int aMonth, int aYear)
{
    setDay(aDay);
    setMonth(aMonth);
    setYear(aYear);
}

int Date::getDay() const
{
    return day;
}

int Date::getYear() const
{
    return year;
}

int Date::getMonth() const
{
    return month;
}


bool Date::getLeap() const
{
    if((getYear() % 4 == 0 && getYear() % 100 !=0 )|| getYear() % 400==0)
        return true;
    else
        return false;
}

bool Date::isValid() const
{
    if (getMonth() < 1 || getMonth() > 12)
    {
        return false;
    } else if(getLeap()== false && (getDay() < 1 || getDay() > monthDays[getMonth() - 1]))
    {
        return false;
    } else if((getLeap()== true && getMonth() == 2) && (getDay() < 1 || getDay() > 1 + monthDays[getMonth() - 1]))
    {
        return false;
    } else
    {
        return true;
    }
}

void Date::display() const
{
    if (isValid() == true)
    {
        cout << "Date is valid."<< endl;
        cout << getDay()<< "/"<< getMonth()<< "/"<<getYear()<< endl;
        if(getLeap()==true)
        {
            cout << "Leap year."<<endl;
        }else
        {
            cout<< "Not leap year." << endl;
        }
    }else
    {
        cout<< "Date is not valid." << endl;
    }
}

