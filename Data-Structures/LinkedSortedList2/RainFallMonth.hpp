//
//  RainFallMonth.hpp
//  Actividad10-1
//
//  Created by Carlos Surillo on 5/1/23.
//

#ifndef RainFallMonth_hpp
#define RainFallMonth_hpp

#include <iostream>
using namespace::std;

class RainFallMonth
{
private:
    string monthName;
    float rainfall;
public:
    RainFallMonth();
    RainFallMonth(string, float);
    RainFallMonth(const RainFallMonth&);
    ~RainFallMonth();
    void setMonth(string);
    void setRain(float);
    string getMonth() const;
    float getRain() const;
    bool operator < (const RainFallMonth&) const;
    bool operator > (const RainFallMonth&) const;
    bool operator == (const RainFallMonth&) const;
    bool operator != (const RainFallMonth&) const;
    friend istream& operator >> (istream&, RainFallMonth&);
    friend ostream& operator << (ostream&, const RainFallMonth&);
};

RainFallMonth::RainFallMonth()
{
    monthName = " ";
    rainfall = 0.0;
}
RainFallMonth::RainFallMonth(string m, float r)
{
    monthName = m;
    rainfall = r;
}

RainFallMonth::RainFallMonth(const RainFallMonth& obj)
{
    setMonth(obj.getMonth());
    setRain(obj.getRain());
}

RainFallMonth::~RainFallMonth()
{
    
}

void RainFallMonth::setMonth(string m)
{
    monthName = m;
}

void RainFallMonth::setRain(float r)
{
    rainfall = r;
}

string RainFallMonth::getMonth() const
{
    return monthName;
}
float RainFallMonth::getRain() const
{
    return rainfall;
}

bool RainFallMonth::operator < (const RainFallMonth& obj) const
{
    if(getRain() < obj.getRain())
        return true;
    else
        return false;
}
bool RainFallMonth::operator > (const RainFallMonth& obj) const
{
    if(getRain() > obj.getRain())
        return true;
    else
        return false;
}



bool RainFallMonth::operator == (const RainFallMonth& obj) const
{
    if (getMonth() == obj.getMonth() && getRain() == obj.getRain())
        return true;
    else
        return false;
}
bool RainFallMonth::operator != (const RainFallMonth& obj) const
{
    if (getMonth() != obj.getMonth() || getRain() != obj.getRain())
        return true;
    else
        return false;
}



istream& operator >> (istream& in, RainFallMonth& obj)
{
    cout << "Enter Month: ";
    in>> obj.monthName;
    cout<< "Enter rainfall: ";
    in>> obj.rainfall;
    return in;
}
ostream& operator << (ostream& out, const RainFallMonth& obj)
{
    out << "Month: " << obj.getMonth() << endl;
    out<< "Rainfall: " << obj.getRain()<< endl;
    return out;
}

#endif /* RainFallMonth_hpp */
