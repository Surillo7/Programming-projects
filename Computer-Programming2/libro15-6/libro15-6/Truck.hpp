//
//  Truck.hpp
//  libro15-6
//
//  Created by Carlos Surillo on 1/26/23.
//

#ifndef Truck_hpp
#define Truck_hpp
#include "Automobile.hpp"
#include <string>
using namespace std;

// The Truck class represents a truck.
class Truck : public Automobile
{
private:
    string driveType;
public:
    // Default constructor
    Truck() : Automobile()
    { driveType = ""; }
    // Constructor #2
    Truck(string truckMake, int truckModel, int truckMileage,
    double truckPrice, string truckDriveType) : Automobile(truckMake, truckModel,truckMileage, truckPrice)
     { driveType = truckDriveType; }
    // Accessor for driveType attribute
    string getDriveType()
    { return driveType; }
};
#endif /* Truck_hpp */
