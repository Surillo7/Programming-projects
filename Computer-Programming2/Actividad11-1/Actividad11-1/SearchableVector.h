//
//  SearchableVector.h
//  Actividad11-1
//
//  Created by Carlos Surillo on 2/9/23.
//

#ifndef SearchableVector_h
#define SearchableVector_h

#include "SimpleVector.h"
template <class T>
class SearchableVector : public SimpleVector<T>
{
    public:
    // Default constructor
    SearchableVector();
    // Constructor
    SearchableVector(int size);
    // Copy constructor
    SearchableVector(const SearchableVector &);
    // Accessor to find an item
    int findItem(const T);
};



// Default constructor
template <class T>
SearchableVector<T>::SearchableVector() : SimpleVector<T>(){ }

// Constructor
template <class T>
SearchableVector<T>::SearchableVector(int size) : SimpleVector<T>(size){ }

//***************************
// Copy constructor *
//***************************
template <class T>
SearchableVector<T>::SearchableVector(const SearchableVector &obj)
:SimpleVector<T>(obj.getArraysize())
{
    for (int count = 0; count < this->getArraysize(); count++)
        this->operator[](count) = obj[count];
}
//********************************************************
// This function searches for item. If item is found *
// the subscript is returned. Otherwise −1 is returned. *
//********************************************************
template < class T>
int SearchableVector<T>::findItem(const T item)
{
    int first = 0; // First array element
    int last = this->getArraySize() - 1; // Last array element
    int middle; // Midpoint of search
    int position = -1; // Position of search value
    bool found = false; // Flag
    while (!found && first <= last)
    {
        middle = (first + last) / 2; // Calculate midpoint
        if (this->operator[](middle) == item) // If value is found at mid
        {
            position = middle;
            found = true;
        }
        else if (this->operator[](middle) > item)
            last = middle - 1;
        else
            first = middle + 1; // If value is in upper half
    }
    return position;
}
#endif /* SearchableVector_h */
