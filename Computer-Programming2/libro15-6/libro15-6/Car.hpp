//
//  Car.hpp
//  libro15-6
//
//  Created by Carlos Surillo on 1/26/23.
//

#ifndef Car_hpp
#define Car_hpp


#include "Automobile.hpp"
#include <string>
using namespace std;

// The Car class represents a car. 8
class Car : public Automobile
{
private:
    int doors;
public:
    // Default constructor
    Car() : Automobile()
    { doors = 0;}
    // Constructor #2
    Car(string carMake, int carModel, int carMileage,
        double carPrice, int carDoors) : Automobile(carMake, carModel, carMileage, carPrice)
    { doors = carDoors; }
    // Accessor for doors attribute
    int getDoors()
    {return doors;}
};
#endif



