//
//  BookList.cpp
//  Actividad1.2
//
//  Created by Carlos Surillo on 3/10/23.
//

#include "BookList.hpp"
#include <iostream>
#include <string>
using namespace::std;


BookList::BookList()
{
    for(int i = 0; i < MAX_CAPACITY; i++)
    {
        books[i] = " ";
    }
    top = 0;
}
BookList::BookList(string array[], int cnt)
{
    top = cnt;
    for(int i = 0; i < cnt; i++)
    {
        books[i] = array[i];
    }
}
BookList::BookList(const BookList& obj)
{
    for(int i = 0; i < obj.top; i++)
    {
        books[i] = obj.books[i];
    }
    top = obj.top;
}
BookList::~BookList()
{
    cout << "Destroying BookList object!" << endl;
}
bool BookList::isEmpty()
{
    return top == 0;
}
bool BookList::isFull()
{
    return top == MAX_CAPACITY;
}
int BookList::getCurrentSiz() const
{
    return top;
}
bool BookList::Add(string bookName)
{
    if(isFull())
    {
        cout << "No space for more books!" << endl;
        return false;
    }
    else
    {
        books[top] = bookName;
        top++;
        return true;
    }
}
int BookList::Cointains(string bookName)
{
    int pos = -1;
    
    for(int i = 0; i < top; i++)
    {
        if(bookName == books[i])
            pos = i;
    }
    return pos;
}
bool BookList::Remove(string bookName)
{
    BookList temp;
    int bookpos;
    int max = top;
    if(isEmpty())
    {
        cout << "No books stored!" << endl;
        return false;
    }
    else
    {
        bookpos = Cointains(bookName);
        
        if(bookpos == -1)
        {
            cout << "Book not stored!"<< endl;
            return false;
        }
        else
        {
            for (int i = bookpos + 1; i < max; i++)
            {
                temp.Add(books[i]);
                top--;
            }
            
            top--;
            
            for(int i = 0; i < temp.getCurrentSiz() ; i++)
            {
                Add(temp.books[i]);
            }
        }
        
        return true;
    }
}
string BookList::operator[](int indx)
{
    if (indx < 0 || indx > top)
        cerr << "Error, subscript out of range!" << endl;
    return books[indx];
}

void BookList::display() const
{
    for(int i = top - 1 ; i > -1; i--)
    {
        cout << books[i] << endl;
    }
}


istream &operator >>(istream &in, BookList& obj)
{
    string title;
    
    cout << "Enter book title: ";
    cin.ignore();
    getline(in, title);
    
    obj.Add(title);
    
    return in;
}
ostream &operator << (ostream &out, BookList& obj)
{
    obj.display();
    return out;
}
