//
//  main.cpp
//  SimpleVector1
//
//  Created by Carlos Surillo on 2/2/23.
//

// This program demonstrates the SimpleVector template.
#include <iostream>
#include "Header.h"
using namespace std;

int main()
{
    //const int SIZE = 10; // Number of elements
    int count; // Loop counter
    
    
    int n;
    cout << "Entre cantidad de elementos: ";
    cin>> n;
    
    // Create a SimpleVector of ints.
    SimpleVector<int> intTable(n);

    // Create a SimpleVector of doubles.
    //SimpleVector<double> doubleTable(SIZE);

    // Store values in the two SimpleVectors.
    for (count = 0; count < n; count++)
    {
        cout << "Dato[" << count + 1 << "]: ";
        cin >> intTable[count];
        //intTable[count] = (count * 2);
        //doubleTable[count] = (count * 2.14);
    }

    // Display the values in the SimpleVectors.
    cout << "These values are in intTable:\n";
    for (count = 0; count < n; count++)
        cout << intTable[count] << " ";
    cout << endl;
    
    /* cout << "These values are in doubleTable:\n";
    for (count = 0; count < SIZE; count++)
        cout << doubleTable[count] << " ";
    cout << endl;
     */
    
    // Use the standard + operator on the elements.
    cout << "\nAdding 5 to each element of intTable"
    << " and doubleTable.\n";
    for (count = 0; count < n; count++)
    {
        intTable[count] = intTable[count] + 5;
        //doubleTable[count] = doubleTable[count] + 5.0;
    }
    // Display the values in the SimpleVectors.
    cout << "These values are in intTable:\n";
    for (count = 0; count < n; count++)
        cout << intTable[count] << " "; cout << endl;
    
    /*cout << "These values are in doubleTable:\n";
    for (count = 0; count < SIZE; count++)
        cout << doubleTable[count] << " ";
    cout << endl;
     */
    
    // Use the standard ++ operator on the elements.
    cout << "\nIncrementing each element of intTable and"
    << " doubleTable.\n";
    for (count = 0; count < n; count++)
    {
        intTable[count]++;
        //doubleTable[count]++;
    }
    
    // Display the values in the SimpleVectors.
    
    cout << "These values are in intTable:\n";
    for (count = 0; count < n; count++)
        cout << intTable[count] << " "; cout << endl;
   /* cout << "These values are in doubleTable:\n";
    for (count = 0; count < SIZE; count++)
        cout << doubleTable[count] << " ";
    cout << endl;
    */
    return 0;
    
}



