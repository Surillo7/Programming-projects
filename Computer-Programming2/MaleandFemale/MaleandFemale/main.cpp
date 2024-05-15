//
//  main.cpp
//  MaleandFemale
//
//  Created by Carlos Surillo on 12/13/22.
//

#include <iostream>
using namespace std;
#include "Student.hpp"

int main()
{
    Student myCourse;
    char myTrimester[10];
    int numberOfCourses;
    Student *myArrayOfCourses=nullptr;


    cout << "Entre la cantidad de cursos que esta matriculado en el trimestre :" << myTrimester << endl;
    cin >> numberOfCourses;
    myArrayOfCourses = new Student[numberOfCourses];
    for (int i = 0; i < numberOfCourses; i++){
        cin >> myCourse;
        myArrayOfCourses[i] = myCourse;
    }//end for
    cout << "Los cursos que usted se matriculo son:";
    for (int i = 0; i < numberOfCourses; i++){
        myArrayOfCourses[i].display();
    }//end for
    delete[] myArrayOfCourses;
    
    
    return 0;
}//end main
