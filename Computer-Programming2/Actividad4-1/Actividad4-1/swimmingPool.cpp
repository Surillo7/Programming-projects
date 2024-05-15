//
//  swimmingPool.cpp
//  Actividad4-1
//
// 
//

#include "swimmingPool.hpp"
#include <iostream>
using namespace::std;


swimmingPool::swimmingPool()
{
    this-> setWidth(0);
    this-> setLength(0);
    this-> setDepth(0);
    this-> setRateFill(0);
    this-> setRateDrain(0);
}

swimmingPool::swimmingPool(int aW, int aL, int aD, double rF, double rD)
{
    this-> setWidth(aW);
    this-> setLength(aL);
    this-> setDepth(aD);
    this-> setRateFill(rF);
    this-> setRateDrain(rD);
}
swimmingPool::swimmingPool(swimmingPool &obj)
{
    (*this).setWidth(obj.getWidth());
    (*this).setLength(obj.getLength());
    (*this).setDepth(obj.getDepth());
    (*this).setRateFill(obj.getRateFill());
    (*this).setRateDrain(obj.getRateDrain());
}
swimmingPool::~swimmingPool()
{
}


swimmingPool& swimmingPool::setWidth(int aW)
{
    this-> width = aW;
    return *this;
}
swimmingPool& swimmingPool::setLength(int aL)
{
    this-> length = aL;
    return *this;
}
swimmingPool& swimmingPool::setDepth(int aD)
{
    this-> depth = aD;
    return *this;
}
swimmingPool& swimmingPool::setRateFill(double rF)
{
    this-> rateFill = rF;
    return *this;
}
swimmingPool& swimmingPool::setRateDrain(double rD)
{
    this-> rateDrain = rD;
    return *this;
}
int swimmingPool::getWidth() const
{
    return this -> width;
}
int swimmingPool::getLength() const
{
    return this -> length;
}
int swimmingPool::getDepth() const
{
    return this -> depth;
}
double swimmingPool::getRateFill() const
{
    return this -> rateFill;
}
double swimmingPool::getRateDrain() const
{
    return this -> rateDrain;
}
double swimmingPool::getWater() const
{
    return (((double) (*this).getWidth() * (*this).getLength() * (*this).getDepth()) / 0.134);
}
double swimmingPool::getTimeFill() const
{
    return ((double) (*this).getWater() / (*this).getRateFill());
}
double swimmingPool::getTimeDrain() const
{
    return ((double) (*this).getWater() / (*this).getRateDrain());

}
void swimmingPool::display() const
{
    cout << "Length(ft): " << this -> getLength() << endl;
    cout << "Width(ft): " << this -> getWidth() << endl;
    cout << "Depth(ft): " << this -> getDepth() << endl;
    cout << "Amount of water (gall): " << this -> getWater()<< endl;
    cout << "Rate to fill(gal/min): " << this -> getRateFill() << endl;
    cout << "Rate to drain(gal/min): " << this -> getRateDrain() << endl;
    cout << "Time to fill(min): " << this -> getTimeFill() << endl;
    cout << "Time to drain(min): " << this -> getTimeDrain() << endl;

}

