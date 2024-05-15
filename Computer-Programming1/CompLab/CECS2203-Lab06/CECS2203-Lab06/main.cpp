/*
* CECS 2203, Computer Programming I Lab
* Fall 2022, Sec. 06
* Date: October 13, 2022
* Topic: Lab 6 - Sorting Arrays
* File name: lab06.cpp
* Instructions: Complete the C++ code as required.
* Name: Carlos Surillo, # 138098
*/
// write the appropriate include and using statements
#include <iostream>
using namespace std;

void setNumbers(int array[], const int size); // this method requires an array and its length as parameters
void lowToHigh(int array[], const int size); // this method requires an array and its length as parameters
void highToLow(int array[], const int size); // this method requires an array and its length as parameters
void printNumbers(int array[], const int size); // this method requires an array and its length as parameters
void personalInfo(); // method prototype

int main(){
    // Write the statement that declares a constant integer variable named LENGTH
    // and initializes it to 10.
    const int LENGTH = 10;
    
    // Write the statement that declares an integer array named numbers, using the
    // constant as its size, and initializes all elements to 0.
    int numbers[LENGTH] = {0};

    // Write the statement that calls the setNumbers method
    setNumbers(numbers, LENGTH);
    cout << "After setNumbers the values in the array are:\n";
    // Write the statement that calls the printNumbers method
    printNumbers(numbers, LENGTH);
    // Write the statement that calls the lowToHigh method
    lowToHigh(numbers, LENGTH);
    cout << "After lowToHigh the values in the array are:\n";
    // Write the statement that calls the printNumbers method
    printNumbers(numbers, LENGTH);
    // Write the statement that calls the highToLow method
    highToLow(numbers, LENGTH);
    cout << "After highToLow the values in the array are:\n";
    // Write the statement that calls the printNumbers method
    printNumbers(numbers, LENGTH);
    cout << endl;
    // Write the statement that calls the personalInfo method
    personalInfo();
    cout << endl;
    return 0;
}
// Method definitions

// The setNumbers method receives an integer array and its size as parameters
// and has no return value. It uses the random number functions to assign a
// value between 0 and 999 to each element of the array. Make sure to seed the
// pseudo random number generator the time method as argument before calling
// the rand function.
// DO NOT DECLARE any variables in this method.
void setNumbers(int array[], const int size)
{
    srand((unsigned int)time(NULL));
    for (int i = 0; i < size; i++)
    {
        array[i] = rand() % 1000;
    }
}


// The lowToHigh method receives an array and its length as parameters and
// has no return value. It sorts the values in the array in ascending order
// using a nested for iteration control structure.
void lowToHigh(int array[], const int size)
{
    int temp = 0;
    for (int i = 0; i < size - 1; i++)
    {
        for(int j = i + 1; j < size; j++)
        {
            if (array[i] > array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

// The highToLow method receives an array and its length as parameters and
// has no return value. It sorts the values in the array in descending order
// using a nested for iteration control structure.
void highToLow(int array[], const int size)
{
    int temp = 0;
    for (int i = 0; i < size -1; i++)
    {
        for(int j = i + 1; j < size; j++)
        {
            if(array[i] < array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

// The printNumbers method receives an array and its length as parameters and
// has no return value. It prints the values in the array, separated by a tab
// space, using a for iteration control structure. Make sure to include a blank
// line after the contents of the array are printed to the console.
// DO NOT DECLARE any variables in this method.
void printNumbers(int array[], const int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << "\t";
    }
    cout<< endl<< endl;
}

// The personalInfo method has no parameters or return value. It prints the phrase
// "Program developed by [YOUR NAME], ID#[YOUR ID NUMBER]", where the square
// brackets and the text within is substituted with your personal information.
void personalInfo()
{
    cout << "\nProgram developed by Carlos Surillo, ID#138098\n\n";
}

