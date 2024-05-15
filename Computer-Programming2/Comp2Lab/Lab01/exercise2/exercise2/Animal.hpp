//
//  Animal.hpp
//  exercise2
//
//  Created by Carlos Surillo on 11/19/22.
//

//Class Animal, that collects data or atributes on animals that the user wants to input. Such as name, weigjt, color, legs etc.


#ifndef Animal_hpp
#define Animal_hpp
#include <iostream>
#include <string>
using namespace::std;

class Animal
{
private:
    string name;
    double weight;
    string color;
    int legs;
public:
    Animal();
    Animal(string name, double weight, string color, int legs);
    Animal(const Animal &obj);
    void setName(string aName);
    void setWeight(double aWeight);
    void setColor(string aColor);
    void setLegs(int aLegs);
    string getName() const;
    double getWeight() const;
    string getColor() const;
    int getLegs() const;
    void display() const;
};
#endif
