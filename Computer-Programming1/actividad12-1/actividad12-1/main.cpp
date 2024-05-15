//
//  main.cpp
//  actividad12-1
//
//  Created by Carlos Surillo on 10/20/22.
//

#include <iostream>
#include <string>
#include <iomanip>
using namespace::std;
#include "Employee.hpp"
const int SIZE = 80;
//void Menu();
void getNumberofEmp(int &n);
void getData(Employee array[SIZE], int n);
void showData(Employee array[SIZE], int n);
void addEmp(Employee array[SIZE], int &n);
void eliminateemp(Employee array[SIZE], int& n);
void specificEmp(Employee array[SIZE], int n);
void modify(Employee array[SIZE], int n);
void menu(char &user_choice);

int main()
{
    Employee workers[SIZE];
    int n;
    char user_choice;
    
    getNumberofEmp(n);
    getData(workers, n);
    
    do
    {
        menu(user_choice);
        
        
        switch(user_choice)
        {
            case  'A':
            case 'a':
                addEmp(workers, n);
                break;
            case 'B':
            case 'b':
                eliminateemp(workers, n);
                break;
            case 'C':
            case 'c':
                specificEmp(workers, n);
                break;
            case 'D':
            case 'd':
                modify(workers, n);
                break;
            case 'E':
            case 'e':
                showData(workers, n);
                break;
            case'F':
            case 'f':
                cout<< "Goodbye!"<<endl;
                break;
        }
    }while(user_choice!='F' && user_choice != 'f');
    
    return 0;
}

void getNumberofEmp(int &n)
{
    cout << "Number of employees you want to list data of: ";
    cin>> n;
}
void getData(Employee array[SIZE], int n)
{
    string name, department, position;
    int idNumber;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter data of employee #"<< i + 1<< ":" << endl;
        cout << "Name: ";
        cin>>name;
        cout << "Id: #";
        cin>>idNumber;
        cout<< "Department: ";
        cin>>department;
        cout<< "Position: ";
        cin>> position;
        array[i].set(name, idNumber, department, position);
    }
}

void addEmp(Employee array[SIZE], int &n)
{
    string name, department, position;
    int idNumber;
    n++;
    cout<< "Data of employee you want to add:" << endl;
    cout << "Name: ";
    cin>>name;
    cout << "Id: #";
    cin>>idNumber;
    cout<< "Department: ";
    cin>>department;
    cout<< "Position: ";
    cin>> position;
    array[n-1].set(name, idNumber, department, position);
}

void showData(Employee array[SIZE], int n)
{
    cout<< "Name\tIdNumber\tDepartment\tPosition"<<endl;
    for (int i = 0; i < n; i++)
    {
        array[i].display();
    }
}

void eliminateemp(Employee array[SIZE], int &n)
{
    Employee temp[SIZE];
    string tempname;
    cout<< "Enter employee to eliminate: ";
    cin>>tempname;
    for(int i = 0; i < n; i++)
    {
        if(array[i].getName()== tempname)
        {
            temp[0] = array[i];
            array[i] = array[i + 1];
            array [i+1] = temp[0];
            n--;
        }
    }
    
}
void specificEmp(Employee array[SIZE], int n)
{
    int temp_id = 0;
    cout<< "Enter employee's id you wish to search: ";
    cin>> temp_id;
    for(int i = 0; i < n; i++)
    {
        if(array[i].getId() == temp_id)
        {
            cout<< "Name\tIdNumber\tDepartment\tPosition"<<endl;
            array[i].display();
        }
    }
}
void modify(Employee array[SIZE], int n)
{
    string tempname, department, position;
    int idNumber;
    cout<< "Enter employee to modify: ";
    cin>>tempname;
    for(int i = 0; i < n; i++)
    {
        if(array[i].getName()== tempname)
        {
            cout << "Id: #";
            cin>>idNumber;
            cout<< "Department: ";
            cin>>department;
            cout<< "Position: ";
            cin>> position;
            array[i].set_id(idNumber);
            array[i].set_position(position);
            array[i].set_department(department);
        }
    }
}

void menu(char &user_choice)
{
    cout<< "\nOptions: (Enter choice)"<<endl<<endl;
    cout<< "A) Add employee" << endl
    << "B) Eliminate employee" << endl
    << "C) Search employee by Id#" << endl
    << "D) Modify employee data"<< endl
    << "E) Show data" << endl
    << "F) Quit"  << endl<<endl;
    
    cin >> user_choice;
    cout << endl;
}

