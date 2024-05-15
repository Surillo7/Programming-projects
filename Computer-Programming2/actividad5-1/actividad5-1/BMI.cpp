//
//  BMI.cpp
//  actividad5-1
//
//  Created by Carlos Surillo on 1/10/23.
//

#include "BMI.hpp"
#include <cmath>
#include "NegativeWeight.h"
#include <iostream>
using namespace::std;

BMI::BMI()
{
    setHeight(0.0);
    setWeight(0.0);
}
BMI::BMI(char* aName, double aWeight, double aHeight)
{
    setName(aName);
    setWeight(aWeight);
    setHeight(aHeight);
}
BMI::~BMI()
{
    delete [] name;
}
BMI::BMI(const BMI &obj)
{
    setName(obj.getName());
    setHeight(obj.getHeight());
    setWeight(obj.getWeight());
}

void BMI::setName(char* aName)
{
    name = new char[strlen(aName) + 1];
    strcpy(name, aName);
}
void BMI::setWeight(double aWeight)
{
    if(aWeight >= 0)
    {
        weight = aWeight;
    } else
        throw NegativeWeight(aWeight);
}
void BMI::setHeight(double aHeight)
{
    height = aHeight;
}
double BMI::getHeight() const
{
    return height;
}
double BMI::getWeight() const
{
    return weight;
}
char* BMI::getName() const
{
    return name;
}
double BMI::getBMI() const
{
    return (getWeight()* 703 /(pow(getHeight(), 2.0)));
}

ostream &operator << (ostream &strm, const  BMI &obj)
{
    strm << "Name: " << obj.getName()<< endl;
    strm << "Weight: " << obj.getWeight()<< endl;
    strm << "Height: " << obj.getHeight()<< endl;
    strm << "BMI: " << obj.getBMI()<< endl;
    
    if (obj.getBMI() < 18.5)
    {
        cout << "Person is underweight."<< endl;
    } else if (obj.getBMI() > 25)
    {
        cout << "Person is overweight."<< endl;
    } else
    {
        cout << "Person has optimal weight. " << endl;
    }
    return strm;
}
istream &operator >> (istream &strm, BMI &obj)
{
    char tempName[15];
    double feet, inches;
    bool tryAgain;
    double aWeight;
    cout << "Entre el nombre: ";
    cin>> tempName;
    obj.setName(tempName);
    cout << "Entre el peso en libras: ";
    cin>> aWeight;
    tryAgain = true;
    while (tryAgain){
        try{
        obj.setWeight(aWeight);
            tryAgain = false;
        }
        catch (NegativeWeight e){
            cout << "Please enter a nonnegative value: ";
            cin>> aWeight;
        }
    }//end while
    cout << "Entre la altura (pies y pulgadas): ";
    cin>> feet;
    cin>> inches;
    obj.setHeight((feet * 12) + inches);
    return strm;
}

