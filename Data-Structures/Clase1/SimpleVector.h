//
//  SimpleVector.h
//  Clase1
//
//  Created by Carlos Surillo on 3/7/23.
//

#ifndef SimpleVector_h
#define SimpleVector_h
#include <iostream>
#include <new> // Needed for bad_alloc exception
#include <cstdlib> // Needed for the exit function
using namespace std;


template <class T>
class SimpleVector
{
    //private:
protected:
    T *aptr; // To point to the allocated array
    void memError(); // Handles memory allocation errors
    void subError(); // Handles subscripts out of range
    int arraySize;  //Number of elements of array
public:
    // Default constructor
    SimpleVector();
    // Constructor declaration
    SimpleVector(int);
    // Copy constructor declaration
    SimpleVector(const SimpleVector &);
    // Destructor declaration
    virtual ~SimpleVector();
    // Accessor to return the array size
    int getArraySize() const;
    // Accessor to return a specific element
    T getElementAt(int position);
    void setValue(T value, int index);
    // Overloaded [] operator declaration
    T &operator[](const int &);
};


template <class T>
SimpleVector<T>::SimpleVector()
{
    aptr = 0;
    arraySize = 0;
}

template <class T>
void SimpleVector<T>::setValue(T value, int index)
{
    aptr[index] = value;
}

//************************************************************
// Constructor for SimpleVector class. Sets the size of the *
// array and allocates memory for it. *
//************************************************************
template <class T>
SimpleVector<T>::SimpleVector(int s)
{
    
    arraySize = s;
    // Allocate memory for the array.
    try
    {
        
        aptr = new T[s];
    }
    catch (bad_alloc)
    {
        memError();
    }
}


//*******************************************
// Copy Constructor for SimpleVector class. *
//*******************************************
template <class T>
SimpleVector<T>::SimpleVector(const SimpleVector &obj)
{
    
    // Copy the array size.
    arraySize = obj.arraySize;
    // Allocate memory for the array.
    aptr = new T[arraySize];
    
    if (aptr == 0)
        memError();
    
    // Copy the elements of obj's array.
    for (int count = 0; count < arraySize; count++)
        * (aptr + count) = *(obj.aptr + count);
}



//**************************************
// Destructor for SimpleVector class. *
//**************************************
template <class T>
SimpleVector<T>::~SimpleVector()
{
    if (arraySize > 0)
        delete[] aptr;
}


//********************************************************
// memError function. Displays an error message and *
// terminates the program when memory allocation fails. *
//********************************************************
template <class T>
void SimpleVector<T>::memError()
{
    cout << "ERROR:Cannot allocate memory.\n";
    exit(EXIT_FAILURE);
}


//************************************************************
// subError function. Displays an error message and *
// terminates the program when a subscript is out of range. *
//************************************************************
template <class T>
void SimpleVector<T>::subError()
{
    cout << "ERROR: Subscript out of range.\n";
    exit(EXIT_FAILURE);
}


//*******************************************************
// getElementAt function. The argument is a subscript. *
// This function returns the value stored at the *
// subcript in the array. *
//*******************************************************
template <class T>
T SimpleVector<T>::getElementAt(int sub)
{
    if (sub < 0 || sub > arraySize)
        subError();
    return aptr[sub];
}


//********************************************************
// Overloaded [] operator. The argument is a subscript. *
// This function returns a reference to the element *
// in the array indexed by the subscript. *
//********************************************************
template <class T>
T &SimpleVector<T>::operator[](const int &sub)
{
    if (sub < 0 || sub > arraySize)
        subError();
    return aptr[sub];
}

template <class T>
int SimpleVector<T>::getArraySize() const
{
    return arraySize;
}

#endif
