//
//  main.cpp
//  Actividad8-1
//
//  Created by Carlos Surillo on 4/24/23.
//

#include <iostream>
#include <ctime>
using namespace::std;

void AlgoA(int n);
void AlgoB(int n);
void AlgoC(int n);


int main()
{
    int n = 1;
    double time1 = 0, time2 = 0, time3 = 0;
    
    cout << "n    time1     time2     time3" << endl;
    do
    {
        // Loop A
        clock_t start = clock();
        AlgoA(n);
        clock_t finish = clock();
        time1 = static_cast<double>(finish - start)/CLOCKS_PER_SEC;
        
        // Loop B
        start = clock();
        AlgoB(n);
        finish = clock();
        time2 = static_cast<double>(finish - start)/CLOCKS_PER_SEC;
        
        // Loop C
        start = clock();
        AlgoC(n);
        finish = clock();
        time3 = static_cast<double>(finish - start)/CLOCKS_PER_SEC;
        
        cout << n << "     " << time1 << "s    " << time2 << "s    " << time3 << "s" << endl;
        
        n*= 10;
    } while(n <= 100000);

    
    
    return 0;
}

void AlgoA(int n)
{
    int sum = 0;
    for (int i = 1; i<=n; i++)
    {
        sum = sum + i;
    }
}

void AlgoB(int n)
{
    int sum = 0;
    for (int i = 1; i<=n; i++)
    {
        for (int j = 1; j<=i; j++)
        {
            sum = sum + 1;
        }
    }
}

void AlgoC(int n)
{
    double sum = 0.0;
    sum = n * (n + 1) / 2;
}

//Output
/*
 n        time1         time2       time3
 1        3e-06s        0s          1e-06s
 10       1e-06s        0s          1e-06s
 100      0s            7e-06s      1e-06s
 1000     2e-06s        0.00047s    0s
 10000    1.1e-05s      0.04335s    0s
 100000   0.000112s     4.36601s    0s
 Program ended with exit code: 0
 */

