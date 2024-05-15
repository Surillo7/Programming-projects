//
//  main.cpp
//  Actividad1.3
//
//  Created by Carlos Surillo on 3/11/23.
//

#include <iostream>
#include "BookList.h"
#include "BookInfo.hpp"
using namespace::std;

void menu(int &choice)
{
    cout << "---Menu---" << endl;
    cout << "1. Add Book" << endl
    << "2. Remove Book" << endl
    << "3. Display Books" << endl
    << "4. Quit"<< endl <<endl;
    
    cout << "Enter choice: ";
    cin >> choice;
}


int main()
{
    
    int choice;
    BookList<BookInfo> myBooks;
    BookInfo tmp1, tmp2;
    do {
        menu(choice);
        switch (choice)
        {
            case 1:
                cin >> tmp1;
                myBooks.Add(tmp1);
                break;
            case 2:
                cout << "---Enter book to remove---" << endl;
                cin>> tmp2;
                myBooks.Remove(tmp2);
                break;
            case 3:
                myBooks.display();
                break;
            case 4:
                cout << "Goodbye!"<< endl;
                break;
            default:
                break;
        }
    } while (choice != 4);
    
    return 0;
}


//Output
/*
 ---Menu---
 1. Add Book
 2. Remove Book
 3. Display Books
 4. Quit

 Enter choice: 3
 No books stored!
 ---Menu---
 1. Add Book
 2. Remove Book
 3. Display Books
 4. Quit

 Enter choice: 2
 ---Enter book to remove---
 Title: qq
 Author: ww
 Publisher: ee
 No books stored!
 ---Menu---
 1. Add Book
 2. Remove Book
 3. Display Books
 4. Quit

 Enter choice: 1
 Title: The prince
 Author: Machiavelli
 Publisher: --
 ---Menu---
 1. Add Book
 2. Remove Book
 3. Display Books
 4. Quit

 Enter choice: 1
 Title: Art of War
 Author: Sun Tzu
 Publisher: --
 ---Menu---
 1. Add Book
 2. Remove Book
 3. Display Books
 4. Quit

 Enter choice: 3
 ---Book #1---
 Title: Art of War
 Author: Sun Tzu
 Publisher: --

 ---Book #2---
 Title: The prince
 Author: Machiavelli
 Publisher: --

 ---Menu---
 1. Add Book
 2. Remove Book
 3. Display Books
 4. Quit

 Enter choice: 2
 ---Enter book to remove---
 Title: Rich dad
 Author: Kiyosaki
 Publisher: --
 Book not stored!
 ---Menu---
 1. Add Book
 2. Remove Book
 3. Display Books
 4. Quit

 Enter choice: 2
 ---Enter book to remove---
 Title: The prince
 Author: Machiavelli
 Publisher: --
 ---Menu---
 1. Add Book
 2. Remove Book
 3. Display Books
 4. Quit

 Enter choice: 3
 ---Book #1---
 Title: Art of War
 Author: Sun Tzu
 Publisher: --

 ---Menu---
 1. Add Book
 2. Remove Book
 3. Display Books
 4. Quit

 Enter choice: 4
 Goodbye!
 Program ended with exit code: 0
 */
