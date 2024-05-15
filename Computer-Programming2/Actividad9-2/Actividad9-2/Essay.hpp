//
//  Essay.hpp
//  Actividad9-2
//
//  Created by Carlos Surillo on 1/30/23.
//

#ifndef Essay_hpp
#define Essay_hpp
#include "GradedActivity.hpp"
#include <iostream>
using namespace::std;

class Essay: public GradedActivity
{
protected:
    int lab, hw, ex1, ex2, proj;
public:
    Essay();
    Essay(int, int, int, int, int);
    ~Essay();
    void setlab(int);
    void sethw(int);
    void setex1(int);
    void setex2(int);
    void setproj(int);
    void setTotal(int, int, int, int, int);
    int getlab() const;
    int gethw() const;
    int getex1() const;
    int getex2() const;
    int getproj() const;
    void display();
    friend istream& operator >> (istream& in, Essay &obj);
    friend ostream& operator << (ostream& out, Essay &obj);
};

#endif /* Essay_hpp */
