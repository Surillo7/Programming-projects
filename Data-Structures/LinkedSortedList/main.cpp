//
//  main.cpp
//  LinkedSortedList
//
//  Created by Carlos Surillo on 4/25/23.
//

#include<iostream>
#include<string>
using namespace::std;
#include "LinkedSortedList.h"

int main()
{
    
    SortedListInterface<string> *nameListPtr = new LinkedSortedList<string>;
    //LinkedSortedList<string> nameListPtr;
    nameListPtr->insertSorted("Kevin");
    nameListPtr->insertSorted("Joshua");
    nameListPtr->insertSorted("Jose");
    nameListPtr->insertSorted("Karla");
    nameListPtr->insertSorted("Paola");
    nameListPtr->display();
    nameListPtr->remove(1);
    nameListPtr->display();
    nameListPtr->remove("Karla");
    nameListPtr->display();
    return 0;
}
