//
//  Inventory.hpp
//  Actividad2-3
//
//  Created by Carlos Surillo, Stephanie Cruz, Alanna Vega
//  on 12/4/22.

#ifndef Inventory_hpp
#define Inventory_hpp
#include <iostream>
using namespace::std;
class Inventory
{
private:
    double item;
    double quantity;
    double cost;
    
public:
    // default constructor
    Inventory();
    // overload constructor
    Inventory(double, double, double);
    // mutator
    void setAll(double it, double qty, double cs);
    void setItem(double item);
    void setQuantity(double quantity);
    void setCost(double cost);
    double getItem() const;
    double getQuantity() const;
    double getCost() const;
    void display() const;
    double getTotalCost() const;
};
#endif /* Inventory_hpp */
