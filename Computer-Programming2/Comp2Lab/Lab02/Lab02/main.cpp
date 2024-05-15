//
//  main.cpp
//  Lab02
//
//  Created by Carlos Surillo on 11/26/22.
//

#include <iostream>
#include "Date.hpp"
using namespace::std;

void Menu(int&);
void getDate(Date);

int main()
{
    int choice;
    Date user;
    
    do
    {
        Menu(choice);
        switch (choice)
        {
            case 1:
                getDate(user);
                break;
                
            case 2:
                cout<< "Goodbye!" << endl;
                break;
        }
    }while(choice != 2);
    return 0;
}


void Menu(int& choice)
{
    cout << "Choose an option: (1-2)" << endl;
    cout << "1) Add a date" << endl
    << "2) exit" << endl;
    
    cin >> choice;
}
void getDate(Date user)
{
    int day, month, year;
    
    cout << "Enter the date you wish to validate: (dd/mm/yyyy)" << endl;
    cout << "Day: ";
    cin>> day;
    cout << "Month: ";
    cin >> month;
    cout<< "Year: ";
    cin >> year;
        
    user.setDate(day, month, year);
    user.display();
}


//OUTPUT
/*
 Choose an option: (1-2)
 1) Add a date
 2) exit
 1
 Enter the date you wish to validate: (dd/mm/yyyy)
 Day: 29
 Month: 2
 Year: 2001
 Date is not valid.
 Choose an option: (1-2)
 1) Add a date
 2) exit
 1
 Enter the date you wish to validate: (dd/mm/yyyy)
 Day: 29
 Month: 2
 Year: 2016
 Date is valid.
 29/2/2016
 Leap year.
 Choose an option: (1-2)
 1) Add a date
 2) exit
 1
 Enter the date you wish to validate: (dd/mm/yyyy)
 Day: 30
 Month: 12
 Year: 1987
 Date is valid.
 30/12/1987
 Not leap year.
 Choose an option: (1-2)
 1) Add a date
 2) exit
 1
 Enter the date you wish to validate: (dd/mm/yyyy)
 Day: 32
 Month: 1
 Year: 1978
 Date is not valid.
 Choose an option: (1-2)
 1) Add a date
 2) exit
 1
 Enter the date you wish to validate: (dd/mm/yyyy)
 Day: 24
 Month: 13
 Year: 2010
 Date is not valid.
 Choose an option: (1-2)
 1) Add a date
 2) exit
 2
 Goodbye!
 Program ended with exit code: 0
 */
