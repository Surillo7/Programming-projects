//
//  Course.cpp
//  EjemploClaseAgregacion
//
//  Created by Carlos Surillo on 1/12/23.
//

#include "Course.hpp"
#include <iostream>
#include <string>
#include "Instructor.hpp"
#include "TextBook.hpp"
using namespace std;

Course::Course(string course, string instrLastName,string instrFirstName, string instrOffice,string textTitle, string author, string publisher)
{
    courseName = course;
    instructor.set(instrLastName, instrFirstName, instrOffice);
    textbook.set(textTitle, author, publisher);
}

void Course::print() const
{
    cout << "Course name: " << courseName << endl << endl;
    cout << "Instructor Information:\n"; instructor.print();
    cout << "\nTextbook Information:\n"; textbook.print();
    cout << endl;
}
