//
//  Car.hpp
//  Lab09
//
//  Created by Carlos Surillo on 2/11/23.
//

#ifndef Car_hpp
#define Car_hpp
#include "Vehicle.hpp"
#include <iostream>
#include <string>
using namespace::std;

class Car: public Vehicle
{
private:
    string owner;
    string registration;
public:
    Car();
    Car(string, string, string, string, string);
    ~Car();
    void setOwner(string);
    void setRegistration(string);
    string getOwner() const;
    string getRegist() const;
    bool operator == (const Car &obj) const;
    friend ostream& operator<<(ostream&, const Car&);
    friend istream& operator>>(istream&, Car&);
};

#endif /* Car_hpp */
