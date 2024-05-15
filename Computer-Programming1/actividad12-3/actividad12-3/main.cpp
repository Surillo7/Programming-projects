//
//  main.cpp
//  actividad12-3
//
//  Created by Carlos Surillo on 10/21/22.
//

#include <iostream>
#include <iomanip>
using namespace::std;
#include "Room.hpp"

const int SIZE = 50;
void getRooms(int &n);
void getData(Room array[SIZE], int n);
void getgallon(Room array[SIZE], int n);
void getpaint(Room array[SIZE], int n);
void hours(Room array[SIZE], int n);
void labcost(Room array[SIZE], int n);
void menu(char &user);

int main()
{
    Room myarray[SIZE];
    char user;
    int n;
    
    do
    {
        menu(user);
        
        switch(user)
        {
            case  'A':
            case 'a':
                getRooms(n);
                getData(myarray, n);
                break;
            case 'B':
            case 'b':
                getgallon(myarray, n);
                getpaint(myarray, n);
                hours(myarray, n);
                labcost(myarray, n);
                break;
            case 'C':
            case 'c':
                cout<< "Goodbye!"<<endl;
                break;
        }
    }while(user!='C' && user != 'c');
    
    return 0;
}

void getRooms(int &n)
{
    cout<< "Number of rooms to paint: ";
    cin >> n;
    
    while (n < 1)
    {
        cout << "Error, enter again: ";
        cin >> n;
    }
}

void getData(Room array[SIZE], int n)
{
    double room_size, paint_cost, labor_cost;
    cout << "Enter information: " << endl<<endl;
    cout << "Cost of paint(per gallon): $";
    cin>> paint_cost;
    while (paint_cost < 10)
    {
        cout << "Error, enter again: ";
        cin>> paint_cost;
    }
    cout<< "Cost of labor(per hour): $";
    cin>>labor_cost;
    
    for(int i = 0; i < n; i++)
    {
        cout <<"Room #"<< i + 1 << ":"<<endl;
        cout<< "Size(sqft): ";
        cin>> room_size;
        while (room_size < 0)
        {
            cout << "Error, enter again: ";
            cin>> room_size;
        }
        array[i].set(room_size, paint_cost, labor_cost);
    }
}

void getgallon(Room array[SIZE], int n)
{
    double total = 0;
    for(int i= 0; i < n; i++)
    {
        total+= array[i].getGallons();
    }
    cout<< fixed << setprecision(2);
    cout <<"Total gallons of paint needed: " << total << endl;
    cout.unsetf(std::ios_base::fixed);
}
void getpaint(Room array[SIZE], int n)
{
    double total = 0;
    for(int i = 0; i < n; i++)
    {
        total+= array[i].getTotPaintCost();
    }
    cout<< fixed <<setprecision(2);
    cout << "Total paint cost: $" << total<< endl;
    cout.unsetf(std::ios_base::fixed);
}

void hours(Room array[SIZE], int n)
{
    double total = 0;
    for (int i = 0; i < n; i++)
    {
        total+= array[i].getLabHours();
    }
    cout<< fixed <<setprecision(2);
    cout<< "Total hours of work: " << total<< endl;
    cout.unsetf(std::ios_base::fixed);
}

void labcost(Room array[SIZE], int n)
{
    double total = 0;
    for (int i = 0; i < n; i++)
    {
        total+= array[i].getTotLabCost();
    }
    cout<< fixed <<setprecision(2);
    cout<< "Total cost of labor: $" << total<<endl;
    cout.unsetf(std::ios_base::fixed);
}

void menu(char &user)
{
    cout<< "\nOptions: (Enter choice)"<<endl<<endl;
    cout<< "A) Add information" << endl
    << "B) Get Costs" << endl
    << "C) Quit"  << endl<<endl;
    
    cin >> user;
    cout << endl;
}

