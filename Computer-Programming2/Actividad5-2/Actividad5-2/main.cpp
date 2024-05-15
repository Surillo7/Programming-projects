//
//  main.cpp
//  Actividad5-2
//
//  Created by Carlos Surillo on 1/11/23.
//

#include <iostream>
#include "Complex.hpp"
using namespace::std;

void Menu(int &);


int main()
{
    Complex a1, b1, result;
    int choice;
    
    do
    {
        Menu(choice);
        
        switch (choice)
        {
            case 1:
                cin>> a1;
                cin>> b1;
                
                if(a1 == b1)
                {
                    cout << "Son iguales!" << endl;
                } else
                {
                    cout << "No son iguales!" << endl;
                }
                
                break;
            case 2:
                cin>> a1;
                cin>> b1;
                
                result = a1 + b1;
                cout << result;
                break;
            case 3:
                cin>> a1;
                cin>> b1;
                
                result = a1 - b1;
                cout << result;
                break;
            case 4:
                cin>> a1;
                cin>> b1;
                
                result = a1 * b1;
                cout << result;
                break;
            case 5:
                cin>> a1;
                
                result = a1.conjugate(a1);
                cout << result;
                break;
            case 6:
                cin>> a1;
                cin>> b1;
                
                result = a1/b1;
                cout << result;
                break;
            case 7:
                cout << "Adios!" << endl<< endl;
                break;
        }
    } while (choice != 7);
    
    return 0;
}


void Menu(int &choice)
{
    cout << "OPCIONES:" << endl;
    cout << "1. Iguadad" << endl
    << "2. Suma" << endl
    << "3. Diferencia" << endl
    << "4. Producto" << endl
    << "5. Conjugado" << endl
    << "6. División" << endl
    << "7. Quit" << endl<< endl;
    
    cout << "Entre Opcion: (1-7): ";
    cin>> choice;
}
