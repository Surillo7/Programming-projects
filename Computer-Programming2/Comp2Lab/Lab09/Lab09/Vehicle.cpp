//
//  Vehicle.cpp
//  Lab09
//
//  Created by Carlos Surillo on 2/11/23.
//

#include "Vehicle.hpp"
#include <string>
using namespace::std;

Vehicle::Vehicle()
{
    setModel(" ");
    setBrand(" ");
    setYear("0000");
}
Vehicle::Vehicle(string aM, string aB, string aY)
{
    setModel(aM);
    setBrand(aB);
    setYear(aY);
}
void Vehicle::setModel(string aM)
{
    model = aM;
}
void Vehicle::setBrand(string aB)
{
    Brand = aB;
}
void Vehicle::setYear(string aY)
{
    year = aY;
}
string Vehicle::getModel() const
{
    return model;
}
string Vehicle::getBrand() const
{
    return Brand;
}
string Vehicle::getYear() const
{
    return year;
}
