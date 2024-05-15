//
//  main.cpp
//  EjemploJan24
//
//  Created by Carlos Surillo on 1/24/23.
//

#include <iostream>
#include <iostream>
#include <cstdlib>
using namespace std;
#include "StudentList.hpp"


int main()
{
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    StudentsList myStudents(n);
    cin>> myStudents;
    myStudents.selectionSort();
    cout<< myStudents;
    return 0;
}
