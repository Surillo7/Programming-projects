//
//  SortableVector.h
//  Actividad11-1
//
//  Created by Carlos Surillo on 2/9/23.
//

#ifndef SortableVector_h
#define SortableVector_h
#include "SimpleVector.h"
using namespace::std;

template <class T>
class SortableVector: public SimpleVector<T>
{
public:
    SortableVector() : SimpleVector<T>()
    { }
    
    SortableVector(int size) : SimpleVector<T>(size)
    { }
    
    SortableVector(const SortableVector &obj);
    
    void SelectionSort();
};


template <class T>
SortableVector<T>::SortableVector(const SortableVector &obj): SimpleVector<T>(obj.getArraySize())
{
    for(int count = 0; count < this->getArraySize(); count++)
    {
        this-> operator[](count) = obj[count];
    }
}

template <class T>
void SortableVector<T>::SelectionSort()
{
    int startScan, minIndex;
    T minValue;
    
    for(startScan = 0; startScan < (this -> getArraySize() - 1); startScan++)
    {
        minIndex = startScan;
        minValue = SimpleVector<T>::aptr[startScan];
        for(int index = startScan + 1; index < this-> getArraySize(); index++)
        {
            if(SimpleVector<T>::aptr[index] < minValue)
            {
                minValue = SimpleVector<T>::aptr[index];
                minIndex = index;
            }
        }
        SimpleVector<T>::aptr[minIndex] = SimpleVector<T>::aptr[startScan];
        SimpleVector<T>::aptr[startScan] = minValue;
    }
}
#endif /* SortableVector_h */
