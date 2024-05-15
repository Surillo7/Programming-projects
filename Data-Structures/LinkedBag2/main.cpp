//
//  main.cpp
//  Actividad4-1
//
//  Created by Carlos Surillo on 3/31/23.
//

#include <iostream>
#include "LinkedBag.h"
#include "AssignmentList.hpp"
#include "BagInterface.h"
#include "Node.h"
#include "Date.hpp"
#include "Assignment.hpp"
using namespace::std;


void menu(int &choice)
{
    cout <<"---Menu---"<<endl;
    cout<< "1. Add assignment" << endl
    << "2. Remove asignment"<< endl
    << "3. Display all assignments" << endl
    << "4. Next assignment(s) due"<< endl
    << "5. Quit"<<endl<<endl;
    
    cout << "Enter: ";
    cin>> choice;
    cout<< endl;
}
int main()
{
    AssignmentList tasks;
    
    int choice;
    
    
    do
    {
        menu(choice);
        switch (choice)
        {
            case 1:
                tasks.addAssignment();
                break;
            case 2:
                tasks.removeHw();
                break;
            case 3:
                tasks.show();
                break;
            case 4:
                tasks.nextDue();
                break;
            case 5:
                cout << "Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice..." << endl;
                break;
        }
    } while (choice != 5);
    
    return 0;
}

//OUTPUT
/*
 ---Menu---
 1. Add assignment
 2. Remove asignment
 3. Display all assignments
 4. Next assignment(s) due
 5. Quit

 Enter: 1

 ---Due date---
 Day: 4
 Month: 5
 Year: 2023
 ---Description---
 Homework
 ---Menu---
 1. Add assignment
 2. Remove asignment
 3. Display all assignments
 4. Next assignment(s) due
 5. Quit

 Enter: 1

 ---Due date---
 Day: 10
 Month: 3
 Year: 2023
 ---Description---
 Exam
 ---Menu---
 1. Add assignment
 2. Remove asignment
 3. Display all assignments
 4. Next assignment(s) due
 5. Quit

 Enter: 1

 ---Due date---
 Day: 21
 Month: 3
 Year: 2023
 ---Description---
 Homewoek
 ---Menu---
 1. Add assignment
 2. Remove asignment
 3. Display all assignments
 4. Next assignment(s) due
 5. Quit

 Enter: 3

 ---List of assignments---
 Due Date: 21/3/2023
 Description: Homewoek

 Due Date: 10/3/2023
 Description: Exam

 Due Date: 4/5/2023
 Description: Homework

 ---Menu---
 1. Add assignment
 2. Remove asignment
 3. Display all assignments
 4. Next assignment(s) due
 5. Quit

 Enter: 4

 ---The next assignment(s) due---
 Due Date: 10/3/2023
 Description: Exam

 ---Menu---
 1. Add assignment
 2. Remove asignment
 3. Display all assignments
 4. Next assignment(s) due
 5. Quit

 Enter: 2

 ---Enter completed assignment---
 ---Due date---
 Day: 3
 Month: 10
 Year: 2001
 ---Description---
 exam
 This HW is not assigned currently...
 ---Menu---
 1. Add assignment
 2. Remove asignment
 3. Display all assignments
 4. Next assignment(s) due
 5. Quit

 Enter: 2

 ---Enter completed assignment---
 ---Due date---
 Day: 10
 Month: 3
 Year: 2023
 ---Description---
 Exam
 ---Menu---
 1. Add assignment
 2. Remove asignment
 3. Display all assignments
 4. Next assignment(s) due
 5. Quit

 Enter: 3

 ---List of assignments---
 Due Date: 21/3/2023
 Description: Homewoek

 Due Date: 4/5/2023
 Description: Homework

 ---Menu---
 1. Add assignment
 2. Remove asignment
 3. Display all assignments
 4. Next assignment(s) due
 5. Quit

 Enter: 4

 ---The next assignment(s) due---
 Due Date: 21/3/2023
 Description: Homewoek

 ---Menu---
 1. Add assignment
 2. Remove asignment
 3. Display all assignments
 4. Next assignment(s) due
 5. Quit

 Enter: 5

 Goodbye!
 Program ended with exit code: 0
 */
