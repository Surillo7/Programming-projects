//
//  RoomCarpet.cpp
//  Actividad7-2
//
//  Created by Carlos Surillo on 1/28/23.
//

#include "RoomCarpet.hpp"
#include <iostream>
#include <iomanip>
using namespace::std;

Roomcarpet::Roomcarpet(): measurement(){
    setCost(0.0);
}

Roomcarpet::Roomcarpet(double c, RoomDimension mm): measurement(mm)
{
    setCost(c);
}
Roomcarpet::Roomcarpet(const Roomcarpet& obj): measurement(obj.measurement)
{
    setCost(obj.cost);
}
Roomcarpet::~Roomcarpet()
{
    
}
void Roomcarpet::setCost(double c)
{
    cost = c;
}
void Roomcarpet::setCarpet(RoomDimension mm)
{
    measurement = mm;
}
FeetInches Roomcarpet::getCarpet() const
{
    return measurement.getArea();
}
double Roomcarpet::getCost() const
{
    return cost;
}
double Roomcarpet::getTotPrice() const
{
    return getCarpet() * getCost();
}
ostream &operator << (ostream &out, Roomcarpet &obj)
{
    cout << fixed << setprecision(2);
    cout << "Cost of carpet: $" << obj.getTotPrice() << endl;
    return out;
}
istream &operator >> (istream &in, Roomcarpet &obj)
{
    cout << "---Enter dimensions---" << endl;
    in >> obj.measurement;
    cout << "Cost per square foot: $";
    in>> obj.cost;
    
    return in;
}
