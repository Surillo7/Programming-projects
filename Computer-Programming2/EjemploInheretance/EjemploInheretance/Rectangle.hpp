//
//  Rectangle.hpp
//  EjemploInheretance
//
//  Created by Carlos Surillo on 1/26/23.
//

#ifndef Rectangle_hpp
#define Rectangle_hpp


class Rectangle
{
 
 protected:
    double width;
    double length;
 public:
    // Default constructor
    Rectangle();
    // Constructor #2
    Rectangle(double w, double len);
    ~Rectangle();
    void setWidth(double w);
    void setLength(double l);
    double getWidth() const;
    double getLength() const;
    double getArea() const;
    void display() const;
};
#endif
