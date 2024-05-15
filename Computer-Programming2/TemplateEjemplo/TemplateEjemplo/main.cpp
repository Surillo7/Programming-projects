//
//  main.cpp
//  TemplateEjemplo
//
//  Created by Carlos Surillo on 1/31/23.
//

#include <iostream>
using namespace::std;

template <class T>
T square(T number)
{
    return number * number;
}

template <class T>
void display(T myarray[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << myarray[i] << endl;
    }
}


int main()
{
    int myarray1[] = {10, 20, 30, 40};
    float myarray2[] = {10.1, 20.2, 30.3, 40.4};
    string myArray3[] = {"Hola", "----", "mundo"};

    display(myarray1, 4);
    display(myarray2, 4);
    display(myArray3, 3);
    
    
    int num1;
    cout << "Entre un numero: ";
    cin >> num1;
    cout << "El numero al cuadrado es: " << square(num1) << endl;
    
    double num2;
    cout << "Entre un numero: ";
    cin >> num2;
    cout << "El numero al cuadrado es: " << square(num2) << endl;
    
    return 0;
}
