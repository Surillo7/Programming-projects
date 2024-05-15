//
//  Jewelery.cpp
//  Actividad10-1
//
//  Created by Carlos Surillo on 2/7/23.
//

#include "Jewelery.hpp"
#include <iostream>
using namespace::std;
Jewelry::Jewelry()
{
    jewelryGender = "MALE";
    jewelryType = "CHAIN";
    jewelryWeight = "14K";
    jewelryMetal = "GOLD";
    //price = 0.0;
}
Jewelry::Jewelry(const string tempGender, const string tempType, const string tempWeight, const string tempMetal, double tempPrice)
{
    jewelryGender = tempGender;
    jewelryType = tempType;
    jewelryWeight = tempWeight;
    jewelryMetal = tempMetal;
    //setPrice(tempPrice);
}

Jewelry::~Jewelry()
{
    //cout << "Jewelry destructror running!" << endl;
}

void Jewelry::setGender(int gen)
{
    switch(gen)
    {
        case 1:
            jewelryGender = "MALE";
            break;
        case 2:
            jewelryGender = "FEMALE";
            break;
        case 3:
            jewelryGender = "CHILD";
            break;
    }
}
void Jewelry::setType(int tempType)
{
    switch(tempType)
    {
        case 1:
            jewelryType = "COLLAR";
            break;
        case 2:
            jewelryType = "CHAIN";
            break;
        case 3:
            jewelryType = "BRACELET";
            break;
        case 4:
            jewelryType = "EARRING";
            break;
    }
}
void Jewelry::setWeight(int tempWeight)
{
    switch(tempWeight)
    {
        case 1:
            jewelryWeight = "14K";
            break;
        case 2:
            jewelryWeight = "18K";
            break;
        case 3:
            jewelryWeight = "24K";
            break;
    }
}
void Jewelry::setMetal(int tempMetal)
{
    switch(tempMetal)
    {
        case 1:
            jewelryMetal = "GOLD";
            break;
        case 2:
            jewelryMetal = "PLATINUM";
            break;
        case 3:
            jewelryMetal = "SILVER";
            break;
    }
}


/*void Jewelry::setPrice(double p)
{
    price = p;
}
double Jewelry::getPrice() const
{
    return price;
}*/


string Jewelry::getJewelryGender() const
{
    return jewelryGender;
}
string Jewelry::getJewelryType() const
{
    return jewelryType;
}
string Jewelry::getJewelryWeight() const
{
    return jewelryWeight;
}
string Jewelry::getJewelryMetal() const
{
    return jewelryMetal;
}
istream &operator>>(istream &in, Jewelry &obj)
{
    int gen, type, weight, met;
    cout << "---Gender---"<< endl;
    cout<< "1.Male" << endl
    << "2.Female" << endl
    << "3.Child" << endl << endl;
    
    cout << "Choice: ";
    cin>> gen;
    cout << endl;
    obj.setGender(gen);
    
    
    cout << "---Jewelry Type---"<< endl;
    cout<< "1.Collar" << endl
    << "2.Chain" << endl
    << "3.Bracelet" << endl
    << "4.Earring"<< endl << endl;
    
    cout << "Choice: ";
    cin>> type;
    cout << endl;
    obj.setType(type);
    
    cout << "---Jewelry Weight---"<< endl;
    cout<< "1.14K" << endl
    << "2.18K" << endl
    << "3.24K" << endl << endl;
    
    cout << "Choice: ";
    cin>> weight;
    cout << endl;
    obj.setWeight(weight);
    
    cout << "---Jewelry Metal---"<< endl;
    cout<< "1.Gold" << endl
    << "2.Platinum" << endl
    << "3.Silver" << endl << endl;
    
    cout << "Choice: ";
    cin>> met;
    cout << endl;
    obj.setMetal(met);

    return in;
}
