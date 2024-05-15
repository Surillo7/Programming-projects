//
//  main.cpp
//  Actividad8-2
//
//  Created by Carlos Surillo on 1/23/23.
//

#include <iostream>
#include "RunnersRace.hpp"
using namespace::std;


void menu(int &choice)
{
    cout << "----Options----"<< endl;
    cout << "1. Add runner" << endl
    << "2. Eliminate runner" << endl
    << "3. Order by time" << endl
    << "4. Search runner" << endl
    << "5. Results" << endl
    << "6. Quit" << endl<< endl;
    
    cout << "Enter choice: ";
    cin >> choice;
}


int main()
{
    int choice;
    RunnersRace racers;
    
    do {
        menu(choice);
        
        switch (choice) {
            case 1:
                cin >> racers;
                break;
            case 2:
                cout << racers << endl;
                racers.eliminate();
                break;
            case 3:
                racers.sort();
                break;
            case 4:
                racers.search();
                break;
            case 5:
                cout << racers;
                break;
            case 6:
                cout << "Goodbye!" << endl;
                break;
            default:
                cout << "invalid option" << endl;
                break;
        }
    } while (choice != 6);
}


//OUTPUT
/*
 ----Options----
 1. Add runner
 2. Eliminate runner
 3. Order by time
 4. Search runner
 5. Results
 6. Quit

 Enter choice: 1
 First Name: ww
 Last Name: ee
 Hours: 1
 Minutes: 1
 Seconds: 1
 ----Options----
 1. Add runner
 2. Eliminate runner
 3. Order by time
 4. Search runner
 5. Results
 6. Quit

 Enter choice: 1
 First Name: rr
 Last Name: tt
 Hours: 3
 Minutes: 3
 Seconds: 3
 ----Options----
 1. Add runner
 2. Eliminate runner
 3. Order by time
 4. Search runner
 5. Results
 6. Quit

 Enter choice: 1
 First Name: yy
 Last Name: uu
 Hours: 1
 Minutes: 0
 Seconds: 0
 ----Options----
 1. Add runner
 2. Eliminate runner
 3. Order by time
 4. Search runner
 5. Results
 6. Quit

 Enter choice: 2
 ----ww ee----
 Time(hour:min:sec): 01:01:01

 ----rr tt----
 Time(hour:min:sec): 03:03:03

 ----yy uu----
 Time(hour:min:sec): 01:00:00


 Enter runner to eliminate:
 First Name: ww
 Last Name: ee
 ----Options----
 1. Add runner
 2. Eliminate runner
 3. Order by time
 4. Search runner
 5. Results
 6. Quit

 Enter choice: 3
 ----Options----
 1. Add runner
 2. Eliminate runner
 3. Order by time
 4. Search runner
 5. Results
 6. Quit

 Enter choice: 4
 Enter runner to search:
 First Name: yy
 Last Name: uu
 ----yy uu----
 Time(hour:min:sec): 01:00:00
 ----Options----
 1. Add runner
 2. Eliminate runner
 3. Order by time
 4. Search runner
 5. Results
 6. Quit

 Enter choice: 5
 ----yy uu----
 Time(hour:min:sec): 01:00:00

 ----rr tt----
 Time(hour:min:sec): 03:03:03

 ----Options----
 1. Add runner
 2. Eliminate runner
 3. Order by time
 4. Search runner
 5. Results
 6. Quit

 Enter choice: 6
 Goodbye!
 Program ended with exit code: 0
 */
