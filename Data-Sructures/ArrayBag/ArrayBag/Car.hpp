//
//  Car.hpp
//  ArrayBag
//
//  Created by Carlos Surillo on 3/16/23.
//

#ifndef Car_hpp
#define Car_hpp

#include<iostream>
#include<string.h>
using namespace::std;
class Car
{
private:
    int yearModel;
    string make;
    int speed;
public:
    Car();
    Car(int, string, int);
    Car(const Car &);
    void setYearModel(int);
    void setMake(string);
    void setSpeed(int);
    int getYearModel() const;
    string getMake() const;
    int getSpeed() const;
    void show()const;
    void getAccelerate();
    void getBrake();
    bool operator == (const Car &obj) const;
    friend istream &operator >> (istream &strm, Car &obj);
    friend ostream &operator << (ostream &strm, const Car &obj);
};

#endif /* Car_hpp */
