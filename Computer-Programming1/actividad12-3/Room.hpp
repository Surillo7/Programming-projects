//
//  Room.hpp
//  actividad12-3
//
//  Created by Carlos Surillo on 10/21/22.
//

#ifndef Room_hpp
#define Room_hpp

#include <iostream>
using namespace::std;

class Room
{
private:
    double room_size;
    double paint_cost;
    double labor_cost;
    
public:
    Room();
    Room (double aRoom_size, double aPaint_cost, double aLabor_cost);
    void set(double aRoom_size, double aPaint_cost, double aLabor_cost);
    void setRoomSize(double aRoom_size);
    void setPaintCost(double aPaint_cost);
    void setLaborCost(double aLabor_cost);
    double getPaintCost() const;
    double getTotPaintCost() const;
    double getRoomSize() const;
    double getLaborCost() const;
    double getGallons() const;
    double getLabHours() const;
    double getTotalCost()const;
    double getTotLabCost()const;
};
#endif 
