//
//  main.cpp
//  TestScoresClass
//
//  Created by Carlos Surillo on 11/22/22.
//

#include <iostream>
using namespace::std;
#include "TestScores.hpp"

int main()
{
    int n;
    double score;
    cout << "Enter number of test scores you wish to enter: ";
    cin >> n;
    TestScores myScores1(n);
    cout<< "Enter scores: " << endl;
    for (int i = 0; i < myScores1.getSize(); i++)
    {
        cin >> score;
        myScores1.setScores(score, i);
    }
    cout << endl;
    
    myScores1.display();
    myScores1.bubbleSort();
    myScores1.selectionSort();
    //TestScores myScores2(myScores1);
    //myScores2.display();
    return 0;
}


//OUTPUT:
/*
 Enter number of test scores you wish to enter: 3
 Enter scores:
 35
 15.7
 24

 El contenido del arreglo es:
 35
 15.7
 24
 El promedio de los numeros contenidos en el arreglo es: 24.9
 La nota mas alta: 35
 La nota mas baja: 15.7

 Calling BubbleSort...
 El contenido en orden de mayor a menor:
 35
 24
 15.7

 Calling SelectionSort...
 El contenido en orden de menor a mayor:
 15.7
 24
 35
 Program ended with exit code: 0
 */
