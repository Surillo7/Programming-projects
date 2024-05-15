//
//  main.cpp
//  lab05
//
//  Created by Carlos Surillo on 12/21/22.
//

#include <iostream>
#include "Student.hpp"
#include <iomanip>
using namespace::std;

Student *students;
int counter = 0;
void addstudent(Student &student);
void search();
void menu();
bool isEmpty();
void display();
void copyDS(Student& destination, Student& source);

int main()
{
    int choice;
    Student student;
    
    do
    {
        menu();
        cin>> choice;
        cout << endl;
        
        switch(choice)
        {
            case 1:
                student.askInfo();
                addstudent(student);
                break;
            case 2:
                search();
                break;
            case 3:
                display();
                break;
            case 4:
                cout << "Goodbye!" << endl;
                break;
        }
    } while (choice != 4);
    
    if (!isEmpty())
    {
        delete [] students;
        students = nullptr;
    }
    return 0;
}


bool isEmpty()
{
    return counter == 0;
}

void addstudent(Student &student)
{
    Student *temp;
    int index = counter;
    
    if (isEmpty())
    {
        students = new Student [1];
    } else
    {
        temp = new Student [counter];
        
        for (int i = 0; i < counter; i++)
        {
        
            copyDS(temp[i], students[i]);
        }
        
        delete [] students;
        students = new Student[counter + 1];
        
        for (int i = 0; i < counter; i++)
        {
            copyDS(students[i], temp[i]);
        }
     
        delete [] temp;
    }
    copyDS(students[index], student);
    counter++;
}

void search()
{
    long *temp;
    temp = new long;
    int *position;
    position = new int(-1);
    if (isEmpty())
    {
        cout << "No students entered." << endl;
        delete temp;
        temp = 0;
        delete position;
        position = 0;
    } else
    {
        cout << "Enter student id you wish to search for: ";
        cin >> *temp;
        
        for (int i = 0; i < counter; i++)
        {
            if (students[i].getId() == *temp)
            {
                *position = i;
            }
        }
        
        if (*position == -1)
        {
            cout << "Student not in list." << endl;
        } else
        {
            cout <<left<<setw(15) << "Name" << setw(15) << "ID";
            cout << setw(15) << "State" <<setw(15)<< "City" << setw(15)<< "Street" << endl;
            
            students[*position].display();
        }
    }
    delete temp;
    temp = 0;
    delete position;
    position = 0;
}

void menu()
{
    cout << "\nChoose Option (1-4): " << endl;
    cout << "1. Add Student" << endl
    << "2. Search for student" << endl
    << "3. View Student List" << endl
    << "4. QUIT\n\n";
}

void display()
{
    if (isEmpty())
    {
        cout << "No students entered." << endl;
    } else
    {
        cout <<left<<setw(15) << "Name" << setw(15) << "ID";
        cout << setw(15) << "State" <<setw(15)<< "City" << setw(15)<< "Street" << endl;
        for (int i = 0; i < counter; i++)
        {
            students[i].display();
        }
    }
}

void copyDS(Student& destination, Student& source)
{
    destination.setName(source.getName());
    destination.setId(source.getId());
    destination.setCity(source.getCity());
    destination.setState(source.getState());
    destination.setStreet(source.getStreet());
}


//OUTPUT
/*
 Choose Option (1-4):
 1. Add Student
 2. Search for student
 3. View Student List
 4. QUIT

 2

 No students entered.

 Choose Option (1-4):
 1. Add Student
 2. Search for student
 3. View Student List
 4. QUIT

 3

 No students entered.

 Choose Option (1-4):
 1. Add Student
 2. Search for student
 3. View Student List
 4. QUIT

 1

 Enter student information:
 Name: Carlos Surillo
 Id #: 138098
 State: PR
 City: Ponce
 Street: Avenida

 Choose Option (1-4):
 1. Add Student
 2. Search for student
 3. View Student List
 4. QUIT

 1

 Enter student information:
 Name: Rodrigo Silva
 Id #: 187934
 State: PR
 City: Caguas
 Street: Marginal

 Choose Option (1-4):
 1. Add Student
 2. Search for student
 3. View Student List
 4. QUIT

 2

 Enter student id you wish to search for: 138098
 Name           ID             State          City           Street
 Carlos Surillo 138098         PR             Ponce          Avenida

 Choose Option (1-4):
 1. Add Student
 2. Search for student
 3. View Student List
 4. QUIT

 3

 Name           ID             State          City           Street
 Carlos Surillo 138098         PR             Ponce          Avenida
 Rodrigo Silva  187934         PR             Caguas         Marginal

 Choose Option (1-4):
 1. Add Student
 2. Search for student
 3. View Student List
 4. QUIT

 4

 Goodbye!
 Program ended with exit code: 0
 */
