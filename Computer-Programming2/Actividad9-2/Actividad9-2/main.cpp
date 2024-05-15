//
//  main.cpp
//  Actividad9-2
//
//  Created by Carlos Surillo on 1/30/23.
//

#include <iostream>
#include "Essay.hpp"
using namespace::std;

int main()
{
    
    Essay scores;
    
    cin >> scores;
    cout << scores;
    
    return 0;
}

//OUTPUT
/*
 ---Enter student's scores---
 Lab score: 20
 Homework score: 18
 Exam 1 score: 19
 Exam 2 score: 17
 Project score: 20
 ---The student's scores---
 Lab: 20/20
 Homework: 18/20
 Exam 1: 19/20
 Exam 2: 17/20
 Project: 20/20
 Total Score: 94/100
 Letter Grade: A
 Program ended with exit code: 0
 */
