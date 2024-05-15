//
//  NegativeFemales.h
//  MaleandFemale
//
//  Created by Carlos Surillo on 12/13/22.
//

#ifndef NegativeFemales_h
#define NegativeFemales_h
#include <stdexcept>

class NegativeFemales
{
private:
    int value;
public:
    NegativeFemales(int val)
    {
        value = val;
    }
    int getValue() const
    {
        return value;
    }
};


#endif /* NegativeFemales_h */
