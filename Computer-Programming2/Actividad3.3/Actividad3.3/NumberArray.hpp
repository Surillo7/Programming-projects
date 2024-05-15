//
//  NumberArray.hpp
//  Actividad3.3
//
//  Created by Carlos Surillo, Stephanie Cruz, Alanna vega
//

#ifndef NumberArray_hpp
#define NumberArray_hpp

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
};

#endif /* NumberArray_hpp */
