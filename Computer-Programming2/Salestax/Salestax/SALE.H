//
//  Salestax.h
//  Salestax
//
//  Created by Carlos Surillo on 11/17/22.
//

#ifndef SALE_H
#define SALE_H
using namespace::std;

class Sale
{
private:
    double itemCost;
    double taxRate;
public:
    Sale(double cost, double rate)
    {
        itemCost = cost;
        taxRate = rate;
    }
    
    Sale()
    {
        cout<< "Invocando constructor"<<endl;
        itemCost = 1.0;
        taxRate = .05;
    }

    ~Sale()
    {
        cout << "Invocando destructor" << endl;
    }
    
    Sale(const Sale &obj)
    {
        setSale(obj.getItemCost());
        setTax(obj.getTaxRate());
    }
    
    void setSale(double ic)
    {
        itemCost = ic;
    }
    
    void setTax(double tr)
    {
        taxRate = tr;
    }
    
    double getItemCost() const
    {
        return itemCost;
    }
    
    double getTaxRate() const
    {
        return taxRate;
    }
    
    double getTax() const
    {
        return (itemCost * taxRate);
    }
    
    double getTotal() const
    {
        return (itemCost + getTax());
    }
    
    void display() const
    {
        //Display the sales tax and total
        cout<< "The total amount of sales tax is $" << getTax()<< endl;
        cout << "the total of the sale is $" << getTotal()<< endl;
    }
};
#endif
