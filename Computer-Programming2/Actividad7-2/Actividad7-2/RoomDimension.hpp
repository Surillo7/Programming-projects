//
//  RoomDimension.hpp
//  Actividad7-2
//
//  Created by Carlos Surillo on 1/28/23.
//

#ifndef RoomDimension_hpp
#define RoomDimension_hpp
#include "FeetInches.hpp"
#include <iostream>
using namespace::std;

class RoomDimension
{
private:
    FeetInches width;
    FeetInches length;
public:
    RoomDimension();
    RoomDimension(FeetInches w, FeetInches l);
    RoomDimension(const RoomDimension& obj);
    ~RoomDimension();
    void setWidth(FeetInches w);
    void setLength(FeetInches l);
    FeetInches getWidth() const;
    FeetInches getLength() const;
    FeetInches getArea() const;
    friend ostream &operator << (ostream &out, RoomDimension &obj);
    friend istream &operator >> (istream &in, RoomDimension &obj);
};
#endif /* RoomDimension_hpp */
