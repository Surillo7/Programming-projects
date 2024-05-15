//
//  Animal.cpp
//  exercise2
//
//  Created by Carlos Surillo on 11/19/22.
//

#include "Animal.hpp"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

Animal::Animal()
{
    setName("Lion");
    setWeight(190);
    setColor("Tan");
    setLegs(4);
}

Animal::Animal(string Aname, double Aweight, string Acolor, int Alegs)
{
    setName(Aname);
    setWeight(Aweight);
    setColor(Acolor);
    setLegs(Alegs);
}

Animal::Animal(const Animal &obj)
{
    setName(obj.getName());
    setWeight(obj.getWeight());
    setColor(obj.getColor());
    setLegs(obj.getLegs());
}

void Animal::setName(string aName)
{
    name = aName;
}

void Animal::setWeight(double aWeight)
{
    weight = aWeight;
}

void Animal::setColor(string aColor)
{
    color = aColor;
}

void Animal::setLegs(int aLegs)
{
    legs = aLegs;
}

string Animal::getName() const
{
    return name;
}

double Animal::getWeight() const
{
    return weight;
}

string Animal::getColor() const
{
    return color;
}

int Animal::getLegs() const
{
    return legs;
}

void Animal::display() const
{
    cout<< left<< setw(8)<< getName()<< left << setw(8)<< getWeight()<< left << setw(8)<<getColor()<<left<< setw(8)<<getLegs()<<endl;
}
