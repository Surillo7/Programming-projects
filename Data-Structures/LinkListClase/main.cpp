//
//  main.cpp
//  LinkListClase
//
//  Created by Carlos Surillo on 4/4/23.
//

#include "LinkedList.h"
#include "Node.h"
#include "PrecondViolatedExcep.h"
#include "ListInterface.h"
#include <iostream>
#include <string>
int main() {
    /*ListInterface<string>* listPtr = new LinkedList<string>();
    string data[] = {"one", "two", "three", "four", "five", "six"};
    cout << "isEmpty: returns " << listPtr->isEmpty()
    << "; should be 1 (true)" << endl;
    for (int i = 0; i < 6; i++)
    {
       if (listPtr->insert(i + 1, data[i]))
          cout << "Inserted " << listPtr->getEntry(i + 1)
          << " at position " << (i + 1) << endl;
       else
          cout << "Cannot insert " << data[i] << " at position " << (i + 1)
          << endl;
    }  // end for*/
    
    LinkedList<string> myArray;
    
         myArray.insert(1, "Mayonesa");
         myArray.insert(2, "Papitas");
         myArray.insert(3, "Galletas");
         myArray.insert(4, "Sodas");
         myArray.insert(2, "Gomitas");
         myArray.remove(3);
         myArray.setEntry(2, "Chocolates");
         for (int index = 1; index <= myArray.getLength(); index++){
              cout << myArray.getEntry(index) << endl;
         }//end for
    
    return 0;
}
