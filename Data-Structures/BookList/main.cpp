//
//  main.cpp
//  Actividad1.2
//
//  Created by Carlos Surillo on 3/10/23.
//

#include <iostream>
#include "BookList.hpp"
#include <string>
using namespace::std;

void menu(int &choice)
{
    cout << "---Menu---" << endl;
    cout << "1. Add Book" << endl
    << "2. Remove Book" << endl
    << "3. Display Books" << endl
    << "4. Quit"<< endl <<endl;
    
    cout << "Choose: ";
    cin >> choice;
}

int main()
{
    int choice;
    BookList myBooks;
    string temp;
    
    do {
        menu(choice);
        switch (choice)
        {
            case 1:
                cin >> myBooks;
                break;
            case 2:
                cout << "Enter book to remove: ";
                cin.ignore();
                getline(cin,temp);
                myBooks.Remove(temp);
                break;
            case 3:
                cout<< myBooks;
                break;
            case 4:
                cout << "GoodBye!!!"<< endl;
                break;
            default:
                break;
        }
    } while (choice != 4);
    return 0;
}


//OUTPUT
/*
 ---Menu---
 1. Add Book
 2. Remove Book
 3. Display Books
 4. Quit

 Choose: 2
 Enter book to remove: Cartman
 No books stored!
 Destroying BookList object!
 ---Menu---
 1. Add Book
 2. Remove Book
 3. Display Books
 4. Quit

 Choose: 1
 Enter book title: Meditations
 ---Menu---
 1. Add Book
 2. Remove Book
 3. Display Books
 4. Quit

 Choose: 1
 Enter book title: Art of War
 ---Menu---
 1. Add Book
 2. Remove Book
 3. Display Books
 4. Quit

 Choose: 1
 Enter book title: The Prince
 ---Menu---
 1. Add Book
 2. Remove Book
 3. Display Books
 4. Quit

 Choose: 1
 Enter book title: Crime and Punishment
 ---Menu---
 1. Add Book
 2. Remove Book
 3. Display Books
 4. Quit

 Choose: 1
 Enter book title: Laws of HN
 ---Menu---
 1. Add Book
 2. Remove Book
 3. Display Books
 4. Quit

 Choose: 1
 Enter book title: Harry Potter
 No space for more books!
 ---Menu---
 1. Add Book
 2. Remove Book
 3. Display Books
 4. Quit

 Choose: 3
 Laws of HN
 Crime and Punishment
 The Prince
 Art of War
 Meditations
 ---Menu---
 1. Add Book
 2. Remove Book
 3. Display Books
 4. Quit

 Choose: 2
 Enter book to remove: Art of War
 Destroying BookList object!
 ---Menu---
 1. Add Book
 2. Remove Book
 3. Display Books
 4. Quit

 Choose: 3
 Laws of HN
 Crime and Punishment
 The Prince
 Meditations
 ---Menu---
 1. Add Book
 2. Remove Book
 3. Display Books
 4. Quit

 Choose: 4
 GoodBye!!!
 Destroying BookList object!
 Program ended with exit code: 0
 */
