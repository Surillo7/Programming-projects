//
//  NumberArray.hpp
//  Actividad6-3
//
//  Created by Carlos Surillo on 1/12/23.
//

#ifndef NumberArray_hpp
#define NumberArray_hpp
#include <iostream>
using namespace::std;

class NumberArray
{
private:
    float *list;
    int numElements;
    bool isValid(int) const;
public:
    NumberArray(int);
    ~NumberArray();
    NumberArray(NumberArray &obj);
    void setElement(int, float);
    float getElement(int) const;
    float getHighest() const;
    float getLowest() const;
    float getAverage() const;
    void subscriptError();
    float &operator[](const int &sub);
    int operator[](int subscript) const;
    bool operator == (const NumberArray &obj) const;
    const NumberArray &operator=(const NumberArray &obj);
    bool operator!=(const NumberArray &obj);
    friend ostream &operator << (ostream &strm, const  NumberArray &obj);
    friend istream &operator >> (istream &strm, NumberArray &obj);
    
};

#endif /* NumberArray_hpp */
