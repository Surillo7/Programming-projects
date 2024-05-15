//
//  main.cpp
//  Actividad6-3
//
//  Created by Carlos Surillo on 1/12/23.
//

#include <iostream>
#include "NumberArray.hpp"
using namespace::std;

int main()
{
    int x;
  
    //get array size
    cout << "Enter number of elements: ";
    cin >> x;
    
    NumberArray numArray(x);
    
    cin>> numArray;
    cout<< numArray;
    
    cout << endl;
    cout << "Second Array: " << endl;
    NumberArray num2(x);
    
    cin >> num2;
    cout << num2;
    
    if(numArray == num2)
        cout << "The first and second arrays are equal!" << endl;
    else
        cout << "The first and second arrays are not equal!" << endl;
    
    
    cout << endl;
    cout << "Third Array: " << endl;
    NumberArray num3(x);
    
    cin>> num3;
    
    if(num2 != num3)
        cout << "The second and third arrays are not equal!" << endl;
    else
        cout << "The second and third arrays are equal!" << endl;
    
    cout << endl;
    cout << "Assigning third array values to second array: " << endl;
    num2 = num3;
    
    cout << num2 << endl;
    
    return 0;
}


//OUTPUT
/*
 Enter number of elements: 3
 Enter number: 2
 Enter number: 4
 Enter number: 1
 Array:
 2  4  1

 Highest Value: 4

 Lowest Value: 1

 Average: 2.33333

 Second Array:
 Enter number: 2
 Enter number: 4
 Enter number: 1
 Array:
 2  4  1

 Highest Value: 4

 Lowest Value: 1

 Average: 2.33333
 The first and second arrays are equal!

 Third Array:
 Enter number: 7
 Enter number: 6
 Enter number: 2
 The second and third arrays are not equal!

 Assigning third array values to second array:
 Array:
 7  6  2

 Highest Value: 7

 Lowest Value: 2

 Average: 5

 Program ended with exit code: 0
 */
