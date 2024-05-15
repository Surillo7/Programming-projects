//
//  main.cpp
//  Actividad2-3
//
//

#include <iostream>
#include <iomanip>
#include <string>
#include "Inventory.hpp"
using namespace::std;

void displayDataEmployee(Inventory *myarray, int counter);
void Menu(int &choice);
void addInstance(Inventory *myarray, int n, int &counter);
void eliminateemp(Inventory *myarray, int &counter);
void modify(Inventory *myarray, int counter);


int main()
{
    int choice;
    int n;
    int counter = 0;
    
    Inventory *myarray = nullptr;

    cout << "Enter max elements inventory can hold: ";
    cin>> n;
    
    myarray = new Inventory [counter];
    
    do
    {
        Menu(choice);
        
        switch(choice)
        {
            case  1:
                addInstance(myarray, n, counter);
                break;
            case 2:
                eliminateemp(myarray, counter);
                break;
            case 3:
                modify(myarray, counter);
                break;
            case 4:
                displayDataEmployee(myarray, counter);
                break;
            case 5:
                cout<< "Goodbye!"<<endl;
                break;
        }
    }while(choice!= 5);
    
    delete [] myarray;
    myarray = nullptr;
    return 0;
}//end main
 

void displayDataEmployee(Inventory * myarray, int counter)
{
    cout <<left<<setw(15) << "Item#" << setw(8) << "Qty";
    cout << setw(15) << "Cost(per unit)"<<setw(15)<< "Total Cost($)" << endl;
    
    for (int i = 0; i < counter; i++)
    {
        myarray[i].display();
    }//end for
}

void addInstance(Inventory *myarray, int n, int &counter)
{
    
    double itemNum, quantity;
    double cost;
    
    if (counter < n)
    {
        
        cout << "Enter data for item #" << counter + 1 <<": " << endl;
        cout << "Item Number: #";
        cin >> itemNum;
        while(itemNum < 0)
        {
            cout << "Error, invalid input. Enter again."<< endl;
            cin >> itemNum;
        }
        cout << "Quantity: ";
        cin>> quantity;
        while(quantity < 0)
        {
            cout << "Error, invalid input. Enter again."<< endl;
            cin >> quantity;
        }
        cout << "Cost(per unit): $";
        cin>> cost;
        while(cost < 0)
        {
            cout << "Error, invalid input. Enter again."<< endl;
            cin >> cost;
        }
        myarray[counter].setAll(itemNum, quantity, cost);
        counter++;
    } else
    {
        cout << "Maximum inventory reached!"<< endl;
    }
}


void eliminateemp(Inventory *myarray, int &counter)
{
    
    int tempItemNum;
    Inventory temparray[1];
    cout<< "Enter item number of item you want to remove: #";
    cin >> tempItemNum;
    for(int i = 0; i < counter; i++)
    {
        if(myarray[i].getItem()== tempItemNum)
        {
            temparray[0] = myarray[i];
            myarray[i] = myarray[counter - 1];
            myarray[counter - 1] = temparray[0];
            counter--;
        }
    }
}





void modify(Inventory * myarray, int counter)
{
    double it, qty;
    double cst;
    int tempItemNum;
    cout<< "Enter item number of item to modify: ";
    cin>> tempItemNum;
    for(int i = 0; i < counter; i++)
    {
        if(myarray[i].getItem()== tempItemNum)
        {
            cout << "Enter data for item #" << i + 1 <<": "<< endl;
            cout << "Item Number: #";
            cin >> it;
            cout << "Quantity: ";
            cin>> qty;
            cout << "Cost(per unit): $";
            cin>> cst;
            myarray[i].setAll(it, qty, cst);
        }
    }
}


void Menu(int &choice)
{
    cout<< "\nOptions: (Enter choice)"<<endl<<endl;
    cout<< "1) Add instance" << endl
    << "2) Eliminate instance" << endl
    << "3) Modify instance" << endl
    << "4) Display Data" << endl
    << "5) Quit"  << endl<<endl;
    
    cin >> choice;
    cout << endl;
}


//OUTPUT
/*
 Enter max elements inventory can hold: 3

 Options: (Enter choice)

 1) Add instance
 2) Eliminate instance
 3) Modify instance
 4) Display Data
 5) Quit

 1

 Enter data for item #1:
 Item Number: #120
 Quantity: 2
 Cost(per unit): $50

 Options: (Enter choice)

 1) Add instance
 2) Eliminate instance
 3) Modify instance
 4) Display Data
 5) Quit

 1

 Enter data for item #2:
 Item Number: #123
 Quantity: 30
 Cost(per unit): $1.25

 Options: (Enter choice)

 1) Add instance
 2) Eliminate instance
 3) Modify instance
 4) Display Data
 5) Quit

 1

 Enter data for item #3:
 Item Number: #367
 Quantity: 20
 Cost(per unit): $5.75

 Options: (Enter choice)

 1) Add instance
 2) Eliminate instance
 3) Modify instance
 4) Display Data
 5) Quit

 1

 Maximum inventory reached!

 Options: (Enter choice)

 1) Add instance
 2) Eliminate instance
 3) Modify instance
 4) Display Data
 5) Quit

 4

 Item#          Qty     Cost(per unit) Total Cost($)
 120            2       50             100
 123            30      1.25           37.5
 367            20      5.75           115

 Options: (Enter choice)

 1) Add instance
 2) Eliminate instance
 3) Modify instance
 4) Display Data
 5) Quit

 2

 Enter item number of item you want to remove: #123

 Options: (Enter choice)

 1) Add instance
 2) Eliminate instance
 3) Modify instance
 4) Display Data
 5) Quit

 4

 Item#          Qty     Cost(per unit) Total Cost($)
 120            2       50             100
 367            20      5.75           115

 Options: (Enter choice)

 1) Add instance
 2) Eliminate instance
 3) Modify instance
 4) Display Data
 5) Quit

 3

 Enter item number of item to modify: 367
 Enter data for item #2:
 Item Number: #456
 Quantity: 40
 Cost(per unit): $2.25

 Options: (Enter choice)

 1) Add instance
 2) Eliminate instance
 3) Modify instance
 4) Display Data
 5) Quit

 4

 Item#          Qty     Cost(per unit) Total Cost($)
 120            2       50             100
 456            40      2.25           90

 Options: (Enter choice)

 1) Add instance
 2) Eliminate instance
 3) Modify instance
 4) Display Data
 5) Quit

 5

 Goodbye!
 Program ended with exit code: 0
 */
