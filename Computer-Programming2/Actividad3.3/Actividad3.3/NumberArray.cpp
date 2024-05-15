//
//  NumberArray.cpp
//  Actividad3.3
//
//  
//

#include "NumberArray.hpp"
#include <iostream>
#include <cstdlib>
using namespace::std;

NumberArray::NumberArray(int size)
{
    list = new float[size];
    numElements = size;
    for (int i = 0; i < size; i++)
    {
        list[i] = 0;
    }
}

NumberArray::NumberArray(NumberArray &obj)
{
    list = new float[numElements];
    for (int i = 0; i < numElements; i++)
    {
        list[i] = obj.list[i];
    }
}

NumberArray::~NumberArray()
{
    delete [] list;
}

bool NumberArray::isValid(int element) const
{
    bool status;
    if (element < 0 || element >= numElements)
        status = false;
    else
        status = true;
    return status;
}

void NumberArray::setElement(int element, float value)
{
    if (isValid(element))
        list[element] = value;
    else
    {
        cout << "Error: Invalid subscript\n";
        exit(EXIT_FAILURE);
    }
}

float NumberArray::getElement(int element) const
{
    if (isValid(element))
        return list[element];
    else
    {
        cout << "Error: Invalid subscript\n";
        exit(EXIT_FAILURE);
    }
}

float NumberArray::getHighest() const
{
    float highest = list[0];
    for (int i = 0; i < numElements - 1; i++)
    {
        if (highest < list[i+1])
            highest = list[i+1];
    }
    return highest;
}

float NumberArray::getLowest() const
{
    float lowest = list[0];
    for (int i = 0; i < numElements - 1; i++)
    {
        if (lowest > list[i+1])
            lowest = list[i+1];
    }
    return lowest;
}

float NumberArray::getAverage() const
{
    float sum = 0.0;
    
    for (int i = 0; i < numElements; i++)
    {
        sum += list[i];
    }
    return sum / numElements;
}
