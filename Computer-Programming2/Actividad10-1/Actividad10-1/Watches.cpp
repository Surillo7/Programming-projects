//
//  Watches.cpp
//  Actividad10-1
//
//  Created by Carlos Surillo on 2/7/23.
//

#include "Watches.hpp"
#include <iostream>
using namespace::std;

Watches::Watches()
{
    watchGender = "MALE";
    watchBrand = "CASIO";
}
Watches::Watches(const string tempGender, const string tempBrand)
{
    watchGender = tempGender;
    watchBrand = tempBrand;
}
Watches::~Watches()
{
    
}
void Watches::setGender(int gen)
{
    switch (gen)
    {
        case 1:
            watchGender = "MALE";
            break;
        case 2:
            watchGender = "FEMALE";
            break;
        case 3:
            watchGender = "CHILD";
        default:
            break;
    }
}
void Watches::setBrand(int tempBrand)
{
    switch (tempBrand)
    {
        case 1:
            watchBrand = "CASIO";
            break;
        case 2:
            watchBrand = "FERRARY";
            break;
        case 3:
            watchBrand = "COACH";
            break;
        case 4:
            watchBrand = "BILOVA";
            break;
        case 5:
            watchBrand = "CITIZEN";
            break;
        case 6:
            watchBrand = "BOOS";
            break;
        default:
            break;
    }
}

string Watches::getJewelryGender() const
{
    return watchGender;
}
string Watches::getJewelryBrand() const
{
    return watchBrand;
}
istream &operator>>(istream &in, Watches &obj)
{
    int gen, brand;
    cout << "---Gender---"<< endl;
    cout<< "1.Male" << endl
    << "2.Female" << endl
    << "3.Child" << endl << endl;
    
    cout << "Choice: ";
    cin>> gen;
    cout << endl;
    obj.setGender(gen);
    
    
    cout << "---Watch Brand---"<< endl;
    cout<< "1.Casio" << endl
    << "2.Ferrary" << endl
    << "3.Coach" << endl
    << "4.Bilova"<< endl
    << "5.Ctizen" << endl
    << "6.Boos" << endl << endl;
    
    cout << "Choice: ";
    cin>> brand;
    cout << endl;
    obj.setBrand(brand);
    
    return in;
}
