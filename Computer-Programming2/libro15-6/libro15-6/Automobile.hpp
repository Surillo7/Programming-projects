//
//  Automobile.hpp
//  libro15-6
//
//  Created by Carlos Surillo on 1/26/23.
//

#ifndef Automobile_hpp
#define Automobile_hpp

#include <string>
using namespace std;
// The Automobile class holds general data
// about an automobile in inventory.
class Automobile
{
private:
    string make;
    int model;
    int mileage;
    double price; // The auto's price
public:
// Default constructor
    Automobile()
    {
        make = "";
        model = 0;
        mileage = 0;
        price = 0.0;
    }
    // Constructor
    Automobile(string autoMake, int autoModel,
               int autoMileage, double autoPrice)
    {
        make = autoMake;
        model = autoModel;
        mileage = autoMileage;
        price = autoPrice;
    }
    // Accessors
    string getMake() const
    {
        return make;
    }
    int getModel() const
    {
        return model;
    }
    int getMileage() const
    {
        return mileage;
    }
    double getPrice() const
    {
        return price;
    }
};
#endif /* Automobile_hpp */
