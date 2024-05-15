//
//  main.cpp
//  Clase1
//
//  Created by Carlos Surillo on 3/7/23.
//


#include "Book.hpp"
#include "SimpleVector.h"
#include <string>
#include <iostream>

using namespace::std;

int main()
{
    int n;
    
    cout << "Numero de clases matriculadas: ";
    cin >> n;
    
    SimpleVector<Book> myBooks(n);
    
    cout << "Enter Data" << endl << endl;
    
    for (int i = 0; i < n; i++)
    {
        cout << "---Book data #" << i + 1 << "---" << endl;
        cin >> myBooks[i];
    }
    
    cout << endl << "Books registered" << endl<< endl;
    
    for (int i = 0; i < n; i++)
    {
        cout << "---Book data #" << i + 1 << "---" << endl;
        cout << myBooks[i];
    }

    return 0;
}

//OUTPUT
/*
 Numero de clases matriculadas: 4
 Enter Data

 ---Book data #1---
 Book Name: Data Abstraction and Problem Solving
 Book Author: Tommy Henry
 Book Edition: 7th
 Book Publisher: Walls and Mirrors
 
 ---Book data #2---

 Book Name: Entrepeneurship
 Book Author: Donald F. Kuratko
 Book Edition: 11th
 Book Publisher: Cengage
 
 ---Book data #3---

 Book Name: --
 Book Author: --
 Book Edition: --
 Book Publisher: --
 
 ---Book data #4---

 Book Name: Surgimiento y Desarrollo... Cienas Sociales
 Book Author: Lina Torres
 Book Edition: 1st
 Book Publisher: International Thompsons
 
 Books registered

 ---Book data #1---
 Book Name: Data Abstraction and Problem Solving
 Book Author: Tommy Henry
 Book Edition: 7th
 Book Publisher: Walls and Mirrors
 ---Book data #2---
 Book Name: Entrepeneurship
 Book Author: Donald F. Kuratko
 Book Edition: 11th
 Book Publisher: Cengage
 ---Book data #3---
 Book Name: --
 Book Author: --
 Book Edition: --
 Book Publisher: --
 ---Book data #4---
 Book Name: Surgimiento y Desarrollo... Cienas Sociales
 Book Author: Lina Torres
 Book Edition: 1st
 Book Publisher: International Thompsons
 Program ended with exit code: 0
 */
