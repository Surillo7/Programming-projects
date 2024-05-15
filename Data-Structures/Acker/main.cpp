//
//  main.cpp
//  Actividad2-1
//
//  Created by Carlos Surillo on 5/15/23.
//

#include <iostream>
using namespace::std;


int Acker(int m, int n)
{
    if (m == 0)
        return n + 1;
    else if(n == 0)
        return Acker(m - 1, 1);
    else
        return Acker(m - 1, Acker(m, n - 1));
}

int main()
{
    cout << Acker(0, 0) << endl;
    cout << Acker(0, 1) << endl;
    cout << Acker(1, 1) << endl;
    cout << Acker(1, 2) << endl;
    cout << Acker(1, 3) << endl;
    cout << Acker(2, 2) << endl;
    cout << Acker(2, 3) << endl;
    
    return 0;
}


//OUTPUT
/*
 1
 2
 3
 4
 5
 7
 9
 Program ended with exit code: 0
 */
