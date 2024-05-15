//
//  main.cpp
//  Lab09
//
//  Created by Carlos Surillo on 2/11/23.
//

#include <iostream>
#include "Car.hpp"
#include <iostream>
using namespace::std;

int counter = 0;
Car *cars;
void addCar(Car car);
void menu();
bool isEmpty();


int main()
{
    Car car;
    int choice;
    
    do {
        menu();
        cin >> choice;
        
        switch (choice)
        {
            case 1:
                if(isEmpty())
                {
                    cin >> car;
                    addCar(car);
                }
                else
                {
                    cin >> car;
                    for(int i = 0; i < counter; i++)
                    {
                        if (car == cars[i])
                            cout << "Car is already registered" << endl;
                        else
                        {
                            addCar(car);
                        }
                    }
                }
                break;
                
            case 2:
                if(isEmpty())
                    cout << "No registered cars" << endl;
                else
                {
                    cout << "---Registered cars---"<< endl;
                    for(int i = 0; i < counter; i++)
                    {
                        cout << "Car[" << i+1 <<"]" << endl;
                        cout << cars[i] << endl;
                    }
                }
                break;
            case 3:
                cout << "Goodbye!"<< endl;
                break;
            default:
                break;
        }
    } while (choice != 3);
    return 0;
}



void addCar(Car car)
{
    Car *temp;
    int index = counter;
    
    if (isEmpty())
    {
        cars = new Car [1];
    } else
    {
        temp = new Car [counter];
        
        for (int i = 0; i < counter; i++)
        {
            temp[i] = cars[i];
        }
        
        delete [] cars;
        cars = new Car[counter + 1];
        
        for (int i = 0; i < counter; i++)
        {
            cars[i] = temp[i];
        }
     
        delete [] temp;
    }
    cars[index] = car;
    counter++;
}

void menu()
{
    cout << "---Menu---" << endl;
    cout << "1.Add Car" << endl
    << "2.Show Cars" << endl
    << "3. Quit" << endl;
}

bool isEmpty()
{
    return counter == 0;
}


//Output
/*
 ---Menu---
 1.Add Car
 2.Show Cars
 3. Quit
 2
 No registered cars
 ---Menu---
 1.Add Car
 2.Show Cars
 3. Quit

 1
 Enter data:
 Owner: Carlos Surillo
 Registration: 87wRq
 Model: T8
 Brand: Ferrari
 Year: 2020
 ---Menu---
 1.Add Car
 2.Show Cars
 3. Quit
 1
 Enter data:
 Owner: Jose Olin
 Registration: 88Pb1
 Model: V8
 Brand: Audi
 Year: 2017
 Car is already registered
 ---Menu---
 1.Add Car
 2.Show Cars
 3. Quit
 2
 ---Registered cars---
 Car[1]
 Owner: Carlos Surillo
 Registration: 87wRq
 Model: T8
 Brand: Ferrari
 Year: 2020

 Car[2]
 Owner: Jose Olin
 Registration: 88Pb1
 Model: V8
 Brand: Audi
 Year: 2017

 ---Menu---
 1.Add Car
 2.Show Cars
 3. Quit
 3
 Goodbye!
 Program ended with exit code: 0
 */
