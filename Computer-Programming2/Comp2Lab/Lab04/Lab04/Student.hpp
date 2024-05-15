//
//  Student.hpp
//  Lab04
//
//  Created by Carlos Surillo on 12/10/22.
//

#ifndef Student_hpp
#define Student_hpp
#include <iostream>
#include <string>
using namespace::std;

class Student
{
private:
    string studentName;
    string street;
    string city;
    string state;
    int id;
public:
    Student();
    Student(string n, string str, string cty, string sta, int i);
    ~Student();
    void setName(string n);
    string getName() const;
    void setStreet(string str);
    string getStreet() const;
    void setCity(string cty);
    string getCity() const;
    void setState(string sta);
    string getState() const;
    void setId(int i);
    int getId() const;
    void askInfo();
    void display() const;
};
#endif /* Student_hpp */
