//
//  main.cpp
//  ArrayBag
//
//  Created by Carlos Surillo on 3/14/23.
//

#include<iostream>
using namespace::std;
#include"ArrayBag.h"
#include "Car.hpp"
int main()
{
    /*ArrayBag<int> myArrayInteger;
 
     myArrayInteger.add(5);
     myArrayInteger.add(3);
     myArrayInteger.add(5);
     myArrayInteger.add(10);
     myArrayInteger.display();
     myArrayInteger.remove(5);
     myArrayInteger.display();
     myArrayInteger.add(3);
     myArrayInteger.add(3);
     cout << "El numero 3 esta " <<myArrayInteger.getFrequencyOf(3) << " veces repetido en el arreglo\n";
     if (myArrayInteger.contains(7))
     {
        cout <<"El numero 7 esta dentro del arreglo\n";
     }
     else
     {
        cout<<"El numero 7 no esta dentro del arreglo\n";
     }
     //system("pause");*/
    
    ArrayBag<Car> bagCars;
    Car carrito;
    int i;
    int n;
    cout << "Entre la cantidad de carritos:";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> carrito;
        bagCars.add(carrito);
    }
    
    cout << "El contenido del bag: \n";
    
    for (i = 0; i < n; i++)
    {
        cout << bagCars.getElement(i) << endl;
    }
    
 return 0;
}//end main
