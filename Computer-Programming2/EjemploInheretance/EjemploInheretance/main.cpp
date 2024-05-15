//
//  main.cpp
//  EjemploInheretance
//
//  Created by Carlos Surillo on 1/26/23.
//

#include <iostream>
#include "Cube.hpp"
using namespace std;

int main()
{
    double cubeWidth; // To hold the cube's width
    double cubeLength; // To hold the cube's length
    double cubeHeight; // To hold the cube's height
    // Get the width, length, and height of
    // the cube from the user.
    cout << "Enter the dimensions of a cube:\n";
    cout << "Width: ";
    cin >> cubeWidth;
    cout << "Length: ";
    cin >> cubeLength;
    cout << "Height: ";
    cin >> cubeHeight;
    // Define a Cube object and use the dimensions
    // entered by the user.
    Cube myCube(cubeWidth, cubeLength, cubeHeight);
    myCube.display();
    return 0;
}
