//
//  main.cpp
//  DynamicsEx
//
//  Created by Carlos Surillo on 12/1/22.
//

#include<iostream>
using namespace::std;
/*
int * getNumber();
int *getSum(int *number1, int *number2);
void display(int *number1, int *number2, int *sum);

int main()
{
 
    int *number1 = nullptr, *number2 = nullptr, *sum = nullptr;
 
    number1 = new int;   //crea la memoria dinamica
    number2 = new int;
    sum = new int;
    number1 = getNumber();
    number2 = getNumber();
    sum = getSum(number1, number2);
    display(number1, number2, sum);
    delete number1;   //libera la memoria
    delete number2;
    delete sum;
    number1 = nullptr;
    number2 = nullptr;
    sum = nullptr;
    return 0;
}//end main
 
int * getNumber()
{
   int *number;
    number = new int;
    cout << "Entre dos numeros enteros:";
    cin >> *number;
    return number;
}
 
int *getSum(int *number1, int *number2)
{
    int *sum;
     sum = new int;
     *sum = *number1 + *number2;
     return sum;
}
 
void display(int *number1, int *number2, int *sum)
{
   cout << *number1 << "+" << *number2 << "=" << *sum << endl;
}

*/


 /// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++=

void getValues(int *myaArray, int n);
void displayValues(int *myArray, int n);
int * createArray(int n);

int main()
{
    int *myArray = nullptr;
    int n;
    cout << "Entre la cantidad de datos:";
    cin >> n;
    myArray = createArray(n);
    getValues(myArray, n);
    displayValues(myArray, n);
    delete [] myArray;
    myArray = nullptr;
    return 0;
}//end main
 
//Pide los valores enteros al usuario
void getValues(int *myArray, int n)
{
    //Lee los datos del usuario
    for (int index = 0; index < n; index++)
    {
        cout << "Entre el valor #" << index + 1 << ":";
        cin >>*( myArray+index);
    }//end for
}
//Imprime el contenido del arreglo
void displayValues(int *myArray, int n)
{
    //Imprime el contenido del arreglo
    for (int index = 0; index < n; index++)
    {
        cout << *(myArray + index) << ",";
    }//end for
    cout << endl;
}
//Funcion crea un arreglo dinamico de numeros enteros
int * createArray(int n)
{
    int *myArray = nullptr;
    myArray = new int[n];
    return myArray;
}
