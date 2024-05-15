//
//  main.cpp
//  Lab07
//
//  Created by Carlos Surillo on 2/4/23.
//

#include <iostream>
#include "Employee.hpp"
#include <iomanip>
using namespace::std;



void menu(int &choice)
{
    cout << "---Menu---" << endl;
    cout << "1. Add employee" << endl
    << "2. Show employees" << endl
    << "3. Quit" << endl << endl;
    
    cout << "Choose: ";
    cin >> choice;
}

int main()
{
    int count = 0;
    int choice;
    Employee myEmps[10];
    
    do {
        menu(choice);
        
        switch (choice)
        {
            case 1:
                count++;
                cin >> myEmps[count -1];
                break;
                
            case 2:
                
                cout << left << setw(8) << "Id";
                cout << left << setw(12) << "Hire Date";
                cout << left << setw(12) << "SSN";
                cout << left << setw(12) << "Name";
                cout << left << setw(12) << "Position";
                cout << left << setw(12) << "Annual Salary";
                cout << endl;
                
                for (int i = 0; i < count; i++)
                {
                    cout << myEmps[i];
                }
                break;
            default:
                break;
        }
    } while (choice != 3);
    
    return 0;
}



//OUTPUT
/*
 ---Menu---
 1. Add employee
 2. Show employees
 3. Quit

 Choose: 1
 Enter first name: wert
 Enter last name: hgfd
 Enter ssn(123-45-6789): 12345678
 Enter birthdate:
 Enter Year: 2345
 Enter Month: 2
 Enter Day: 1
 Enter hire date:
 Enter Year: 3456
 Enter Month: 3
 Enter Day: 4
 Enter position: hgfd
 Enter annual salary: 45678
 ---Menu---
 1. Add employee
 2. Show employees
 3. Quit

 Choose: 2
 Id      Hire Date   SSN         Name        Position    Annual Salary
 9268    4/3/3456    12345678    wert hgfd    hgfd    45678
 ---Menu---
 1. Add employee
 2. Show employees
 3. Quit

 Choose: 1
 Enter first name: Carlos
 Enter last name: Suri
 Enter ssn(123-45-6789): 111-22-0000
 Enter birthdate:
 Enter Year: 2000
 Enter Month: 3
 Enter Day: 21
 Enter hire date:
 Enter Year: 2012
 Enter Month: 7
 Enter Day: 29
 Enter position: developer
 Enter annual salary: 20000
 ---Menu---
 1. Add employee
 2. Show employees
 3. Quit

 Choose: 2
 Id      Hire Date   SSN         Name        Position    Annual Salary
 9268    4/3/3456    12345678    wert hgfd    hgfd    45678
 2811    29/7/2012    111-22-0000    Carlos Suri    developer    20000
 ---Menu---
 1. Add employee
 2. Show employees
 3. Quit

 Choose: 3
 Program ended with exit code: 0
 */
