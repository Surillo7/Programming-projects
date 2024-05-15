//
//  NegativeNum.h
//  Actividad7-3
//
//  Created by Carlos Surillo on 1/18/23.
//

#ifndef NegativeNum_h
#define NegativeNum_h
#include <stdexcept>

class NegativeNum
{
private:
    int value;
public:
    NegativeNum(int val)
    {
        value = val;
    }
    int getValue() const
    {
        return value;
    }
};

#endif /* NegativeNum_h */
