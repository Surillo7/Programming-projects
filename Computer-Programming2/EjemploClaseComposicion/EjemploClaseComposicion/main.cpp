//
//  main.cpp
//  EjemploClaseComposicion
//
//  Created by Carlos Surillo on 1/12/23.
//

#include<iostream>
#include<iomanip>
using namespace::std;
#include "Employee.hpp"
#include "PersonInfo.hpp"
#include "Date.hpp"

int main()
{
    Employee employee1;

    cin >> employee1;
    cout << employee1;

    Employee employee2("Susan", "Meyers",47899,"Accounting", "Vice President",11,18,1950);
    cout << employee2;

    PersonInfo personInfo1("Mark", "Jones");
    Date date1(11, 18, 1958);
    Employee employee3(personInfo1, 39119, "IT", "Programmer", date1);
    cout << employee3;

    return 0;
}//end main
