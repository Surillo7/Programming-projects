//
//  main.cpp
//  actividad10-2
//
//  Created by Carlos Surillo on 10/14/22.
//

#include <iostream>
#include <iomanip>
using namespace std;

void calcSales(const int *unitsPtr, const double *pricesPtr, double *salesPtr, int num);
void showOrder(const double *salesPtr, const int *idPtr, int num);
void dualSort(int *idPtr, double *salesPtr, int size);
void showTotals(const double *salesPtr, const int *unitsPtr, int num);
// NUM_PRODS is the number of products produced.
const int NUM_PRODS = 9;

int main()
{
    // Array with product ID numbers
    int id[NUM_PRODS] = {914, 915, 916, 917, 918, 919, 920, 921, 922};
    // Array with number of units sold for each product
    int units[NUM_PRODS] = {842, 416, 127, 514, 437, 269, 97,  492, 212};
    // Array with product prices
    double prices[NUM_PRODS] = {12.95, 14.95, 18.95, 16.95, 21.95,31.95, 14.95, 14.95, 16.95};
    // Array to hold the computed sales amounts double sales[NUM_PRODS];
    double sales[NUM_PRODS];
    
    int *idPtr = nullptr, *unitsPtr = nullptr;
    double *pricesPtr = nullptr, *salesPtr = nullptr;
    
    idPtr = id;
    unitsPtr = units;
    pricesPtr = prices;
    salesPtr = sales;
    
    // Calculate each product's sales.
    calcSales(unitsPtr, pricesPtr, salesPtr, NUM_PRODS);
    // Sort the elements in the sales array in descending
    // order and shuffle the ID numbers in the id array to
    // keep them in parallel.
    dualSort(idPtr, salesPtr, NUM_PRODS);
    // Set the numeric output formatting.
    cout << setprecision(2) << fixed << showpoint;
    // Display the products and sales amounts.
    showOrder(salesPtr, idPtr, NUM_PRODS);
    // Display total units sold and total sales.
    showTotals(salesPtr, unitsPtr, NUM_PRODS);

}

void calcSales(const int *unitsPtr, const double *pricesPtr, double *salesPtr, int num)
{
    for (int index = 0; index < num; index++)
        *(salesPtr + index)= *(unitsPtr + index) * *(pricesPtr + index);
}

void dualSort(int *idPtr, double *salesPtr, int size)
{
    int startScan, maxIndex, tempid;
    double maxValue;
    
    for (startScan = 0; startScan < (size - 1); startScan++)
    {
        maxIndex = startScan;
        maxValue = *(salesPtr + startScan);
        tempid = *(idPtr + startScan);
        
        for(int index = startScan + 1; index < size; index++)
        {
            if(*(salesPtr + index) > maxValue)
            {
                maxValue =*(salesPtr + index);
                tempid = *(idPtr + index);
                maxIndex = index;
            }
        }
        *(salesPtr + maxIndex) = *(salesPtr + startScan);
        *(idPtr + maxIndex) = *(idPtr + startScan);
        *(salesPtr + startScan) = maxValue;
        *(idPtr + startScan) = tempid;
        
    }
}
    
void showOrder(const double *salesPtr, const int *idPtr, int num)
{
    cout << "Product Number\tSales\n";
    cout << "----------------------------------\n";
    for (int index = 0; index < num; index++)
    {
        cout << *(idPtr + index) << "\t\t$";
        cout << setw(8) << *(salesPtr + index) << endl;
    }
    cout << endl;
}
    
void showTotals(const double *salesPtr, const int *unitsPtr, int num)
{
    int totalUnits = 0;
    double totalSales = 0.0;
    for (int index = 0; index < num; index++)
    {
        totalUnits += *(unitsPtr + index);
        totalSales += *(salesPtr + index);
    }
    cout << "Total Units Sold: " << totalUnits << endl;
    cout << "Total Sales: $" << totalSales << endl;
}



//Output:
/*
 Product Number    Sales
 ----------------------------------
 914        $10903.90
 918        $ 9592.15
 917        $ 8712.30
 919        $ 8594.55
 921        $ 7355.40
 915        $ 6219.20
 922        $ 3593.40
 916        $ 2406.65
 920        $ 1450.15

 Total Units Sold: 3406
 Total Sales: $58827.70
 Program ended with exit code: 0
 */
