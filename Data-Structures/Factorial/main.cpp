//
//  main.cpp
//  Factorial
//
//  Created by Carlos Surillo on 3/9/23.
//

#include <iostream>
using namespace::std;

int fact(int n)
{
    if (n == 0)
        return 1;
    else // n > 0, so n-1 >= 0. Thus, fact(n-1) returns (n-1)!
        return n * fact(n - 1); // n * (n-1)! is n!
} // end fact

int sumUpTo(int n)
{
    int sum = 0;
    if (n == 1)
        sum = 1;
    else // n > 1
        sum = n + sumUpTo(n - 1);
    return sum;
} // end sumUpTo

void displayOctal(int n)
{
    if(n > 0)
    {
        if (n / 8 > 0)
            displayOctal(n / 8);
        cout << n % 8;
    }
}


int Acker(int m, int n)
{
    if (m == 0)
        return n + 1;
    else if(n==0)
        return Acker(m-1, 1);
    else
        return Acker(m-1, Acker(m, n-1));
}

int main()
{
    //cout << fact(5)<< endl;
    
    //cout <<sumUpTo(6) << endl;
    
    //displayOctal(100);
    
    //cout << endl;
    
    cout << Acker(0, 0) << endl;
    cout << Acker(0, 1) << endl;
    cout << Acker(1, 1) << endl;
    cout << Acker(1, 2) << endl;
    cout << Acker(1, 3) << endl;
    cout << Acker(2, 2) << endl;
    cout << Acker(2, 3) << endl;


    return 0;
}




