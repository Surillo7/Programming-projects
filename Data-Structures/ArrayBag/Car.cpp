//
//  Car.cpp
//  ArrayBag
//
//  Created by Carlos Surillo on 3/16/23.
//

#include "Car.hpp"
#include<iostream>
#include<string>
using namespace::std;

Car::Car()
{
    setYearModel(0);
    setMake(" ");
    setSpeed(0);
}

Car::Car(int aYearModel, string aMake, int aSpeed)
{
    setYearModel(aYearModel);
    setMake(aMake);
    setSpeed(aSpeed);
}

Car::Car(const Car &aCar)
{
    setYearModel(aCar.getYearModel());
    setMake(aCar.getMake());
    setSpeed(aCar.getSpeed());
}

void Car::setYearModel(int aYearMode)
{
    yearModel = aYearMode;
}

void Car::setMake(string aMake)
{
    make = aMake;
}

void Car::setSpeed(int aSpeed)
{
    speed = aSpeed;
}

int Car::getYearModel() const
{
    return yearModel;
}
string Car::getMake() const
{
    return make;
}

int Car::getSpeed() const
{
    return speed;
}

void Car::show()const
{
    cout << "Ano:" << getYearModel() << endl;
    cout << "Modelo:" << getMake() << endl;
    cout << "Velocidad:" << getSpeed() << endl;
}

void Car::getAccelerate()
{
    speed -= 5;
    if (speed < 0)
        speed = 0;
}

void Car::getBrake()
{
    speed = 0;
    speed += 5;
}

bool Car::operator == ( const  Car &obj) const
{
    if (getYearModel() == obj.getYearModel() && getMake() == obj.getMake() &&
        getSpeed() == obj.getSpeed())
        return true;
    else
        return false;
}

istream &operator >> (istream &strm, Car &obj)
{
    // Prompt the user for year.
    cout << "Year: ";
    strm >> obj.yearModel;
    // Prompt the user for make
    cout << "Make: ";
    strm >> obj.make;
    cout << "Speed: ";
    strm >> obj.speed;
    return strm;
}

ostream &operator << (ostream &strm, const Car &obj)
{
    strm << "Year: " << obj.getYearModel() << endl;
    strm << "Make: " << obj.getMake() << endl;
    strm << "Speed: " << obj.getSpeed()<< endl;
    return strm;
}
