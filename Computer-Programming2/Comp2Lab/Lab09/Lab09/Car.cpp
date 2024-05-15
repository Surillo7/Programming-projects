//
//  Car.cpp
//  Lab09
//
//  Created by Carlos Surillo on 2/11/23.
//

#include "Car.hpp"
#include <iostream>
#include <string>
using namespace::std;

Car::Car(): Vehicle()
{
    setOwner(" ");
    setRegistration(" ");
}
Car::Car(string aM, string aB, string aY, string aO, string aR): Vehicle(aM, aB, aY)
{
    setOwner(aO);
    setRegistration(aR);
}
Car::~Car()
{
    
}
void Car::setOwner(string aO)
{
    owner = aO;
}
void Car::setRegistration(string aR)
{
    registration = aR;
}
string Car::getOwner() const
{
    return owner;
}
string Car::getRegist() const
{
    return registration;
}
bool Car::operator == (const Car &obj) const
{
    if (registration == obj.getRegist())
        return true;
    else
        return false;
}


ostream& operator<<(ostream& out, const Car& obj)
{
    out << "Owner: " << obj.getOwner() << endl;
    out << "Registration: " << obj.getRegist() << endl;
    out << "Model: " << obj.getModel() << endl;
    out << "Brand: " << obj.getBrand() << endl;
    out << "Year: " << obj.getYear() << endl;
    return out;
}

istream& operator>>(istream& in, Car& obj)
{
    string aO, aR, aM, aB, aY;
    cin.ignore();
    cout << "Enter data:"<< endl;
    cout << "Owner: ";
    getline(in, aO);
    obj.setOwner(aO);
    cout << "Registration: ";
    getline(in, aR);
    obj.setRegistration(aR);
    cout << "Model: ";
    getline(in, aM);
    obj.setModel(aM);
    cout << "Brand: ";
    getline(in, aB);
    obj.setBrand(aB);
    cout << "Year: ";
    getline(in, aY);
    obj.setYear(aY);
    return in;
}
