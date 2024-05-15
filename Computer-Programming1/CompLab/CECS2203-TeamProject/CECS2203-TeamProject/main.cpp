
// CECS 2203, Computer Programming I Lab
// Fall 2022, Sec. 06
// Date: October 18, 2022
// Team Project: Selection Sort for 2-dimensional arrays
// File name: teamProject.cpp
// Team Members: Carlos Surillo #138098, Derek Correia #141833
// This is a team project. Your team will be required to present
// your work on Tuesday, October 25.
// Complete the code with the required instructions and execute
// the program. Use the following values for rows and columns
// to make sure the code works correctly:
// Program execution #1: 4 rows 4 columns
// Program execution #2: 6 rows 3 columns
// Program execution #3: 3 rows 6 columns
#include <iostream>
using namespace std;
//declare a global constant integer variable named COLUMNS and initialize as required
const int COLUMNS = 6;
//the methods receive a 2-dimension integer array and the size of the first dimension as parameters
void randomAssign(int [][COLUMNS], int);
void printArray(int [][COLUMNS], int);
void selectionSort(int [][COLUMNS], int);

int main() {
    const int ROWS = 3;// initializes the constant
    // declare a two-dimensional integer array named twoDimInt
    int twoDimInt[ROWS][COLUMNS] = {0};
    
    cout << "Calling randomAssign to populate the array...\n";
    // assign values to the array using the randomAssign method
    randomAssign(twoDimInt, ROWS);
    
    cout << "The values in the array are:\n";
    // print the values in the array using the printArray method
    printArray(twoDimInt, ROWS);
    
    cout << "Calling selectionSort to order the array...\n";
    // call the selectionSort method to order the array
    selectionSort(twoDimInt, ROWS);
    
    cout << "The values in the array, in order, are:\n";
    // print the values in the array using the printArray method
    printArray(twoDimInt, ROWS);
    
    // print the phrase
    cout<< "Program developed by Carlos Surillo, ID#138098, and Derek Correia, ID#141833"<< endl;
   
    return 0;
}

// The randomAssign method assigns a value from 0 to 500 to all elements
// in the array using the rand method. Make sure to seed the
// pseudo-random number generator by calling the srand function using the
// return value of the time method as seed. Use a nested for iteration
// control structure to iterate through the array and assign the values.
// DO NOT declare any variables in this method

void randomAssign(int array[][COLUMNS], int n)
{
    srand((unsigned int)time(NULL));
    for(int i = 0; i < n; i++)
    {
        for (int j = 0; j < COLUMNS; j++)
        {
            array[i][j] = rand() % 501;
        }
    }
}

// prints the contents of array in a matrix format
// First, print an empty line.
// Using a nested for iteration control structure
// print a tab space followed by each value.
// Make sure to end each row with a new line, and add an
// empty line after all values have been printed.
// DO NOT declare any variables in this method

void printArray(int array[][COLUMNS], int n)
{
    cout<< endl;
    for(int i = 0; i < n; i++)
    {
        for (int j = 0; j < COLUMNS; j++)
        {
            cout << "\t"<< array[i][j];
        }
        cout << endl;
    }
    cout<< endl;
}

// Implements the Selection Sort algorithm to sort the 2-dimensional array,
// ordering values from low to high across and then down
// Example: 1 2 3
//          4 5 6
// Use a nested for iteration control structure to order the array.

void selectionSort(int array[][COLUMNS], int n)
{
    int highest = 0, highIndexRow = -1, highIndexCol = -1, temp = 0;
    for (int i = 0; i < n; i++)
    {
            for (int j = 0; j < COLUMNS; j++)
            {
                highest = array[i][j];
                for (int row = (j == COLUMNS - 1) ? i + 1 : i; row < n; row++)
                {
                    for (int column = (i == row) ? j + 1 : 0; column < COLUMNS; column++)
                    {
                        if (highest > array[row][column])
                        {
                            highest = array[row][column];
                            highIndexRow = row;
                            highIndexCol = column;
                        }
                    }
                }
                if (highIndexRow > -1 /*&& highIndexCol > -1*/)
                {
                    temp = array[i][j];
                    array[i][j] = highest;
                    array[highIndexRow][highIndexCol] = temp;
                    highIndexRow = -1;
                    highIndexCol = -1;
                }
            }
        }
}
