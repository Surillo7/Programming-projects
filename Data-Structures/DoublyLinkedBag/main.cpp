//
//  main.cpp
//  Actividad4-2
//
//  Created by Carlos Surillo on 4/1/23.
//

#include <iostream>
#include "DoublyLinkedBag.h"
#include "Node.h"
using namespace::std;

void menu(int &choice)
{
    cout << "---MENU---" << endl;
    cout << "1) Add item"<< endl;
    cout << "2) Remove item from beginning"<< endl;
    cout << "3) Rotate item to right"<< endl;
    cout << "4) Rotate item to left" << endl;
    cout << "5) Display head to tail" << endl;
    cout << "6) Display tail to head" << endl;
    cout << "7) Quit"<< endl<<endl;
    
    cout<< "Enter choice: ";
    cin>> choice;
}

int main()
{
    DoublyLinkedBag<int> items;
    int choice;
    int number;
    int number2;
    do {
        menu(choice);
        switch (choice)
        {
            case 1:
                cout << "Enter item: ";
                cin>> number;
                items.add(number);
                break;
            case 2:
                items.removeHead();
                break;
            case 3:
                cout <<"Enter item to rotate: ";
                cin>> number2;
                items.rotateLeft(number2);
                break;
            case 4:
                cout <<"Enter item to rotate: ";
                cin>> number2;
                items.rotateRight(number2);
                break;
            case 5:
                items.display();
                break;
            case 6:
                items.displayTail();
                break;
            case 7:
                cout << "GoodBye!"<<endl;
                break;
            default:
                break;
        }
    } while (choice != 7);
    return 0;
}

//Output
/*
 ---MENU---
 1) Add item
 2) Remove item from beginning
 3) Rotate item to right
 4) Rotate item to left
 5) Display head to tail
 6) Display tail to head
 7) Quit

 Enter choice: 1
 Enter item: 2
 ---MENU---
 1) Add item
 2) Remove item from beginning
 3) Rotate item to right
 4) Rotate item to left
 5) Display head to tail
 6) Display tail to head
 7) Quit

 Enter choice: 1
 Enter item: 1
 ---MENU---
 1) Add item
 2) Remove item from beginning
 3) Rotate item to right
 4) Rotate item to left
 5) Display head to tail
 6) Display tail to head
 7) Quit

 Enter choice: 1
 Enter item: 3
 ---MENU---
 1) Add item
 2) Remove item from beginning
 3) Rotate item to right
 4) Rotate item to left
 5) Display head to tail
 6) Display tail to head
 7) Quit

 Enter choice: 5
 3 1 2
 ---MENU---
 1) Add item
 2) Remove item from beginning
 3) Rotate item to right
 4) Rotate item to left
 5) Display head to tail
 6) Display tail to head
 7) Quit

 Enter choice: 6
 2 1 3
 ---MENU---
 1) Add item
 2) Remove item from beginning
 3) Rotate item to right
 4) Rotate item to left
 5) Display head to tail
 6) Display tail to head
 7) Quit

 Enter choice: 3
 Enter item to rotate: 1
 1 3 2
 ---MENU---
 1) Add item
 2) Remove item from beginning
 3) Rotate item to right
 4) Rotate item to left
 5) Display head to tail
 6) Display tail to head
 7) Quit

 Enter choice: 4
 Enter item to rotate: 3
 1 2 3
 ---MENU---
 1) Add item
 2) Remove item from beginning
 3) Rotate item to right
 4) Rotate item to left
 5) Display head to tail
 6) Display tail to head
 7) Quit

 Enter choice: 2
 ---MENU---
 1) Add item
 2) Remove item from beginning
 3) Rotate item to right
 4) Rotate item to left
 5) Display head to tail
 6) Display tail to head
 7) Quit

 Enter choice: 5
 2 3
 ---MENU---
 1) Add item
 2) Remove item from beginning
 3) Rotate item to right
 4) Rotate item to left
 5) Display head to tail
 6) Display tail to head
 7) Quit

 Enter choice: 7
 GoodBye!
 Program ended with exit code: 0
 */
