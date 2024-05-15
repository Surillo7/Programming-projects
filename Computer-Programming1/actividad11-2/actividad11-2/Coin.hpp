//
//  Coin.hpp
//  actividad11-2
//
//  Created by Carlos Surillo on 10/19/22.
//

#ifndef Coin_hpp
#define Coin_hpp

#include <iostream>
#include <string>
using namespace std;

class Coin
{
private:
    string sideUp;
    
public:
    Coin();
    void toss();
    string getSideUp() const;
};
#endif /* Coin_hpp */
