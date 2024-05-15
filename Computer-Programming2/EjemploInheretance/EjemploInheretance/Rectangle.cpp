//
//  Rectangle.cpp
//  EjemploInheretance
//
//  Created by Carlos Surillo on 1/26/23.
//

#include "Rectangle.hpp"
#include<iostream>
using namespace::std;

Rectangle::Rectangle()
{
    width = 0.0;
    length = 0.0;
}

Rectangle::Rectangle(double w, double len)
{
    width = w;
    length = len;
}

Rectangle::~Rectangle()
{
    cout << "Destructor de la clase rectangulo\n";
    display();
    system("pause");
    cout << "\n\n";
}

void Rectangle::setWidth(double w)
{
    width = w;
}
void Rectangle::setLength(double l)
{
    length=l;
}
double Rectangle::getWidth() const
{
    return width;
}
double Rectangle::getLength() const
{
    return length;
}
double Rectangle::getArea() const
{
    return width * length;
}

void Rectangle::display() const
{
    // Display the Rectngle object's properties.
    cout << "Here are the rectangle's properties:\n";
    cout << "Width: " << getWidth() << endl;
    cout << "Length: " << getLength() << endl;
}

