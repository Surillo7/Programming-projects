//
//  Date.hpp
//  Actividad4-1
//
//  Created by Carlos Surillo on 3/31/23.
//

#ifndef Date_hpp
#define Date_hpp
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
#endif /* Date_hpp */
