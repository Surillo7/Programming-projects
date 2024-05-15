//
//  Date.hpp
//  MagicDate
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

    //Constructores
    Date();
    Date(int aMonth, int aDay, int aYear);
    //Copy Constructor
    Date(const Date &aDate);
    //Destructor
    ~Date();
    //Mutators
    void setMonth(int aMonth);
    void setDay(int aDay);
    void setYear(int aYear);
    //Accessor
    int getMonth() const;
    int getDay() const;
    int getYear() const;
    //Funcion que imprime la fecha
    void displayDate() const;
    void helpIncrement();
    bool endOfMonth(int testDay);
    bool leapYear(int testYear);
    Date &operator++(); // prefix increment operator
    Date operator++(int); // postfix increment operator
    bool operator==(const Date &obj);
    friend ostream &operator << (ostream &strm, const  Date &obj);
    friend istream &operator >> (istream &strm, Date &obj);
    static const int days[]; // array of days per month
};

#endif /* Date_hpp */
