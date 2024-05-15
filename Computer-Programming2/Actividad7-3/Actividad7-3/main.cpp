//
//  main.cpp
//  Actividad7-3
//
//  Created by Carlos Surillo on 1/18/23.
//

#include <iostream>
#include "Time.hpp"
using namespace::std;

void sort(Time runners[], int size);

int main()
{
    int n;
    Time *runners;
    
    cout << "Enter number of runners who will participate:";
    cin >> n;
    
    runners = new Time[n];
    
    for (int i = 0; i < n; i++)
    {
        cout << "Runner #" << i+1 << ":" << endl;
        cin >> runners[i];
    }
    cout << endl;
    
    sort(runners, n);
    
    cout << "-----The results of the race-----"<< endl<< endl;
    
    for(int i = 0; i < n; i++)
    {
        cout << "----Place #" << i+1<< "----" << endl;
        cout << runners[i]<< endl;
    }
    
    
    
    delete [] runners;
    return 0;
}

void sort(Time runners[], int size)
{
    Time temp;
    
    for(int i = 0; i < (size -1); i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (runners[i] > runners[j])
            {
                temp = runners[i];
                runners[i] = runners[j];
                runners[j] = temp;
            }
        }
    }
}


//OUTPUT
/*
 Enter number of runners who will participate:3
 Runner #1:
 First Name: Carl
 Last Name: Jorgs
 Hours: 4
 Minutes: 27
 Seconds: 13
 Runner #2:
 First Name: Loid
 Last Name: Lorsh
 Hours: 4
 Minutes: 21
 Seconds: 12
 Runner #3:
 First Name: Briar
 Last Name: Prons
 Hours: 4
 Minutes: 27
 Seconds: 8

 -----The results of the race-----

 ----Place #1----
 Name: Loid Lorsh
 Time(hour:min:sec): 04:21:12
 ----Place #2----
 Name: Briar Prons
 Time(hour:min:sec): 04:27:08
 ----Place #3----
 Name: Carl Jorgs
 Time(hour:min:sec): 04:27:13
 Program ended with exit code: 0
 */
