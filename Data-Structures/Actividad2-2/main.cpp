//
//  main.cpp
//  Actividad2-2
//
//  Created by Carlos Surillo on 5/15/23.
//

#include <iostream>
using namespace::std;


int getNumberEqual(const int x[], int n, int desiredValue)
{
    int count = 0;
    if (n <= 0)
        return 0;
    else
    {
        if (x[n - 1] == desiredValue)
            count = 1;
        return getNumberEqual(x, n - 1, desiredValue) + count;
    } // end else
}
    
int main()
{
    int x[10] = {1, 2, 4, 4, 5, 6, 7, 8, 9, 12};
    
    cout << getNumberEqual(x, 10, 4) << endl;
    
    return 0;
}

//OUTPUT
/*
 2
 Program ended with exit code: 0
 */
