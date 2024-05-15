//
//  Cube.hpp
//  EjemploInheretance
//
//  Created by Carlos Surillo on 1/26/23.
//

#ifndef Cube_hpp
#define Cube_hpp
#include "Rectangle.hpp"

class Cube : public Rectangle
{
private:
    double height;
    double volume;
public:
    // Default constructor
    Cube();
    ~Cube();
    // Constructor #2
    Cube(double w, double len, double h);
    void set(double w, double len, double h);
    void setHeight(double h);
    double getHeight() const;
    double getVolume() const;
    void display() const;
};
#endif /* Cube_hpp */
