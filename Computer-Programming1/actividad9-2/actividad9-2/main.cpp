//
//  main.cpp
//  actividad9-2
//
//  Created by Carlos Surillo on 10/14/22.
//

#include <iostream>
#include <iomanip>
using namespace std;

void getSpools(double *spools);
void getSpoolStock(double *stock);
void getSpecialCharges(double *specialcharge);
void shipSpools(double *spools,double *stock, double *readyship);
void backorder(double *spools, double *stock, double *backo);
void subtotal(double *subtotall, double *readyship);
void chargesapplied(double *specialcharge, double *readyship, double *charg);
void total(double *charg, double *subtotal, double *alltot);
void display(double *readyship, double *backo, double *subtotall, double *charg, double *alltot);





int main()
{
    double spools, stock, specialcharge, readyship, backo, subtotall, charg, alltot;
    double *spoolsPtr = nullptr, *stockPtr = nullptr, *specialchargePtr = nullptr, *readyshipPtr = nullptr, *backoPtr = nullptr, *subtotallPtr = nullptr, *chargPtr = nullptr, *alltotPtr = nullptr;
    
    spoolsPtr = &spools;
    stockPtr = &stock;
    specialchargePtr = &specialcharge;
    readyshipPtr = &readyship;
    backoPtr = &backo;
    subtotallPtr = &subtotall;
    chargPtr = &charg;
    alltotPtr = &alltot;
    
    getSpools(spoolsPtr);
    getSpoolStock(stockPtr);
    getSpecialCharges(specialchargePtr);
    shipSpools(spoolsPtr, stockPtr, readyshipPtr);
    backorder(spoolsPtr, stockPtr, backoPtr);
    subtotal(subtotallPtr, readyshipPtr);
    chargesapplied(specialchargePtr, readyshipPtr, chargPtr);
    total(chargPtr, subtotallPtr, alltotPtr);
    display(readyshipPtr, backoPtr, subtotallPtr, chargPtr, alltotPtr);
    
}


void getSpools(double *spools)
{
    cout << "Number of spools ordered: ";
    cin >> *spools;
    
    while(*spools < 1)
    {
        cout << "Error, enter spools ordered: ";
        cin >> *spools;
    }
}

void getSpoolStock(double *stock)
{
    cout << "Number of stock availabe: ";
    cin >> *stock;
    
    while(*stock < 0)
    {
        cout << "Error, enter stock available: ";
        cin >> *stock;
    }
}

void getSpecialCharges(double *specialcharge)
{
    char ifcharges;
    cout << "Are there any charges on shipping and handling?(y/n)"<< endl;
    cin >> ifcharges;
    
    if(ifcharges == 'y')
    {
       cout << "Enter shipping and handling charges(per spool): $";
        cin >> *specialcharge;
        
        while(*specialcharge < 0)
        {
            cout << "Error, enter charges on order: ";
            cin >> *specialcharge;
        }
    } else
    {
        *specialcharge = 0;
    }
}

void shipSpools(double *spools,double *stock, double *readyship )
{
    if (*spools < *stock)
    {
        *readyship = *spools;
    } else
    {
        *readyship = *stock;
    }
}


void backorder(double *spools, double *stock, double *backo)
{
    if (*spools > *stock)
    {
        *backo = *spools - *stock;
    } else
    {
        *backo = 0;
    }
}

void subtotal(double *subtotall, double *readyship)
{
    *subtotall = *readyship * 100;
}

void chargesapplied(double *specialcharge, double *readyship, double *charg)
{
    *charg = *readyship * *specialcharge;
}

void total(double *charg, double *subtotall, double *alltot)
{
    *alltot = *charg + *subtotall;
}

void display(double *readyship, double *backo, double *subtotall, double *charg, double *alltot )
{
    cout << "Spools ready to ship: " << *readyship << endl;
    cout << "Spools on backorder: " << *backo << endl;
    cout << fixed << setprecision(2);
    cout << "Subtotal: $" << *subtotall<< endl;
    cout << "Shipping and handling: $" << *charg << endl;
    cout << "Total: $" << *alltot << endl;
}


// Output:
/*
 Number of spools ordered: 125
 Number of stock availabe: 65
 Are there any charges on shipping and handling?(y/n)
 y
 Enter shipping and handling charges(per spool): $15
 Spools ready to ship: 65
 Spools on backorder: 60
 Subtotal: $6500.00
 Shipping and handling: $975.00
 Total: $7475.00
 */
