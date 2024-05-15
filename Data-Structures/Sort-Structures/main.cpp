//
//  main.cpp
//  Actividad5-1
//
//  Created by Carlos Surillo on 4/4/23.
//

#include <iostream>
using namespace::std;


void bubbleSort(int theArray[], int n);
void display(int array[], int size);
int findIndexofLargest(const int theArray[], int size);
void selectionSort(int theArray[], int n);
void insertionSort(int theArray[], int n);
void mergeSort(int theArray[], int first, int last);
void merge(int theArray[], int first, int mid, int last);
void quickSort(int theArray[], int first, int last);



const int MAX_SIZE = 6;

int main()
{
    
    int array[] = {25,30,20,80,40,60};
    selectionSort(array, 6);
    cout << "---Selection Sort---"<< endl;
    display(array, 6);
    
    int array2[] = {25,30,20,80,40,60};
    bubbleSort(array2, 6);
    cout << "---Bubble Sort---"<< endl;
    display(array2, 6);
    
    int array3[] = {25,30,20,80,40,60};
    insertionSort(array3, 6);
    cout << "---Insertion Sort---"<< endl;
    display(array3, 6);
    
    int array4[] = {25,30,20,80,40,60};
    mergeSort(array4, 0, MAX_SIZE - 1);
    cout << "---Merge Sort---"<< endl;
    display(array4, 6);

    int array5[] = {25,30,20,80,40,60};
    
    
    
    int array6[] = {25,30,20,80,40,60};

    return 0;
}


void bubbleSort(int theArray[], int n)
{
    bool sorted = false; // False when swaps occur
    int pass = 1;
    while (!sorted && (pass < n))
    {
        // At this point, theArray[n+1-pass..n-1] is sorted
        // and all of its entries are > the entries in theArray[0..n-pass]
        sorted = true; // Assume sorted
        for (int index = 0; index < n - pass; index++)
        {
            // At this point, all entries in theArray[0..index-1] // are <= theArray[index]
            int nextIndex = index + 1;
            if (theArray[index] > theArray[nextIndex])
            {
                // Exchange entries
                swap(theArray[index], theArray[nextIndex]);
                sorted = false; // Signal exchange
            }
        }
        pass++;
    }
}

void display(int array[], int size)
{
    for(int i = 0; i< size; i++)
        cout << array[i] << " ";
    cout << endl;
}

int findIndexofLargest(const int theArray[], int size)
{
    int indexSoFar = 0; // Index of largest entry found so far
    for (int currentIndex = 1; currentIndex < size; currentIndex++)
    {
        // At this point, theArray[indexSoFar] >= all entries in
        // theArray[0..currentIndex - 1]
        if (theArray[currentIndex] > theArray[indexSoFar])
            indexSoFar = currentIndex;
    } //end for
    return indexSoFar;
}


void selectionSort(int theArray[], int n)
{
    // last = index of the last item in the subarray of items yet // to be sorted;
    // largest = index of the largest item found
    for (int last = n - 1; last >= 1; last--)
    {
        // At this point, theArray[last+1..n-1] is sorted, and its // entries are greater than those in theArray[0..last].
        // Select the largest entry in theArray[0..last]
        int largest = findIndexofLargest(theArray, last+1);
        // Swap the largest entry, theArray[largest], with // theArray[last]
        swap(theArray[largest], theArray[last]);
    } // end for
} // end selectionSort

void insertionSort(int theArray[], int n)
{
    //unsorted = first index of the unsorted region,
    //loc = index of insertion in the sorted region,
    //nextItem = next item in the unsorted region.
    //Initially, sorted region is theArray[0],unsorted region is theArray[1..n-1].
    //In general, sorted region is theArray[0..unsorted-1], unsorted region theArray[unsorted..n-1]
    for (int unsorted = 1; unsorted < n; unsorted++)
    {
        // At this point, theArray[0..unsorted-1] is sorted.
        // Find the right position (loc) in theArray[0..unsorted] // for theArray[unsorted], which is the first entry in the // unsorted region; shift, if necessary, to make room ItemType
        int nextItem = theArray[unsorted];
        int loc = unsorted;
        while ((loc > 0) && (theArray[loc - 1] > nextItem))
        {
            // Shift theArray[loc - 1] to the right
            theArray[loc] = theArray[loc - 1];
            loc--;
        } // end while
        theArray[loc] = nextItem; // Insert nextItem into sorted region
    } // end for
} // end insertionSort


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

void quickSort(int theArray[], int first, int last)
{
    if (last - first + 1 < MIN_SIZE)
    {
        insertionSort(theArray, first, last);
    }
    else
    {
        // Create the partition: S1 | Pivot | S2
        int pivotIndex = partition(theArray, first, last);
        // Sort subarrays S1 and S2
        quickSort(theArray, first, pivotIndex - 1);
        quickSort(theArray, pivotIndex + 1, last);
    } // end if
} // end quickSort
