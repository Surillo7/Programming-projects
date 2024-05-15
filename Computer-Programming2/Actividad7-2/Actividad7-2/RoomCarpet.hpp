//
//  RoomCarpet.hpp
//  Actividad7-2
//
//  Created by Carlos Surillo on 1/28/23.
//

#ifndef RoomCarpet_hpp
#define RoomCarpet_hpp
#include "RoomDimension.hpp"
#include <iostream>
using namespace::std;

class Roomcarpet
{
private:
    RoomDimension measurement;
    double cost;
public:
    Roomcarpet();
    Roomcarpet(double c, RoomDimension mm);
    Roomcarpet(const Roomcarpet& obj);
    ~Roomcarpet();
    void setCost(double c);
    void setCarpet(RoomDimension mm);
    FeetInches getCarpet() const;
    double getCost() const;
    double getTotPrice() const;
    friend ostream &operator << (ostream &out, Roomcarpet &obj);
    friend istream &operator >> (istream &in, Roomcarpet &obj);
    
};
#endif /* RoomCarpet_hpp */
