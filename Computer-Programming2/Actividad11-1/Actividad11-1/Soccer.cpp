//
//  Soccer.cpp
//  Actividad11-1
//
//  Created by Carlos Surillo on 2/10/23.
//

#include "Soccer.hpp"
#include <iostream>
using namespace::std;

Soccer::Soccer():name()
{
    setNumber(0);
    setPoints(0);
}
Soccer::Soccer(MyString& aName, int aNumber, int aPoints):name(aName)
{
    setNumber(aNumber);
    setPoints(aPoints);
}
Soccer::Soccer(const Soccer& obj):name(obj.name)
{
    setNumber(obj.getNumber());
    setPoints(obj.getPoints());
}
Soccer::~Soccer()
{
     
}
void Soccer::setName(MyString& aName)
{
    name = aName;
}
void Soccer::setNumber(int aNumber)
{
    number = aNumber;
}
void Soccer::setPoints(int aPoints)
{
    points = aPoints;
}
const MyString & Soccer::getName() const
{
    return this->name;
}
int Soccer::getNumber() const
{
    return number;
}
int Soccer::getPoints() const
{
    return points;
}
const Soccer& Soccer::operator=(const Soccer& obj)
{
    name = obj.getName();
    number = obj.getNumber();
    points = obj.getPoints();
    return *this;
}

bool Soccer::operator == (const Soccer &obj)
{
    if(name == obj.getName())
        return true;
    else
        return false;
}
bool Soccer::operator < (const Soccer& obj)
{
    if(points < obj.getPoints())
        return true;
    else
        return false;
}
bool Soccer::operator > (const Soccer& obj)
{
    if(points > obj.getPoints())
        return true;
    else
        return false;
}

ostream& operator<<(ostream& output, const Soccer& obj)
{
    output << "Player's name: " << obj.getName() << endl;
    output << "Player's number: " << obj.getNumber() << endl;
    output << "Player's scored points: " << obj.getPoints() << endl;
    return output;
}
 istream& operator>>(istream& input, Soccer& obj)
{
     cout << "Name: ";
     input >> obj.name;
     cout << "Number: ";
     input >> obj.number;
     cout << "Points: ";
     input >> obj.points;
     return input;
 }
