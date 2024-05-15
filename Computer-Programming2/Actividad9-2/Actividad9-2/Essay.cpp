//
//  Essay.cpp
//  Actividad9-2
//
//  Created by Carlos Surillo on 1/30/23.
//

#include "Essay.hpp"
#include <iostream>
using namespace::std;


Essay::Essay(): GradedActivity()
{
    setlab(0);
    sethw(0);
    setex1(0);
    setex2(0);
    setproj(0);
}
Essay::Essay(int l, int hw, int e1, int e2, int p)
{
    setlab(l);
    sethw(hw);
    setex1(e1);
    setex2(e2);
    setproj(p);
    setTotal(l, hw, e1, e2, p);
}
Essay::~Essay()
{
    
}
void Essay::setlab(int l)
{
    lab = l;
}
void Essay::sethw(int h)
{
    hw = h;
}
void Essay::setex1(int e)
{
    ex1 = e;
}
void Essay::setex2(int ee)
{
    ex2 = ee;
}
void Essay::setproj(int p)
{
    proj = p;
}
void Essay::setTotal(int l, int hw, int e1, int e2, int p)
{
    int tot;
    
    tot = l + hw + e1 + e2 + p;
    
    setScore(tot);
}
int Essay::getlab() const
{
    return lab;
}
int Essay::gethw() const
{
    return hw;
}
int Essay::getex1() const
{
    return ex1;
}
int Essay::getex2() const
{
    return ex2;
}
int Essay::getproj() const
{
    return proj;
}
void Essay::display()
{
    cout << "---The student's scores---" << endl;
    cout << "Lab: " << getlab() << "/20" << endl;
    cout << "Homework: " << gethw() << "/20" << endl;
    cout << "Exam 1: " << getex1() << "/20" << endl;
    cout << "Exam 2: " << getex2() << "/20" << endl;
    cout << "Project: " << getproj() << "/20" << endl;
    cout << "Total Score: " << getScore() << "/100" << endl;
    cout << "Letter Grade: " << getLetterGrade() << endl;
}

istream& operator >> (istream& in, Essay &obj)
{
    cout << "---Enter student's scores---" << endl;
    cout << "Lab score: ";
    in >> obj.lab;
    cout << "Homework score: ";
    in >> obj.hw;
    cout << "Exam 1 score: ";
    in >> obj.ex1;
    cout << "Exam 2 score: ";
    in >> obj.ex2;
    cout << "Project score: ";
    in >> obj.proj;
    
    obj.setTotal(obj.lab, obj.hw, obj.ex1, obj.ex2, obj.proj);
    return in;
}
ostream& operator << (ostream& out, Essay &obj)
{
    out << "---The student's scores---" << endl;
    out << "Lab: " << obj.getlab() << "/20" << endl;
    out << "Homework: " << obj.gethw() << "/20" << endl;
    out << "Exam 1: " << obj.getex1() << "/20" << endl;
    out << "Exam 2: " << obj.getex2() << "/20" << endl;
    out << "Project: " << obj.getproj() << "/20" << endl;
    out << "Total Score: " << obj.getScore() << "/100" << endl;
    out << "Letter Grade: " << obj.getLetterGrade() << endl;
    
    return out;
}
