//
//  Inventory.cpp
//  Actividad2-3
//
//

#include "Inventory.hpp"
#include<iostream>
#include <iomanip>
using namespace::std;

Inventory::Inventory()
{
    setItem(0);
    setQuantity(0);
    setCost(0);
}

Inventory::Inventory( double it, double qty, double cs)
    
{
    setItem(it);
    setQuantity(qty);
    setCost(cs);
    
}
void Inventory::setAll(double it, double qty, double cs)
{
    setItem(it);
    setQuantity(qty);
    setCost(cs);
}

void Inventory::setItem(double i)
{
    item = i;
}
void Inventory::setQuantity(double q)
{
    quantity= q;
}

void Inventory::setCost(double c)
{
    cost = c;
}
double  Inventory::getItem() const
{
    return item;
}
double Inventory::getQuantity () const
{
    return quantity;
}
double Inventory::getCost() const
{
    return cost;
}

double Inventory::getTotalCost() const
{
    return getQuantity() * getCost();
}

void Inventory::display() const
{
    cout <<left<<setw(15) << getItem() << setw(8) << getQuantity();
    cout << setw(15) <<getCost()<<setw(15)<< getTotalCost() << endl;
}
