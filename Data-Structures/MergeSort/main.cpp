//
//  main.cpp
//  Actividad2.3
//
//  Created by Carlos Surillo on 3/25/23.
//

#include <iostream>
using namespace::std;

void getValues(int theArray[], int count);
void mergeSort(int theArray[], int first, int last);
void merge(int theArray[], int first, int mid, int last);
int binarySearch(const int anArray[], int first, int last, int target);
void displayValues(int theArray[], int count);

const int MAX_SIZE = 8;

//1 , 5, 9, 12, 15, 21, 29, 31
int main()
{
    int array[MAX_SIZE];
    getValues(array, MAX_SIZE);
    
    mergeSort(array, 0, MAX_SIZE - 1);
    
    displayValues(array, MAX_SIZE);
    
    int n = 5;
    int bisearch = binarySearch(array, 0, MAX_SIZE - 1, n);
    
    if(bisearch == -1)
        cout << "Number " << n << " not found" << endl;
    else
        cout << "Number " << n << " was found at index " << bisearch << endl;
    
    n = 13;
    bisearch = binarySearch(array, 0, MAX_SIZE - 1, n);
    
    if(bisearch == -1)
        cout << "Number " << n << " not found" << endl;
    else
        cout << "Number " << n << " was found at index " << bisearch << endl;
    
    n = 16;
    bisearch = binarySearch(array, 0, MAX_SIZE - 1, n);
    
    if(bisearch == -1)
        cout << "Number " << n << " not found" << endl;
    else
        cout << "Number " << n << " was found at index " << bisearch << endl;
        
    return 0;
}

void getValues(int theArray[], int count)
{
    for(int i = 0; i < count; i++)
    {
        cout << "Enter value #" << i+1 << ": ";
        cin>> theArray[i];
    }
}

void mergeSort(int theArray[], int first, int last)
{
    if (first < last)
    {
        // Sort each half
        int mid = first + (last - first) / 2;   // Index of midpoint

        // Sort left half theArray[first..mid]
        mergeSort(theArray, first, mid);
        
        // Sort right half theArray[mid+1..last]
        mergeSort(theArray, mid + 1, last);
        
        // Merge the two halves
        merge(theArray, first, mid, last);
        
    } // end if
    // end mergeSort
}


void merge(int theArray[], int first, int mid, int last)
{
    int tempArray[MAX_SIZE]; // Temporary array
    // Initialize the local indices to indicate the subarrays
    // Beginning of first subarray
    int first1 = first;
    // End of first subarray
    int last1 = mid;
    // Beginning of second subarray
    int first2 = mid + 1;
    // End of second subarray
    int last2 = last;
    
    // While both subarrays are not empty, copy the
    // smaller item into the temporary array
    int index = first1; // Next available location in tempArray
    while ((first1 <= last1) && (first2 <= last2))
    {
        // At this point, tempArray[first..index-1] is in order
        if (theArray[first1] <= theArray[first2])
        {
            tempArray[index] = theArray[first1];
            first1++;
            
        }
        else
        {
            tempArray[index] = theArray[first2]; first2++;
        } // end if
        index++;
    } // end while
    
    // Finish off the first subarray, if necessary
    while (first1 <= last1)
    {
        // At this point, tempArray[first..index-1] is in order
        tempArray[index] = theArray[first1];
        first1++;
        index++;
        // end while
    }
    
    // Finish off the second subarray, if necessary
    while (first2 <= last2)
    {
        // At this point, tempArray[first..index-1] is in order
        tempArray[index] = theArray[first2];
        first2++;
        index++;
    } // end for
    
    // Copy the result back into the original array
    for (index = first; index <= last; index++)
    {
        theArray[index] = tempArray[index];
    } // end merge
    
}
int binarySearch(const int anArray[], int first, int last, int target)
{
    int index;
    if (first > last)
        index = -1;  // target not in original array
    else
    {
        // If target is in anArray,
        // anArray[first] <= target <= anArray[last]
        int mid = first + (last - first) / 2;
        if (target == anArray[mid])
            index = mid; // target found at anArray[mid]
        else if(target < anArray[mid])
        {
            // Point X
            index = binarySearch(anArray, first, mid - 1, target);
        }
        else
        {
            // Point Y
            index = binarySearch(anArray, mid + 1, last, target);
        }
    }// end if
    
    return index;
}

void displayValues(int theArray[], int count)
{
    for(int i = 0; i < count; i++)
    {
        cout << theArray[i] << endl;
    }
}


//OUTPUT
/*
 Enter value #1: 29
 Enter value #2: 9
 Enter value #3: 15
 Enter value #4: 1
 Enter value #5: 31
 Enter value #6: 5
 Enter value #7: 21
 Enter value #8: 12
 1
 5
 9
 12
 15
 21
 29
 31
 Number 5 was found at index 1
 Number 13 not found
 Number 16 not found
 Program ended with exit code: 0
 */
