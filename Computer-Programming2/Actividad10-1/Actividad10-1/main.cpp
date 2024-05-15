//
//  main.cpp
//  Actividad10-1
//
//  Created by Carlos Surillo on 2/7/23.
//

#include <iostream>
#include "BoxInterface.h"
#include "PlainBox.h"
#include "JeweleryBox.h"
#include "Jewelery.hpp"
#include "Watches.hpp"
using namespace::std;


void menu(int &choice)
{
    cout << "---Options---"<< endl;
    cout << "1. Jewelry" << endl
    << "2. Watch" << endl
    << "3. Quit" << endl << endl;
    
    cout << "Choice: ";
    cin>> choice;
    
}

int main()
{
    int choice;
    Jewelry jewls;
    Watches watch;
    
    do {
        menu(choice);
        
        switch (choice)
        {
            case 1:
            {
                cin >> jewls;
                BoxInterface<Jewelry> *myItem = new JewelryBox<Jewelry>;
                myItem -> setItem(jewls);
                
                cout << myItem -> getItem();
                delete myItem;
            }
                break;
            case 2:
            {
                cin >> watch;
                BoxInterface<Watches> *myItem2 = new JewelryBox<Watches>;
                myItem2 -> setItem(watch);
                
                cout << myItem2 -> getItem();
                delete myItem2;
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
 ---Options---
 1. Jewelry
 2. Watch
 3. Quit

 Choice: 1
 ---Gender---
 1.Male
 2.Female
 3.Child

 Choice: 3

 ---Jewelry Type---
 1.Collar
 2.Chain
 3.Bracelet
 4.Earring

 Choice: 2

 ---Jewelry Weight---
 1.14K
 2.18K
 3.24K

 Choice: 3

 ---Jewelry Metal---
 1.Gold
 2.Platinum
 3.Silver

 Choice: 1

 ---Jewelry Information---
 For:CHILD
 Type:CHAIN
 Weight:24K
 Metal:GOLD
 ---Options---
 1. Jewelry
 2. Watch
 3. Quit

 Choice: 2
 ---Gender---
 1.Male
 2.Female
 3.Child

 Choice: 1

 ---Watch Brand---
 1.Casio
 2.Ferrary
 3.Coach
 4.Bilova
 5.Ctizen
 6.Boos

 Choice: 3

 ---Watch Information---
 For:MALE
 Brand:COACH
 ---Options---
 1. Jewelry
 2. Watch
 3. Quit

 Choice: 3
 Program ended with exit code: 0
 */
