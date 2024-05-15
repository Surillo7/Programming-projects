//
//  NegativeWeight.h
//  actividad5-1
//
//  Created by Carlos Surillo on 1/10/23.
//

#ifndef NegativeWeight_h
#define NegativeWeight_h
#include <stdexcept>

class NegativeWeight
{
private:
    int value;
public:
    NegativeWeight(int val)
    {
        value = val;
    }
    int getValue() const
    {
        return value;
    }
};

#endif /* NegativeWeight_h */
