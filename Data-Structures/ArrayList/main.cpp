//
//  main.cpp
//  Actividad7-1
//
//  Created by Carlos Surillo on 4/11/23.
//

#include <iostream>
#include "IntegerSet.hpp"

void menu(int &choice);



int main()
{
    IntegerSet set1, set2, temp;
    
    cout<< "---Set 1---"<< endl;
    cin>> set1;
    cout<< "---Set 2---"<< endl;
    cin>> set2;
    

    int choice;
    do {
        menu(choice);
        cout << endl;
        switch (choice)
        {
            case 1:
                temp = set1.unionOfSets(set2);
                cout<< temp << endl;
                break;
            case 2:
                temp = set1.intersectionOfsets(set2);
                cout << temp << endl;;
                break;
            case 3:
                temp = set1.getDifference(set2);
                cout << temp << endl;;
                break;
            case 4:
                temp = set1.symmDifference(set2);
                cout << temp << endl;;
                break;
            case 5:
                if(set1.isEqualTo(set2))
                    cout << "Sets are equal!"<< endl;
                else
                    cout<< "Sets are not equal..."<< endl;
                break;
            case 6:
                cout << "---Set 1---"<< endl;
                cout<< set1 << endl;
                cout << "---Set 2---"<< endl;
                cout << set2 <<endl;
                break;
            case 7:
                cout<< "Goodbye..!" << endl;
                break;
            default:
                break;
        }
    } while (choice != 7);
    
    return 0;
}


void menu(int &choice)
{
    cout << "---Menu---" << endl
    << "1. Union of two sets" << endl
    << "2. The intersection of two sets." << endl
    << "3. Difference between two sets." << endl
    << "4. Symmetric difference between two sets." << endl
    << "5. Verify if two sets are equal." << endl
    << "6. Print the sets." << endl
    << "7. Quit the program." << endl;
    
    cin>> choice;
}


//OUTPUT
/*
 ---Set 1---
 Enter how many elements in set: 5
 Enter number in set: 2
 Enter number in set: 10
 Enter number in set: 8
 Enter number in set: 23
 Enter number in set: -1
 Please enter a value between 0-100: 78
 ---Set 2---
 Enter how many elements in set: 5
 Enter number in set: 9
 Enter number in set: 31
 Enter number in set: 10
 Enter number in set: 2
 Enter number in set: 101
 Please enter a value between 0-100: 42
 ---Menu---
 1. Union of two sets
 2. The intersection of two sets.
 3. Difference between two sets.
 4. Symmetric difference between two sets.
 5. Verify if two sets are equal.
 6. Print the sets.
 7. Quit the program.
 1

 2   8   9   1 0   2 3   3 1   4 2   7 8
 ---Menu---
 1. Union of two sets
 2. The intersection of two sets.
 3. Difference between two sets.
 4. Symmetric difference between two sets.
 5. Verify if two sets are equal.
 6. Print the sets.
 7. Quit the program.
 2

 2   1 0
 ---Menu---
 1. Union of two sets
 2. The intersection of two sets.
 3. Difference between two sets.
 4. Symmetric difference between two sets.
 5. Verify if two sets are equal.
 6. Print the sets.
 7. Quit the program.
 3

 8   2 3   7 8
 ---Menu---
 1. Union of two sets
 2. The intersection of two sets.
 3. Difference between two sets.
 4. Symmetric difference between two sets.
 5. Verify if two sets are equal.
 6. Print the sets.
 7. Quit the program.
 4

 8   9   2 3   3 1   4 2   7 8
 ---Menu---
 1. Union of two sets
 2. The intersection of two sets.
 3. Difference between two sets.
 4. Symmetric difference between two sets.
 5. Verify if two sets are equal.
 6. Print the sets.
 7. Quit the program.
 5

 Sets are not equal...
 ---Menu---
 1. Union of two sets
 2. The intersection of two sets.
 3. Difference between two sets.
 4. Symmetric difference between two sets.
 5. Verify if two sets are equal.
 6. Print the sets.
 7. Quit the program.
 6

 ---Set 1---
 2   8   1 0   2 3   7 8
 ---Set 2---
 2   9   1 0   3 1   4 2
 ---Menu---
 1. Union of two sets
 2. The intersection of two sets.
 3. Difference between two sets.
 4. Symmetric difference between two sets.
 5. Verify if two sets are equal.
 6. Print the sets.
 7. Quit the program.
 7

 Goodbye..!
 Program ended with exit code: 0
 */
