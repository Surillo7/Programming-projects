//
//  Cube.cpp
//  EjemploInheretance
//
//  Created by Carlos Surillo on 1/26/23.
//

#include "Cube.hpp"
#include<iostream>
using namespace::std;
#include "Rectangle.hpp"



Cube::Cube() : Rectangle()
{
    height = 0.0;
    volume = 0.0;
}

// Constructor #2
Cube::Cube(double w, double len, double h) : Rectangle(w, len)
{
    setHeight(h);
    volume = getWidth() * getLength() * getHeight();
}

Cube::~Cube()
{
    cout << "Destructor de la clase cube\n";
    display();
    system("pause");
    cout << "\n\n";
}

void Cube::set(double w, double len, double h)
{
 setHeight(h);
 setWidth(w);
 setLength(len);
 volume = getWidth() * getLength() * getHeight();
}

void Cube::setHeight(double h)
{
    height = h;
}

double Cube::getHeight() const
{
    return height;
}

double Cube::getVolume() const
{
    return volume;
}
void Cube :: display() const
{
    // Display the Cube object's properties.
    cout << "Here are the cube's properties:\n";
    cout << "Width: " << getWidth() << endl;
    cout << "Length: " << getLength() << endl; cout << "Height: " << getHeight() << endl; cout << "Base area: " <<getArea() << endl; cout << "Volume: " << getVolume() << endl;
}
