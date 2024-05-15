//
//  main.cpp
//  Actividad1-3
//


#include <iostream>
#include "Lottery.hpp"
using namespace::std;

void compare(Lottery array[], Lottery array2[]);
void getLottery(Lottery array[]);
void getUser(Lottery array[]);
void show(Lottery array[]);

int main()
{
    Lottery ai[5];
    Lottery user[5];
    
    getLottery(ai);
    getUser(user);
    
    cout << endl;
    cout << "User numbers: " << endl;
    show(user);
    cout << "Lottery numbers: " << endl;
    show(ai);
    cout << endl;
    compare(user, ai);
    cout << endl;
    
    return 0;
}


void getUser(Lottery array[])
{
    cout<< "Enter your lucky numbers: (0-9)" << endl;
    int num;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter number #"<< i+1 <<": ";
        cin>> num;
        
        while(num > 9)
        {
            cout << "Invalid number, enter from 0-9." << endl;
            cin>> num;
        }
        
        array[i].setValues(num);
    }
    cout << endl;
}

void show(Lottery array[])
{
    for (int i = 0; i < 5; i++)
    {
        array[i].display();
    }
    cout<< endl;
}

void getLottery(Lottery array[])
{
    int num2;
    srand((unsigned int)time(NULL));
    for (int i = 0; i < 5; i++)
    {
        num2 = rand() % 10;
        array[i].setValues(num2);
    }
}

void compare(Lottery array[], Lottery array2[])
{
    int count = 0;
    for (int i = 0; i < 5; i++)
    {
        if(array[i].getValue() == array2[i].getValue())
        {
            count++;
        }
    }
    if(count == 5)
    {
        cout << "Congratulations, you are the winner!"<< endl;
    } else
    {
        cout << "Unlucky! You matched " << count << " number(s). Better luck next time."<< endl;
    }
}
