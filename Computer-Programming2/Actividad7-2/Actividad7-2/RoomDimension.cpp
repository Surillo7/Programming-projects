//
//  RoomDimension.cpp
//  Actividad7-2
//
//  Created by Carlos Surillo on 1/28/23.
//

#include "RoomDimension.hpp"
#include <iostream>
using namespace::std;

RoomDimension:: RoomDimension(): width(), length()
{
}
RoomDimension::RoomDimension(FeetInches w, FeetInches l): width(w), length(l)
{
}
RoomDimension::RoomDimension(const RoomDimension& obj): width(obj.width), length(obj.length)
{
}


RoomDimension::~RoomDimension()
{
}
void RoomDimension::setWidth(FeetInches w)
{
    width = w;
}

void RoomDimension::setLength(FeetInches l)
{
    length = l;
}
FeetInches RoomDimension::getWidth() const
{
    return width;
}
FeetInches RoomDimension::getLength() const
{
    return length;
}
FeetInches RoomDimension::getArea() const
{
    return getWidth() * getLength();
}
ostream &operator << (ostream &out, RoomDimension &obj)
{
    out << "Width: " << obj.width << " feet" << endl;
    out << "Length: " << obj.length << " feet" << endl;

    return out;
}
istream &operator >> (istream &in, RoomDimension &obj)
{
    cout << "---Width---"<< endl;
    in >> obj.width;
    cout << "---Length---"<< endl;
    in>> obj.length;
    
    return in;
}

