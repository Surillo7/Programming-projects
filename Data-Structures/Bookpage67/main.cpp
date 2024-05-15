//
//  main.cpp
//  Bookpage67
//
//  Created by Carlos Surillo on 3/14/23.
//

#include <iostream>
using namespace::std;



void writeArrayBackward(const char anArray[], int first, int last)
{
    if (first <= last)
    {
        // Write the last character
        cout << anArray[last];
        // Write the rest of the array backward
        writeArrayBackward(anArray, first, last - 1);
        
    } // end if
    //first > last is the_base case - do nothing
} // end writeArrayBackward


int power(int aNum, int exp)
{
    if (exp==0)
        return 1;
    else
        return aNum * power(aNum, exp - 1);
}


int main()
{
    
    writeArrayBackward("Carlos", 0, 5);
    cout << endl;
    
    cout << power(2, 3) << endl;
    
    return 0;
}
