//
//  main.cpp
//  Rectangle
//
//  Created by Carlos Surillo on 11/17/22.
//

// This program demonstrates a simple class.
#include <iostream>
using namespace std;

class Rectangle
{
private:
    double width;
    double length;
public:
    Rectangle();
    void setWidth(double);
    void setLength(double);
    double getWidth() const;
    double getLength() const;
    double getArea() const;
    double getPerimeter() const;
    void display() const;
};

Rectangle::Rectangle()
{
    setWidth(1.0);
    setLength(1.0);
}


void Rectangle::setWidth(double w)
{
    width = w;
}

void Rectangle::setLength(double len)
{
    length = len;
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

double Rectangle::getPerimeter() const
{
    return (2*width) + (2*length);
}

void Rectangle::display() const
{
    cout << "Here is the rectangle's data:\n";
    cout << "Width: " << getWidth() << endl;
    cout << "Length: " << getLength() << endl;
    cout << "Area: " << getArea() << endl;
    cout << "Perimeter: " << getPerimeter() << endl;
}


int main()
{
    Rectangle box;
    double rectWidth;
    double rectLength;
    
    //box.display(); //display with values set by constructor
    
    cout << "This program will calculate the area of a\n";
    cout << "rectangle. What is the width? ";
    cin >> rectWidth;
    cout << "What is the length? ";
    cin >> rectLength;
    box.setWidth(rectWidth);
    box.setLength(rectLength);
    
    cout << endl;
    
    box.display();
    
    
    return 0;
}
