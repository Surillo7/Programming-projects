//
//  main.cpp
//  IntegerList
//
//  Created by Carlos Surillo on 12/6/22.
//

#include <iostream>
#include "IntegerList.hpp"
using namespace std;

int main()
  
{
    int val, x;
    int n;
    
    cout << "Entre el numero de datos: ";
    cin>> n;
    
    IntegerList numbers(n);

    // Store 9s in the list and display an asterisk
    // each time a 9 is successfully stored.
    for (x = 0; x < n; x++)
    {
        cout<< "Entre el numero entero: ";
        cin>> val;
        numbers.setElement(x, val);
    }
    cout << endl;

    // Display
    for (x = 0; x < n; x++)
    {
        val = numbers.getElement(x);
        cout << val << " ";
    }
    cout << endl;

    // Attempt to store a value outside the list's bounds.
    //numbers.setElement(50, 9);
    // Will this message display?
    cout << "Element 50 successfully set.\n";
    return 0;
}
