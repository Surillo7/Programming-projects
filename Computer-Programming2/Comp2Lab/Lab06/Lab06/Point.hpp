//
//  Point.hpp
//  Lab06
//
//  Created by Carlos Surillo on 1/21/23.
//

#ifndef Point_hpp
#define Point_hpp
#include <iostream>
using namespace::std;

class Point
{
private:
    int x;
    int y;
public:
    Point()
    {
        setX(0);
        setY(0);
    }
    Point(int aX, int aY)
    {
        setX(aX);
        setY(aY);
    }
    
    Point(const Point &obj)
    {
        setX(obj.getX());
        setY(obj.getY());
    }
    
    ~Point(){
        
    }
    
    void set(int aX, int aY)
    {
        setX(aX);
        setY(aY);
    }
    
    void setX(int aX)
    {
        x = aX;
    }
    void setY(int aY)
    {
        y = aY;
    }
    
    int getX() const
    {
        return x;
    }
    
    int getY()const
    {
        return y;
    }
    
    friend istream &operator >> (istream &input, Point &obj)
    {
        cout << "x-coordinate: ";
        input >> obj.x;
        cout << "y-coordinate: ";
        input >> obj.y;
        return input;
    }
    
    friend ostream &operator << (ostream &output, Point &obj)
    {
        output << "(x,y) = (" << obj.x << "," << obj.y << ")" ;
        return output;
    }
};

#endif /* Point_hpp */
