//
//  main.cpp
//  SimpleVectorTemplate
//
//  Created by Carlos Surillo on 1/31/23.
//

// This program demonstrates the SimpleVector template.
#include <iostream>
#include "SimpleVector.h"
#include "Car.hpp"
#include "SearchableVector.h"
using namespace std;

/*int main()
{
   
    //int count;
    //Car tmpCar;
    int tmpInt, value, result;
    int n;
    
    cout << "Entre la cantidad de elementos: ";
    cin >> n;
    
    SearchableVector<int> intTable(n);
    for(int count = 0; count < n; count++)
    {
        cout << "Enter: ";
        cin >> tmpInt;
        intTable.setValue(tmpInt, count);
    }
    
    
    cout << "Entre el valor que va buscar adentro del arreglo: ";
    cin>> value;
    result = intTable.findItem(value);
    
    if(result == -1)
        cout << value << " was not found in intTable " << endl;
    else
        cout << value<< " was found at subscript " << result << endl;
    
    
    cout << "Contenido del arreglo: " << endl;
    for(int count = 0; count < n; count++)
    {
        cout << intTable.getElementAt(count) << endl;
        //cout << tmpCar;
    }
    
    return 0;
}
*/

int main()
{
    Car tmpcar;
    string value;
    int result;
    int n;
    
    cout << "Entre la cantidad de elementos: ";
    cin >> n;
    
    SearchableVector<Car> CarTable(n);
    for(int count = 0; count < n; count++)
    {
        cout << "Car [" << count + 1 << "]" << endl;
        cin >> tmpcar;
        CarTable.setValue(tmpcar, count);
    }
    
    
    cout << "Entre el modelo de carro que va buscar adentro del arreglo: ";
    cin>> value;
    tmpcar.setMake(value);
    result = CarTable.findItem(tmpcar);
    
    if(result == -1)
        cout << value << " was not found in CarTable " << endl;
    else
        cout << value<< " was found at subscript " << result << endl;
    
    
    cout << "Contenido del arreglo: " << endl;
    for(int count = 0; count < n; count++)
    {
        cout << CarTable.getElementAt(count) << endl;
        //cout << tmpCar;
    }
    
    return 0;
    
}
