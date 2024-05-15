//
//  main.cpp
//  Actividad3.3
//
// 
//

#include <iostream>
#include "NumberArray.hpp"
using namespace::std;
#define PAUSE {cout << "\nPress [ENTER] to continue...\n"; cin.get();cin.get();}


int main()
{
    int x;
    float num;
    
    //get array size
    cout << "Enter number of elements: ";
    cin >> x;
    
    NumberArray numArray(x);    // initialize dynamic array
    
    //get values
    for (int indx = 0; indx < x; indx++)
    {
        cout<< "Enter number: ";
        cin>> num;
        numArray.setElement(indx, num);
    }
    cout << endl;
    PAUSE
    
    
    //display array
    cout<< "Array: "<< endl;
    for (int indx = 0; indx < x; indx++)
    {
        cout<< numArray.getElement(indx) << "  ";
    }
    cout << endl << endl;
    
    //Highest value
    cout << "Highest Value: " << numArray.getHighest() << endl<< endl;
    
    //Lowest Value
    cout << "Lowest Value: " << numArray.getLowest() << endl<< endl;
    
    //Average
    cout << "Average: " << numArray.getAverage()<< endl;
    
    PAUSE
    
    NumberArray cpynumArray(numArray);
    //copy array
    cout<< "Copy Array: "<< endl;
    for (int indx = 0; indx < x; indx++)
    {
        cout<< cpynumArray.getElement(indx) << "  ";
    }
    cout << endl;
    
    PAUSE
    return 0;
}

//OUTPUT:
/*
 Enter number of elements: 7
 Enter number: 38
 Enter number: 64
 Enter number: 18
 Enter number: 45
 Enter number: 29
 Enter number: 44
 Enter number: 95


 Press [ENTER] to continue...

 Array:
 38  64  18  45  29  44  95

 Highest Value: 95

 Lowest Value: 18

 Average: 47.5714

 Press [ENTER] to continue...


 Copy Array:
 38  64  18  45  29  44  95

 Press [ENTER] to continue...


 Program ended with exit code: 0
 */
