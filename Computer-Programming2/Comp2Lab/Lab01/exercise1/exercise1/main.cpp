//
//  main.cpp
//  exercise1
//
//  Created by Carlos Surillo on 11/19/22.
//

//Program that allows user to input student grades, view student grades, and obtain the average of all the scores submitted.

#include <iostream>
#include <iomanip>
using namespace std;

const int SIZE = 100;


void menu(int &user_choce);
void getGrades(double array[], int size, int &counter);
void showGrades(double array[], int size);
void showAverage(double array[], int size);
              
int main()
{
    int user_choice = 0;
    int counter = 0;
    double grades[SIZE];
    
    
    
    do
    {
        menu(user_choice);
        
        switch(user_choice)
        {
            case 1:
                getGrades(grades, SIZE, counter);
                break;
            case 2:
                showGrades(grades, counter);
                break;
            case 3:
                showAverage(grades, counter);
                break;
            case 4:
                cout << "Goodbye!" << endl;
                break;
        }
        
        
        
        
        
    }while(user_choice != 4);
    return 0;
}


void menu(int &user_choice)
{
    cout<< endl;
    cout<< "Choose an option(1-4):" << endl;
    cout<< "1. Add grades" << endl
    << "2. Show grades" << endl
    << "3. Show average" << endl
    << "4. Quit" << endl<<endl;
    cout << "Enter option: ";
    cin>> user_choice;
    
    while(user_choice > 4 || user_choice < 1)
    {
        cout<< "Error, invalid option." << endl
        << "Enter option(1-4): ";
        cin>> user_choice;
    }
}



void getGrades(double array[], int size, int &counter)
{
    cout<< "Enter student's grades: (-1 to stop)" << endl;
    
    for (int i = 0; i < size; i++)
    {
        cout<< "Grade #" << i + 1 << ": ";
        cin >> array[i];
    
        if(array[i] < 0 || array[i] > 100)
        {
            cout << "Invalid input." << endl;
            break;
        } else
        {
            counter++;
        }
    }
}

void showGrades(double array[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout<< "Grade #"<< i + 1<<": " << array[i] << endl;
    }
}


void showAverage(double array[], int size)
{
    double total = 0, avg = 0;
    for (int i = 0; i < size; i++)
    {
        total+= array[i];
    }
    avg = total/size;
    cout<<fixed<<setprecision(2);
    cout << "The average of the student is: " << avg<< endl;
    cout.unsetf(std::ios_base::fixed);
}



//OUTPUT:
/*
 Choose an option(1-4):
 1. Add grades
 2. Show grades
 3. Show average
 4. Quit

 Enter option: 0
 Error, invalid option.
 Enter option(1-4): 5
 Error, invalid option.
 Enter option(1-4): 1
 Enter student's grades: (-1 to stop)
 Grade #1: 58
 Grade #2: 98
 Grade #3: 91
 Grade #4: 83
 Grade #5: 87
 Grade #6: 92
 Grade #7: -1
 Invalid input.

 Choose an option(1-4):
 1. Add grades
 2. Show grades
 3. Show average
 4. Quit

 Enter option: 2
 Grade #1: 58
 Grade #2: 98
 Grade #3: 91
 Grade #4: 83
 Grade #5: 87
 Grade #6: 92

 Choose an option(1-4):
 1. Add grades
 2. Show grades
 3. Show average
 4. Quit

 Enter option: 3
 The average of the student is: 84.83

 Choose an option(1-4):
 1. Add grades
 2. Show grades
 3. Show average
 4. Quit

 Enter option: 4
 Goodbye!
 Program ended with exit code: 0
 */
