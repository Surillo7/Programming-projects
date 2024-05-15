//
//  Negativemales.h
//  MaleandFemale
//
//  Created by Carlos Surillo on 12/13/22.
//

#ifndef Negativemales_h
#define Negativemales_h
#include <stdexcept>

class NegativeMales
{
private:
    int value;
public:
    NegativeMales(int val)
    {
        value = val;
    }
    int getValue() const
    {
        return value;
    }
};


#endif /* Negativemales_h */
