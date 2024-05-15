//
//  main.cpp
//  Actividad7-2
//
//  Created by Carlos Surillo on 4/12/23.
//

#include <iostream>
#include "CircularLinkedList.h"
using namespace::std;

void menu(int &choice)
{
    cout << "---Menu---" << endl;
    cout <<"1. Add item"<< endl
    <<"2. Remove" << endl
    <<"3. Reverse List" << endl
    <<"4. Display" << endl
    <<"5. Quit" << endl;
    
    cin>> choice;
}

int main()
{
    LinkedList<int> myInts;
    int choice, num, pos = 0;
    
    do {
        menu(choice);
        switch (choice)
        {
            case 1:
                cout<< "---------------" << endl;
                //pos++;
                cout << "Enter number: ";
                cin>> num;
                cout << "Enter position to insert: ";
                cin>> pos;
                myInts.insert(pos, num);
                break;
            case 2:
                cout<< "---------------" << endl;
                cout << "Enter node to remove: ";
                cin>> num;
                myInts.remove(num);
                pos--;
                break;
            case 3:
                cout << "Reversing List..." << endl;
                myInts.reverseList();
                break;
            case 4:
                cout<< "---------------" << endl;
                cout << "Displaying list..." << endl;
                myInts.display();
                break;
            case 5:
                cout << "Goodbye..." << endl;
                break;
            default:
                break;
        }
    } while (choice != 5);
    return 0;
}


//OUTPUT
/*
 ---Menu---
 1. Add item
 2. Remove
 3. Reverse List
 4. Display
 5. Quit
 1
 ---------------
 Enter number: 10
 ---Menu---
 1. Add item
 2. Remove
 3. Reverse List
 4. Display
 5. Quit
 1
 ---------------
 Enter number: 26
 ---Menu---
 1. Add item
 2. Remove
 3. Reverse List
 4. Display
 5. Quit
 1
 ---------------
 Enter number: 3
 ---Menu---
 1. Add item
 2. Remove
 3. Reverse List
 4. Display
 5. Quit
 1
 ---------------
 Enter number: 8
 ---Menu---
 1. Add item
 2. Remove
 3. Reverse List
 4. Display
 5. Quit
 4
 ---------------
 Displaying list...
 10
 26
 3
 8
 ---Menu---
 1. Add item
 2. Remove
 3. Reverse List
 4. Display
 5. Quit
 2
 ---------------
 Enter node to remove: 4
 ---Menu---
 1. Add item
 2. Remove
 3. Reverse List
 4. Display
 5. Quit
 4
 ---------------
 Displaying list...
 10
 26
 3
 ---Menu---
 1. Add item
 2. Remove
 3. Reverse List
 4. Display
 5. Quit
 3
 Reversing List...
 ---Menu---
 1. Add item
 2. Remove
 3. Reverse List
 4. Display
 5. Quit
 4
 ---------------
 Displaying list...
 3
 26
 10
 ---Menu---
 1. Add item
 2. Remove
 3. Reverse List
 4. Display
 5. Quit
 1
 ---------------
 Enter number: 2
 ---Menu---
 1. Add item
 2. Remove
 3. Reverse List
 4. Display
 5. Quit
 4
 ---------------
 Displaying list...
 3
 26
 10
 2
 ---Menu---
 1. Add item
 2. Remove
 3. Reverse List
 4. Display
 5. Quit
 3
 Reversing List...
 ---Menu---
 1. Add item
 2. Remove
 3. Reverse List
 4. Display
 5. Quit
 4
 ---------------
 Displaying list...
 2
 10
 26
 3
 ---Menu---
 1. Add item
 2. Remove
 3. Reverse List
 4. Display
 5. Quit
 5
 Goodbye...
 Program ended with exit code: 0
 */
