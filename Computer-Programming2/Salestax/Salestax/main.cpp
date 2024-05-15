//
//  main.cpp
//  Salestax
//
//  Created by Carlos Surillo on 11/17/22.
//

#include <iostream>
#include <iomanip>
#include "SALE.H"
using namespace std;

int main()
{
    const double TAX_RATE = 0.11;
    double cost;
    Sale itemSale;
    
    cout << "Enter the cost of the item: $";
    cin >> cost;
    
    // Create a Sale object for this transaction.
    Sale itemSale2(cost, TAX_RATE);
    
    // Set numeric output formatting.
    cout << fixed << showpoint << setprecision(2);
    
    itemSale2.display();
    cout<<endl;
    itemSale.display();
    cout << endl;
    Sale cpyitemSale(itemSale2);
    
    cpyitemSale.display();
    
    return 0;
}
