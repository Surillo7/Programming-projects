//
//  main.cpp
//  EjemploClaseAgregacion
//
//  Created by Carlos Surillo on 1/12/23.
//

// This program demonstrates the Course class. 2
#include "Course.hpp"

int main()
{
    
    Course myCourse("Intro to Computer Science", // Course name
    "Kramer", "Shawn", "RH3010", // Instructor info
    "Starting Out with C++", "Gaddis", // Textbook title and author
    "Addison-Wesley");
    
    myCourse.print();
    
    return 0;
 }

