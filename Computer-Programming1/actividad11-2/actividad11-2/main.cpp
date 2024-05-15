//
//  main.cpp
//  actividad11-2
//
//  Created by Carlos Surillo on 10/19/22.
//

#include <iostream>
#include "Coin.hpp"
using namespace std;

int main()
{
    Coin flips;
    int heads = 0, tails = 0;
    
    cout << "Initial side up: "<< flips.getSideUp()<< endl;
    
    cout << "User tosses: " << endl;
    for (int i = 0; i < 20; i++)
    {
        flips.toss();
        string user_side = flips.getSideUp();
        cout << user_side << endl;
        
        if (user_side == "heads")
            heads++;
        else
            tails++;
    }
    
    cout << "Amount of head side up: " << heads << endl;
    cout << "Amount of tail side up: " << tails << endl;
    return 0;
}
