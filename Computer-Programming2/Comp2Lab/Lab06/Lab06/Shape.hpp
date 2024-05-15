//
//  Shape.hpp
//  Lab06
//
//  Created by Carlos Surillo on 1/21/23.
//

#ifndef Shape_hpp
#define Shape_hpp
#include <iostream>
#include "Point.hpp"
#include <iostream>
using namespace::std;

class Shape
{
private:
    Point points[6];
    int howManyPoints;
public:
    Shape()
    {
        setPoints(0);
    }
    
    Shape(int aP)
    {
        setPoints(aP);
    }
    
    Shape(const Shape& obj)
    {
        setPoints(obj.getPoints());
    }
    ~Shape(){
        
    }
    
    void setPoints(int aP)
    {
        howManyPoints = aP;
    }
    
    int getPoints() const
    {
        return howManyPoints;
    }
    
    
    Point &operator [] (int ind)
    {
        if (ind < 0 || ind >= howManyPoints)
        {
            ind = 0;
            throw ind;
        }
        return points[ind];
    }
    
    friend istream &operator >> (istream &input, Shape &obj)
    {
        for (int i = 0; i < obj.howManyPoints; i++)
        {
            cout << "Point #" << i + 1 << ":" << endl;
            input>> obj.points[i];
        }
        return input;
    }
    
    friend ostream &operator << (ostream &output, Shape &obj)
    {
        output << "Coordinates: " << endl;
        for (int i = 0; i < obj.howManyPoints; i++)
        {
            output << obj.points[i] << endl;
        }
        
        return output;
    }
};
#endif /* Shape_hpp */
