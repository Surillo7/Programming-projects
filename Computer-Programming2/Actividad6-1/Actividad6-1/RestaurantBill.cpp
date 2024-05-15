//
//  RestaurantBill.cpp
//  Actividad6-1
//
//  Created by Carlos Surillo on 1/14/23.
//

#include "RestaurantBill.hpp"
#include <iostream>
using namespace::std;

RestaurantBill::RestaurantBill()
{
    char tempName[20] = " ";
    setName(tempName);
    setPlatePrice(0.0);
}

RestaurantBill::RestaurantBill(char* aPlate, double aPrice)
{
    setName(aPlate);
    setPlatePrice(aPrice);
}

RestaurantBill::RestaurantBill(const RestaurantBill &obj)
{
    setName(obj.getName());
    setPlatePrice(obj.getPlatePrice());
}

RestaurantBill::~RestaurantBill()
{
    delete [] plateName;
}

void RestaurantBill::setName(char* aPlate)
{
    plateName = new char[strlen(aPlate) + 1];
    strcpy(plateName, aPlate);
}
void RestaurantBill::setPlatePrice(double aPrice)
{
    price = aPrice;
}

void RestaurantBill::set(char* aPlate, double aPrice)
{
    setName(aPlate);
    setPlatePrice(aPrice);
}

void RestaurantBill::setQnt(double aQ)
{
    quant = aQ;
}

char* RestaurantBill::getName() const
{
    return plateName;
}

double RestaurantBill::getPlatePrice() const
{
    return price;
}

double RestaurantBill::getQnt() const
{
    return quant;
}

double RestaurantBill::getTotalPlatePrice() const
{
    return (getPlatePrice() * getQnt());
}

const RestaurantBill &RestaurantBill::operator=(const RestaurantBill &obj)
{
    delete [] plateName;
    plateName = new char[strlen(obj.getName()) + 1];
    strcpy(plateName, obj.getName());
    
    price = obj.getPlatePrice();
    
    return *this;
}




