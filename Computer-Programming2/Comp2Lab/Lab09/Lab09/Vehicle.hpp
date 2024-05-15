//
//  Vehicle.hpp
//  Lab09
//
//  Created by Carlos Surillo on 2/11/23.
//

#ifndef Vehicle_hpp
#define Vehicle_hpp
#include <string>
using namespace::std;

class Vehicle
{
protected:
    string model;
    string Brand;
    string year;
public:
    Vehicle();
    Vehicle(string, string, string);
    void setModel(string);
    void setBrand(string);
    void setYear(string);
    string getModel() const;
    string getBrand() const;
    string getYear() const;
};
#endif /* Vehicle_hpp */
