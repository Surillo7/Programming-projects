//
//  main.cpp
//  Actividad2-1
//
//  Created by Carlos Surillo on 12/1/22.
//

#include <iostream>
using namespace::std;

int * getAmountShare();
double * getPricePerShare();
double * getComissionPercent();
void getBrokerComission(int * amountShare, double *pricePerShare, double* percentComission, double *brokerComis);

int main()
{
    int *amountOfShare = nullptr;
    double *percentComission = nullptr;
    double *priceperShare = nullptr;
    double *brokerComission = nullptr;
   
    
    amountOfShare = new int;
    percentComission = new double;
    priceperShare = new double;
    brokerComission = new double;
    
    
    amountOfShare = getAmountShare();
    priceperShare = getPricePerShare();
    percentComission = getComissionPercent();
    getBrokerComission(amountOfShare, priceperShare, percentComission, brokerComission);
    
    
    
    
    return 0;
}

int *getAmountShare()
{
    int *amountShare;
    amountShare = new int;
    cout<< "Enter number of shares Joe bought: ";
    cin>> *amountShare;
    return amountShare;
}

double *getPricePerShare()
{
    double *pricePerShare;
    pricePerShare = new double;
    cout << "Enter price of shares: ";
    cin>> *pricePerShare;
    return pricePerShare;
}

double *getComissionPercent()
{
    double *comission;
    comission = new double;
    cout << "Enter percent paid to broker: ";
    cin>> *comission;
    return comission;
}

void getBrokerComission(int * amountShare, double *pricePerShare, double* percentComission, double *brokerComis)
{
    double *subtotal = nullptr;
    subtotal = new double;
    
    *subtotal = ((*amountShare) * (*pricePerShare));
    *brokerComis = *subtotal * (*percentComission/ 100.0);
}
