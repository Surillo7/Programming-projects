//
//  Room.cpp
//  actividad12-3
//
//  Created by Carlos Surillo on 10/21/22.
//
#include <iostream>
using namespace std;
#include "Room.hpp"

Room::Room()
{
    setRoomSize(0);
    setPaintCost(10.00);
    setLaborCost(25.00);
}
Room::Room(double aRoom_size, double aPaint_cost, double aLabor_cost)
{
    setRoomSize(aRoom_size);
    setPaintCost(aPaint_cost);
    setLaborCost(aLabor_cost);
}
void Room::set(double aRoom_size, double aPaint_cost, double aLabor_cost)
{
    setRoomSize(aRoom_size);
    setPaintCost(aPaint_cost);
    setLaborCost(aLabor_cost);
}
void Room::setRoomSize(double aRoom_size)
{
    room_size = aRoom_size;
}
void Room::setPaintCost(double aPaint_cost)
{
    paint_cost = aPaint_cost;
}
void Room::setLaborCost(double aLabor_cost)
{
    labor_cost = aLabor_cost;
}
double Room::getPaintCost() const
{
    return paint_cost;
}

double Room::getTotPaintCost() const
{
    return getPaintCost() * getGallons();
}

double Room::getRoomSize() const
{
    return room_size;
}

double Room::getLaborCost() const
{
    return labor_cost;
}

double Room:: getGallons() const
{
    return getRoomSize()/110.00;
}

double Room::getLabHours() const
{
    return getGallons() * 8;
}
double Room:: getTotLabCost()const
{
    return getLaborCost() * getLabHours();
}

double Room::getTotalCost() const
{
    return getTotLabCost() + getTotPaintCost();
}
