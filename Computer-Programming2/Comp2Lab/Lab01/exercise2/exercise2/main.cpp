//
//  main.cpp
//  exercise2
//
//  Created by Carlos Surillo on 11/19/22.
//

//Program that allows user to input an animals data and see it shown as a table. It asks the user for the animals atributes such as name, weight, color, etc. to display them later on


#include "Animal.hpp"
#include <iostream>
#include <string>
#include <iomanip>
using namespace::std;

const int SIZE = 100;

void menu(int &user_choice);
void getAnimalData(Animal array[], int size, int &counter);
void showData(Animal array[], int size);


int main()
{
    int user_choice = 0;
    int counter = 0;
    Animal dataAnimal[SIZE];
    
    
    do
    {
        menu(user_choice);
        switch(user_choice)
        {
            case 1:
                getAnimalData(dataAnimal, SIZE, counter);
                break;
            case 2:
                showData(dataAnimal, counter);
                break;
            case 3:
                cout << "Goodbye!" << endl;
                break;
        }
    } while (user_choice != 3);
    
    return 0;
}


void menu(int &user_choice)
{
    cout<< endl;
    cout<< "Choose an option(1-3):" << endl;
    cout<< "1. Add animal" << endl
    << "2. Show animals" << endl
    << "3. Quit" << endl<<endl;
    cout << "Enter option: ";
    cin>> user_choice;
    
    while(user_choice > 3 || user_choice < 1)
    {
        cout<< "Error, invalid option." << endl
        << "Enter option(1-3): ";
        cin>> user_choice;
    }
}


void getAnimalData(Animal array[], int size, int &counter)
{
    string name, color;
    double weight;
    int legs, check;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter data for Animal #" << i + 1 << ": (Enter 0 to continue) ";
        cin >> check;
        if(check == 0)
        {
            counter++;
        }else
        {
            break;
        }
        cout << "Name: ";
        cin >> name;
        array[i].setName(name);
        cout<< "Color: ";
        cin>> color;
        array[i].setColor(color);
        cout<<"Weight(kg): ";
        cin>> weight;
        array[i].setWeight(weight);
        cout<<"Number of Legs: ";
        cin>> legs;
        array[i].setLegs(legs);
    }
}

void showData(Animal array[], int size)
{
    cout << left << setw(8) << "Name" << left << setw(8) << "Weight" << left
    << setw(8)<< "Color" << left << setw(8) << "Legs" << endl;
    for(int i = 0; i < size; i++)
    {
        array[i].display();
    }
}

//OUTPUT:
/*
 Choose an option(1-3):
 1. Add animal
 2. Show animals
 3. Quit

 Enter option: 0
 Error, invalid option.
 Enter option(1-3): 4
 Error, invalid option.
 Enter option(1-3): 1
 Enter data for Animal #1: (Enter 0 to continue) 0
 Name: Lion
 Color: Tan
 Weight(kg): 220
 Number of Legs: 4
 Enter data for Animal #2: (Enter 0 to continue) 0
 Name: Shark
 Color: Grey
 Weight(kg): 350
 Number of Legs: 0
 Enter data for Animal #3: (Enter 0 to continue) 0
 Name: Cat
 Color: black
 Weight(kg): 25
 Number of Legs: 4
 Enter data for Animal #4: (Enter 0 to continue) 0
 Name: Dog
 Color: red
 Weight(kg): 55
 Number of Legs: 4
 Enter data for Animal #5: (Enter 0 to continue) 1

 Choose an option(1-3):
 1. Add animal
 2. Show animals
 3. Quit

 Enter option: 2
 Name    Weight  Color   Legs
 Lion    220     Tan     4
 Shark   350     Grey    0
 Cat     25      black   4
 Dog     55      red     4

 Choose an option(1-3):
 1. Add animal
 2. Show animals
 3. Quit

 Enter option: 3
 Goodbye!
 Program ended with exit code: 0
 */
