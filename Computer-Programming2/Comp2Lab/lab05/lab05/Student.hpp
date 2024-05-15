//
//  Student.hpp
//  lab05
//
//  Created by Carlos Surillo on 12/21/22.
//

#ifndef Student_hpp
#define Student_hpp
#include <iostream>
#include <string>
using namespace::std;

class Student
{
private:
    char* studentName;
    char* street;
    char* city;
    char* state;
    long id;
public:
    Student();
    Student(char* n, char* str, char* cty, char* sta, long i);
    ~Student();
    void setName(char* n);
    char* getName() const;
    void setStreet(char* str);
    char* getStreet() const;
    void setCity(char* cty);
    char* getCity() const;
    void setState(char* sta);
    char* getState() const;
    void setId(long i);
    long getId() const;
    void askInfo();
    void display() const;
};
#endif /* Student_hpp */
