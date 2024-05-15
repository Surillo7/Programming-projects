//
//  main.cpp
//  actividad9-1
//
//  Created by Carlos Surillo on 10/12/22.
//

#include <iostream>
#include <iomanip>
using namespace std;

void getLength(double *lengthPtr);
void getWidth(double *widthPtr);
void getHeight(double *heightPtr);
void getVolume(double *lengthPtr, double *widthPtr, double *heightPtr, double *volumePtr);
void getCost(double *volumePtr, double *costPtr);
void getCharge(double *volumePtr, double *chargePtr);
void getProfit(double *costPtr, double *chargePtr, double *profitPtr);
void display(double *volumePtr, double *costPtr, double *chargePtr, double *profitPtr);



int main()
{
    double length, width, height;
    double *lengthPtr = nullptr, *widthPtr = nullptr, *heightPtr = nullptr;
    lengthPtr = &length;
    widthPtr = &width;
    heightPtr = &height;
    double cost, charge, profit, volume;
    double *costPtr = nullptr, *chargePtr = nullptr, *profitPtr = nullptr,
    *volumePtr = nullptr;
    costPtr = &cost;
    chargePtr = &charge;
    profitPtr = &profit;
    volumePtr = &volume;
    
    cout << "Enter the dimensions of the crate.";
    cout << endl;
    
    getLength(lengthPtr);
    getWidth(widthPtr);
    getHeight(heightPtr);
    getVolume(lengthPtr, widthPtr, heightPtr, volumePtr);
    getCost(volumePtr, costPtr);
    getCharge(volumePtr, chargePtr);
    getProfit(costPtr, chargePtr, profitPtr);
    cout << endl;
    display(volumePtr, costPtr, chargePtr, profitPtr);
    
    return 0;
    
}


void getLength(double *lengthPtr)
{
    cout << "Length(ft): ";
    cin >> *lengthPtr;
}

void getWidth(double *widthPtr)
{
    cout << "Width(ft): ";
    cin >> *widthPtr;
}

void getHeight(double *heightPtr)
{
    cout << "Height(ft): ";
    cin >> *heightPtr;
}

void getVolume(double *lengthPtr, double *widthPtr, double *heightPtr, double *volumePtr)
{
    *volumePtr = *lengthPtr * *widthPtr * *heightPtr;
}

void getCost(double *volumePtr, double *costPtr)
{
    const double COST_CBFT = 0.23;
    *costPtr = *volumePtr * COST_CBFT;
}

void getCharge(double *volumePtr, double *chargePtr)
{
    const double CHARGE_CBFT = 0.5;
    *chargePtr = *volumePtr * CHARGE_CBFT;
}

void getProfit(double *costPtr, double *chargePtr, double *profitPtr)
{
    *profitPtr = *chargePtr - *costPtr;
}

void display(double *volumePtr, double *costPtr, double *chargePtr, double *profitPtr)
{
    cout << "The volume of the crate: " << *volumePtr << " cubic feet" << endl;
    cout << fixed << setprecision(2);
    cout << "Cost to build: $" << *costPtr << endl;
    cout << "Charge to customer: $" << *chargePtr << endl;
    cout << "Profit: $" << *profitPtr << endl;
}



//Output:
/*
 Enter the dimensions of the crate.
 Length(ft): 10
 Width(ft): 12
 Height(ft): 20

 The volume of the crate: 2400 cubic feet
 Cost to build: $552.00
 Charge to customer: $1200.00
 Profit: $648.00
 Program ended with exit code: 0
 */
