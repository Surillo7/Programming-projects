//
//  main.cpp
//  Salary
//
//  Created by Carlos Surillo on 11/17/22.
//

#include <iostream>
#include "SalaryClass.hpp"
#include <string>
using namespace::std;

int main()
{
    Salary employee;
    string name;
    double rate, hours;
    

    cout << "Enter the employees first name: ";
    cin >> name;
    employee.setName(name);
    
    cout << "Enter hours worked: ";
    cin>> hours;
    employee.setHours(hours);
    
    cout<< "Enter payrate: $";
    cin>> rate;
    employee.setRate(rate);
    
    cout<< endl;
    
    employee.display();
    
    cout<< endl;
    
    Salary employee2(12, 15, "Maria Cordoba");
    employee2.display(); 
    
    cout<< endl;
    
    Salary cpyemployee3(employee);
    cpyemployee3.display();
    
    return 0;
}
