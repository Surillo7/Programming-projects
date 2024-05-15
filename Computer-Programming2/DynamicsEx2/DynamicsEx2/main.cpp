//
//  main.cpp
//  DynamicsEx2
//
//  Created by Carlos Surillo on 12/2/22.
//

//first example
/*
#include<iostream>
#include<cctype>
using namespace::std;
char *getName();
int *getLength(char *namePtr);
int main()
{

    int *lengthPtr = nullptr;
    char *namePtr = nullptr;

    namePtr = getName();
    lengthPtr = getLength(namePtr);
    cout << "Your name is " << namePtr;
    cout << " and has " << *lengthPtr << " characteres" << endl;
    delete[] namePtr;
    delete  lengthPtr;
    namePtr = 0;
    lengthPtr = 0;
    return 0;
}//end min


char *getName()
{
    char *namePtr = nullptr;
    const int MAX_LINE = 81;
    namePtr = new char[MAX_LINE];
    cout << "Enter your name:";
    cin.getline(namePtr, MAX_LINE);
    return namePtr;
}

int *getLength(char *namePtr)
{
    int *lengthPtr = nullptr;
    int index;
    lengthPtr = new int;
    *lengthPtr = 0;
    index = 0;
    while (namePtr[index] != '\0')
    {
        if (!isspace(namePtr[index]))
        {
            *lengthPtr = *lengthPtr + 1;
        }//end if
        index++;
    }//end while
    return lengthPtr;
}
*/

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

/*
#include<iostream>
using namespace::std;

int * getAverage(int *numbers[], int n);

int main()
{

    int MAX_CAPACITY = 0, index;
    int *numbers = nullptr;
    int *averages = nullptr;

    cout << "Enter the array capacity:";
    cin >> MAX_CAPACITY;
    numbers = new int[MAX_CAPACITY];
    // Get values for the array.
    for (index = 0; index < MAX_CAPACITY; index++)
    {
        cout << "Enter an integer value: ";
        cin >> numbers[index];
    }//end for

    // Display the values in the array.
    cout << "Here are the values you entered:\n";
    for (index = 0; index < MAX_CAPACITY; index++){
        cout << numbers[index] << endl;
    }//end for
    
    averages = getAverage(numbers, MAX_CAPACITY);
    
   
    delete[] numbers;
    numbers = 0;
    return 0;
}//end main

int * getAverage(int *numbers[], int n)
{
    int *average = nullptr;
    average = new int;
    *average = 0;
    for (int index = 0; index < n; index++)
    {
        *average = *(*average + numbers[index]);
    }
    return average;
}

*/

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


/*
#include<iostream>
using namespace::std;
int *CreateArray(int size);
void display(int *numbers, int size);
double * getAverage(int *numbers, int size);
int main()
{

    int size = 0;
    int *numbers = nullptr;
    double *average = nullptr;

    cout << "Enter the array capacity:";
    cin >> size;
    numbers = CreateArray(size);
    display(numbers, size);
    average = getAverage(numbers, size);
    cout << "The average of the array is " << *average << endl;
    
    delete[] numbers;
    
    numbers = 0;
    
    delete average;
    
    average = 0;
    
    return 0;
}//end main


int *CreateArray(int size)
{
    int *numbers = nullptr;
    numbers = new int[size];
    // Get values for the array.
    for (int index = 0; index < size; index++)
    {
        cout << "Enter an integer value: ";
        cin >> numbers[index];
    }//end for
    return numbers;
}

void display(int *numbers, int size)
{
    cout << "Here are the values you entered:\n";
    for (int index = 0; index < size; index++){
        cout << numbers[index] << endl;
    }//end for
}

double * getAverage(int *numbers, int size)
{
    double* average = new double;
    for(int i = 0; i < size; i++)
    {
            *average += numbers[i];
    }
    *average = *average / size * 1.0;
    return average;
}

*/

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


#include <iostream>
#include <iomanip>
using namespace std;

int ** CreateMatrix(int &rowSize, int &columnSize);
void getValues(int **&matrixPtr, int rowSize, int columnSize);
void display(int **pmatrixPtr, int rowSize, int columnSize);
void Identity(int rowSize, int columnSize);


int main()
{
    int **matrixPtr;
    int rows;
    int columns;

    matrixPtr = CreateMatrix(rows, columns);
    //Insert elements into matrix
    getValues(matrixPtr, rows, columns);
    cout << "Matrix:" << endl;
    //Output the elements of Matrix
    display(matrixPtr, rows, columns);
    Identity(rows, columns);
    for (int row = 0; row < rows; row++)
        delete[] matrixPtr[row];
    delete matrixPtr;
    matrixPtr = 0;
    return 0;
}

int ** CreateMatrix(int &rowSize, int &columnSize)
{
    int **matrixPtr;
    cout << "Enter the number of rows and columns: ";
    cin >> rowSize >> columnSize;
    cout << endl;
    //Create the rows of board
    matrixPtr = new int*[rowSize];
    //Create the columns of board
    for (int row = 0; row < rowSize; row++)
        matrixPtr[row] = new int[columnSize];

    return matrixPtr;
}

void getValues(int **&matrixPtr, int rowSize, int columnSize)
{
    for (int row = 0; row < rowSize; row++)
    {
        cout << "Enter " << columnSize << " number(s) for row "
            << "number " << row << ": ";
        for (int col = 0; col < columnSize; col++)
            cin >> matrixPtr[row][col];
        cout << endl;
    }
}
void display(int **matrixPtr, int rowSize, int columnSize)
{
    for (int row = 0; row < rowSize; row++)
    {
        for (int col = 0; col < columnSize; col++)
            cout << setw(5) << matrixPtr[row][col];
        cout << endl;
    }
    cout<< endl;
}

void Identity(int rowSize, int columnSize)
{
    cout << "Identity Matrix: " << endl;
    for (int row = 0; row < rowSize; row++)
    {
        for (int col = 0; col < columnSize; col++)
        {
            if (row == col)
                cout << 1 << "  ";
            else
                cout << 0 << "  ";
        }
        cout << endl;
    }
}

/*
 Output:
 
 Enter the number of rows and columns: 3
 3

 Enter 3 number(s) for row number 0: 1
 3
 7


 Enter 3 number(s) for row number 1: 8
 9
 4

 Enter 3 number(s) for row number 2: 3
 6
 5

 Matrix:
     1    3    7
     8    9    4
     3    6    5

 Identity Matrix:
 1  0  0
 0  1  0
 0  0  1
 Program ended with exit code: 0
 */
