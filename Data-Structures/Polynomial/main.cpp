//
//  main.cpp
//  Actividad3.1
//
//  Created by Carlos Surillo on 3/16/23.
//

#include <iostream>
#include "ArrayBag.h"
#include "Term.hpp"
#include "Polynomial.hpp"


int main()
{
    Polynomial one;
    Polynomial two;
    Polynomial sum;
    cout << "---Enter polynomial data---"<<endl;
    cin>> one;
    cout << "---Enter polynomial data---"<<endl;
    cin>> two;
    
    cout << "---Polynomial 1---"<< endl;
    cout << one << endl;
    cout << "---Polynomial 2---"<< endl;
    cout << two << endl;
    
    
    cout <<"Degree of polynomial 1: " << one.degree() << endl;
    cout <<"Degree of polynomial 2: " << two.degree() << endl;
    cout << "Coefficient of power 4 in poly 1: " << one.coefficient(4) << endl;
    cout << "Coefficient of power 4 in poly 2: " << two.coefficient(4) << endl;
    
    one.changeCoefficient(5, 2);
    two.changeCoefficient(3, 5);
    
    cout << "---Polynomial 1 changed---"<< endl;
    cout << one << endl;
    cout << "---Polynomial 2 changed---"<< endl;
    cout << two << endl;
    
    


    sum = one + two;

    cout << "---Sum of 1 and 2---"<< endl;
    cout << sum << endl;
    
    return 0;
}


//Output
/*
 ---Enter polynomial data---
 Enter terms in polynomial:1
 ---Term #1---
 Enter coefficient:4
 Enter power:4
 ---Enter polynomial data---
 Enter terms in polynomial:2
 ---Term #1---
 Enter coefficient:32
 Enter power:3
 ---Term #2---
 Enter coefficient:1
 Enter power:4
 ---Polynomial 1---
 4x^4
 ---Polynomial 2---
 2x^3 + 1x^4
 Degree of polynomial 1: 4
 Degree of polynomial 2: 4
 Coefficient of power 4 in poly 1: 4
 Coefficient of power 4 in poly 2: 1
 ---Polynomial 1 changed---
 4x^4 + 5x^2
 ---Polynomial 2 changed---
 2x^3 + 1x^4 + 7x^8
 ---Sum of 1 and 2---
 5x^4 + 5x^2 + 2x^3 + 7x^8

 */
