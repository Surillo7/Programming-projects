//
//  main.cpp
//  Lab06
//
//  Created by Carlos Surillo on 1/21/23.
//

#include <iostream>
#include "Shape.hpp"
using namespace::std;

void showMenu(int &choice);

int x;
Shape triangle(3);
Shape Rectangle(4);
Shape Pentagon(5);
Shape Hexagon(6);

int main()
{
    int choice;
    
    do
    {
        showMenu(choice);
        
        switch (choice)
        {
            case 1:
                cin >> triangle;
                
                cout << triangle;
                break;
            case 2:
                cin >> Rectangle;
                
                cout << Rectangle;
                break;
            case 3:
                cin >> Pentagon;
                cout<< Pentagon;
                break;
            case 4:
                cin >> Hexagon;
                cout << Hexagon;
                break;
            case 5:
                cout << "Goodbye!" << endl;
                break;
            default:
                cout << "Not an option: ";
                break;
        }
        
    } while(choice != 5);
    
    return 0;
}


void showMenu(int &choice)
{
    cout << "\n----Menu----" << endl;
    cout << "1. Add triangle" << endl
    << "2. Add a rectangle" << endl
    << "3. Add a pentagon" << endl
    << "4. Add a hexagon" << endl
    << "5. Exit" << endl << endl;
    
    cout << "Enter choice: ";
    cin >> choice;
}


//OUTPUT
/*
 ----Menu----
 1. Add triangle
 2. Add a rectangle
 3. Add a pentagon
 4. Add a hexagon
 5. Exit

 Enter choice: 1
 Point #1:
 x-coordinate: 0
 y-coordinate: 0
 Point #2:
 x-coordinate: 1
 y-coordinate: 1
 Point #3:
 x-coordinate: 2
 y-coordinate: 0
 Coordinates:
 (x,y) = (0,0)
 (x,y) = (1,1)
 (x,y) = (2,0)

 ----Menu----
 1. Add triangle
 2. Add a rectangle
 3. Add a pentagon
 4. Add a hexagon
 5. Exit

 Enter choice: 2
 Point #1:
 x-coordinate: 0
 y-coordinate: 0
 Point #2:
 x-coordinate: 1
 y-coordinate: 3
 Point #3:
 x-coordinate: 2
 y-coordinate: 5
 Point #4:
 x-coordinate: 0
 y-coordinate: 4
 Coordinates:
 (x,y) = (0,0)
 (x,y) = (1,3)
 (x,y) = (2,5)
 (x,y) = (0,4)

 ----Menu----
 1. Add triangle
 2. Add a rectangle
 3. Add a pentagon
 4. Add a hexagon
 5. Exit

 Enter choice: 3
 Point #1:
 x-coordinate: 0
 y-coordinate: 9
 Point #2:
 x-coordinate: 1
 y-coordinate: 3
 Point #3:
 x-coordinate: 4
 y-coordinate: 2
 Point #4:
 x-coordinate: 5
 y-coordinate: 2
 Point #5:
 x-coordinate: 7
 y-coordinate: 3
 Coordinates:
 (x,y) = (0,9)
 (x,y) = (1,3)
 (x,y) = (4,2)
 (x,y) = (5,2)
 (x,y) = (7,3)

 ----Menu----
 1. Add triangle
 2. Add a rectangle
 3. Add a pentagon
 4. Add a hexagon
 5. Exit

 Enter choice: 4
 Point #1:
 x-coordinate: 1
 y-coordinate: 2
 Point #2:
 x-coordinate: 3
 y-coordinate: 4
 Point #3:
 x-coordinate: 5
 y-coordinate: 6
 Point #4:
 x-coordinate: 7
 y-coordinate: 8
 Point #5:
 x-coordinate: 9
 y-coordinate: 0
 Point #6:
 x-coordinate: 1
 y-coordinate: 1
 Coordinates:
 (x,y) = (1,2)
 (x,y) = (3,4)
 (x,y) = (5,6)
 (x,y) = (7,8)
 (x,y) = (9,0)
 (x,y) = (1,1)

 ----Menu----
 1. Add triangle
 2. Add a rectangle
 3. Add a pentagon
 4. Add a hexagon
 5. Exit

 Enter choice: 5
 Goodbye!
 Program ended with exit code: 0
 */
