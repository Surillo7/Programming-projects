//
//  main.cpp
//  ClassEmployee
//
//  Created by Carlos Surillo on 11/29/22.
//

#include <iostream>
#include "Employee.hpp"
#include<string>
#include <iomanip>
using namespace::std;

void getDataEmployee(Employee myArrayOfEmployee[], int n);
void displayDataEmployee(Employee myArrayOfEmployee[], int n);
void Menu(int &choice);
void addEmp(Employee myArrayOfEmployee[], int &n);
void eliminateemp(Employee myArrayOfEmployee[], int &n);
void specificEmp(Employee myArrayOfEmployee[], int n);
void modify(Employee myArrayOfEmployee[], int n);



int main()
{
    int choice;
    const int SIZE = 10;
    Employee myArrayOfEmployee[SIZE];
    int n;
    cout << "Entre la cantidad de Empleados< 10:";
    cin >> n;
    getDataEmployee(myArrayOfEmployee, n);
    
    
    do
    {
        Menu(choice);
        
        switch(choice)
        {
            case  1:
                addEmp(myArrayOfEmployee, n);
                break;
            case 2:
                eliminateemp(myArrayOfEmployee, n);
                break;
            case 3:
                specificEmp(myArrayOfEmployee, n);
                break;
            case 4:
                modify(myArrayOfEmployee, n);
                break;
            case 5:
                displayDataEmployee(myArrayOfEmployee, n);
                break;
            case 6:
                cout<< "Goodbye!"<<endl;
                break;
        }
    }while(choice!= 6);
    
    return 0;
}//end main
 
void getDataEmployee(Employee myArrayOfEmployee[], int n)
{
       string name, position, department;
       int idNumber;
 
       for (int i = 0; i < n; i++)
       {
              cin.ignore();
              cout << "Entre el nombre del empleado:";
              getline(cin, name, '\n');
              cout << "Entre el Id del Empleado:";
              cin >> idNumber;
              cin.ignore();
              cout << "Entre el departemento del empleado:";
              getline(cin, department, '\n');
              cout << "Entre  la posicion del empleado:";
              getline(cin, position, '\n');
              myArrayOfEmployee[i].setEmployee(name, idNumber, department, position);
       }//end for
}
void displayDataEmployee(Employee myArrayOfEmployee[], int n)
{
    cout <<left<<setw(15) << "Name" << setw(8) << "ID";
    cout << setw(15) << "Department"<<setw(15)<< "Position" << endl;
    
    for (int i = 0; i < n; i++)
    {
        myArrayOfEmployee[i].display();
    }//end for
}

void addEmp(Employee myArrayOfEmployee[], int &n)
{
    string name, department, position;
    int idNumber;
    n++;
    
    cin.ignore();
    cout << "Entre el nombre del empleado:";
    getline(cin, name, '\n');
    cout << "Entre el Id del Empleado:";
    cin >> idNumber;
    cin.ignore();
    cout << "Entre el departemento del empleado:";
    getline(cin, department, '\n');
    cout << "Entre  la posicion del empleado:";
    getline(cin, position, '\n');
    myArrayOfEmployee[n-1].setEmployee(name, idNumber, department, position);
}


void eliminateemp(Employee myArrayOfEmployee[], int &n)
{
    Employee temp[50];
    string tempname;
    cin.ignore();
    cout<< "Enter employee to eliminate: ";
    getline(cin, tempname, '\n');
    for(int i = 0; i < n; i++)
    {
        if(myArrayOfEmployee[i].getName()== tempname)
        {
            temp[0] = myArrayOfEmployee[i];
            myArrayOfEmployee[i] = myArrayOfEmployee[n - 1];
            myArrayOfEmployee [n - 1] = temp[0];
            n--;
        }
    }
}



void specificEmp(Employee myArrayOfEmployee[], int n)
{
    int temp_id = 0;
    cout<< "Enter employee's id you wish to search: ";
    cin>> temp_id;
    for(int i = 0; i < n; i++)
    {
        if(myArrayOfEmployee[i].getIdNumber() == temp_id)
        {
            cout <<left<<setw(15) << "Name" << setw(8) << "ID";
            cout << setw(15) << "Department"<<setw(15)<< "Position" << endl;
            myArrayOfEmployee[i].display();
        } 
    }
}


void modify(Employee myArrayOfEmployee[], int n)
{
    string tempname, department, position;
    int idNumber;
    cin.ignore();
    cout<< "Enter employee to modify: ";
    getline(cin, tempname, '\n');
    for(int i = 0; i < n; i++)
    {
        if(myArrayOfEmployee[i].getName()== tempname)
        {
            cout << "Entre el Id del Empleado:";
            cin >> idNumber;
            cin.ignore();
            cout << "Entre el departemento del empleado:";
            getline(cin, department, '\n');
            cout << "Entre  la posicion del empleado:";
            getline(cin, position, '\n');
            myArrayOfEmployee[i].setIdNumber(idNumber);
            myArrayOfEmployee[i].setPosition(position);
            myArrayOfEmployee[i].setDepartment(department);
        }
    }
}


void Menu(int &choice)
{
    cout<< "\nOptions: (Enter choice)"<<endl<<endl;
    cout<< "1) Add employee" << endl
    << "2) Eliminate employee" << endl
    << "3) Search employee by Id#" << endl
    << "4) Modify employee data"<< endl
    << "5) Show data" << endl
    << "6) Quit"  << endl<<endl;
    
    cin >> choice;
    cout << endl;
}
