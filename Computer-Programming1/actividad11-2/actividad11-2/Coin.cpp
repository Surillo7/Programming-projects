//
//  Coin.cpp
//  actividad11-2
//
//  Created by Carlos Surillo on 10/19/22.
//

#include <iostream>
#include <string>
using namespace::std;
#include "Coin.hpp"

Coin::Coin()
{
    srand((unsigned int)time(NULL));
    int random = rand() % 2;
    if (random == 0)
        sideUp = "heads";
    else
        sideUp = "tails";
}

void Coin::toss()
{
    //srand((unsigned int)time(NULL));
    //lo quite por que al no pasar casi tiempo entre las llamadas de srand,
    //retornaba los mismos valores
    int random = rand() % 2;
    if (random == 0)
        sideUp = "heads";
    else
        sideUp = "tails";
}

string Coin::getSideUp() const
{
    return sideUp;
}
