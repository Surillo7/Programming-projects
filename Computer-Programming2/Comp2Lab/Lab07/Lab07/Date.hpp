//
//  Date.hpp
//  Lab07
//
//  Created by Carlos Surillo on 2/4/23.
//

#ifndef Date_hpp
#define Date_hpp

#include <iostream>
using namespace::std;

class Date
{
private:
    int monthDays[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int month;
    int day;
    int year;
    
public:
    Date();
    ~Date();
    Date(int, int, int);
    Date(Date &);
    void setMonth(int);
    void setDay(int);
    void setYear(int);
    void setDate(int, int, int);
    int getDay() const;
    int getYear() const;
    int getMonth() const;
    bool getLeap() const;
    bool isValid() const;
    void display() const;
    friend istream &operator >> (istream& in, Date &obj);
    friend ostream &operator << (ostream& out, const Date &obj);

};
#endif /* Date_hpp */
