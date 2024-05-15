//
//  Date.hpp
//  EjemploClaseComposicion
//
//  Created by Carlos Surillo on 1/12/23.
//

#ifndef Date_hpp
#define Date_hpp
#include <iostream>
using namespace::std;
class Date
{
private:
    int month, day, year;
public:

    Date(int aMonth = 1, int aDay = 1, int aYear = 2022);
    ~Date();
    void setMonth(int aMonth);
    void setDay(int aDay);
    void setYear(int aYear);
    void set(int aMonth, int aDay, int aYear);
    int getMonth() const;
    int getDay() const;
    int getYear() const;
    friend ostream &operator << (ostream &strm, const Date &obj);
    friend istream &operator >> (istream &strm, Date &obj);
};
#endif /* Date_hpp */
