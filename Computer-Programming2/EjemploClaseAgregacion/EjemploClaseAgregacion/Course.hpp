//
//  Course.hpp
//  EjemploClaseAgregacion
//
//  Created by Carlos Surillo on 1/12/23.
//

#ifndef Course_hpp
#define Course_hpp
#include <iostream>
#include <string>
#include "Instructor.hpp"
#include "TextBook.hpp"
using namespace std;

class Course
{
    
public:
    string courseName; // Course name
    Instructor instructor; // Instructor
    TextBook textbook; // Textbook
public:
    // Constructor
    Course(string course, string instrLastName,string instrFirstName, string instrOffice,string textTitle, string author, string publisher);
    // print function
    void print() const;
};
#endif /* Course_hpp */
