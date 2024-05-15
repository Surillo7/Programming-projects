//
//  NumberArray.cpp
//  Actividad6-3
//
//  Created by Carlos Surillo on 1/12/23.
//

#include "NumberArray.hpp"
#include <iostream>
using namespace::std;

NumberArray::NumberArray(int n)
{
    numElements = n;
    list = new float[n];
    for (int i = 0; i < n; i++)
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

void NumberArray::subscriptError()
{
    cout << "ERROR: Subscript out of range.\n";
    exit(0);
}

float &NumberArray::operator[](const int &sub)
{
    if (sub < 0 || sub >= numElements)
        subscriptError();
    return list[sub];
}

int NumberArray::operator[](int subscript) const
{
    
    if (subscript < 0 || subscript >= numElements)
        throw out_of_range("Subscript out of range");
     return list[subscript];
}

bool NumberArray::operator == (const NumberArray &obj) const
{
    int count = 0;
    for (int i = 0; i < obj.numElements; i++)
    {
        if (getElement(i)== obj.getElement(i))
            count++;
    }
    
    if (count == obj.numElements)
        return true;
    else
        return false;
}


const NumberArray &NumberArray::operator=(const NumberArray &obj)
{
    delete[] list;
    list = new float[obj.numElements];
    for (int i = 0; i < obj.numElements; i++)
    {
        list[i] = obj.getElement(i);
    }
    return *this;
}

bool NumberArray::operator!=(const NumberArray &obj)
{
    int count = 0;
    for (int i = 0; i < obj.numElements; i++)
    {
        if (getElement(i)!= obj.getElement(i))
            count++;
    }
    
    if (count > 0)
        return true;
    else
        return false;
}

ostream &operator << (ostream &strm, const  NumberArray &obj)
{
 
    strm<< "Array: "<< endl;
    for (int indx = 0; indx < obj.numElements; indx++)
    {
        strm<< obj.getElement(indx) << "  ";
    }
    cout << endl << endl;
    
    //Highest value
    strm << "Highest Value: " << obj.getHighest() << endl<< endl;
    
    //Lowest Value
    strm << "Lowest Value: " << obj.getLowest() << endl<< endl;
    
    //Average
    strm << "Average: " << obj.getAverage()<< endl;
    return strm;
}


istream &operator >> (istream &strm, NumberArray &obj)
{
    float num;
    for (int indx = 0; indx < obj.numElements; indx++)
    {
        cout<< "Enter number: ";
        cin>> num;
        obj[indx] = num;
    }
    
    return strm;
}

