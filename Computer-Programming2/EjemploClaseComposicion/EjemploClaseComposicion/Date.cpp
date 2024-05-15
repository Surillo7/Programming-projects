//
//  Date.cpp
//  EjemploClaseComposicion
//
//  Created by Carlos Surillo on 1/12/23.
//

#include "Date.hpp"
#include<iostream>
using namespace::std;


Date::Date(int aMonth, int aDay, int aYear) : month(aMonth), day(aDay), year(aYear){}


Date::~Date(){
    cout << "\nDestroying object of type Date\n";
}
//Mutators

void Date::set(int aMonth, int aDay, int aYear){
    setMonth(aMonth);
    setDay(aDay);
    setYear(aYear);

}
void Date::setMonth(int aMonth){
    month = aMonth;

}
void Date::setDay(int aDay){
    day = aDay;
}
void Date::setYear(int aYear){
    this->year = aYear;

}
//Accessor
int Date::getMonth() const{
    return month;
}
int Date::getDay() const{
    return day;
}
int Date::getYear() const{
    return year;
}



ostream &operator << (ostream &strm, const  Date &obj)
{
    strm << obj.getMonth() << "/" << obj.getDay() << "/" << obj.getYear() << endl;
    return strm;
}



istream &operator >> (istream &strm, Date &obj)
{
    int tempMonth, tempDay, tempYear;
    cout << "Month (MM): ";
    strm >> tempMonth;
    while (tempMonth < 1 || tempMonth > 12){
        cout << "Error, Invalid Month, Re-Enter the month\n";
        cout << "Month (MM): ";
        strm >> tempMonth;
    }//end while
    obj.month = tempMonth;
    cout << "Day (DD): ";
    strm >> tempDay;
    while (tempDay < 0 || tempDay >31){
        cout << "Error, Invalid Day, Re-Enter the day\n";
        cout << "Day (DD): ";
        strm >> tempDay;
    }//end while
    obj.day = tempDay;
    cout << "Year (YYYY): ";
    strm >> tempYear;
    while (tempYear < 1900 || tempMonth > 2050){
        cout << "Error, Invalid Year, Re-Enter the year\n";
        cout << "Year (YYYY): ";
        strm >> tempYear;
    }//end while
    obj.year = tempYear;
    return strm;
}
