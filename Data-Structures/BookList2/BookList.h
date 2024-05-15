//
//  BookList.h
//  Actividad1.3
//
//  Created by Carlos Surillo on 3/14/23.
//

#ifndef BookList_h
#define BookList_h
#include <iostream>
#include <string>
using namespace::std;

const int MAX_CAPACITY = 5;

template <class T>
class BookList
{
    T books[MAX_CAPACITY];
    int top;
public:
    BookList();
    BookList(T [], int);
    BookList(const T&);
    ~BookList();
    bool isEmpty();
    bool isFull();
    int getCurrentSiz() const;
    bool Add(T);
    int Cointains(T);
    bool Remove(T);
    void display();
    T operator[](int indx);
    //friend istream &operator >>(istream &in, BookList<T>& obj);
    //friend ostream &operator << (ostream &out, BookList<T>& obj);
};



template <class T>
BookList<T>::BookList()
{
    /*T ab;
    for(int i = 0; i < MAX_CAPACITY; i++)
    {
        books[i] = ab[i];
    }*/
    top = 0;
}

template <class T>
BookList<T>::BookList(T array[], int aTop)
{
    for(int i = 0; i < aTop; i++)
    {
        books[i] = array[i];
    }
    top = aTop;
}

template <class T>
BookList<T>::BookList(const T& obj)
{
    for(int i = 0; i < obj.top; i++)
    {
        books[i] = obj.books[i];
    }
    top = obj.top;
}

template<class T>
BookList<T>::~BookList()
{
    //cout << "Destroying BookList object!" << endl;
}

template <class T>
bool BookList<T>::isEmpty()
{
    return top == 0;
}

template<class T>
bool BookList<T>::isFull()
{
    return top == MAX_CAPACITY;
}

template<class T>
int BookList<T>::getCurrentSiz() const
{
    return top;
}

template<class T>
bool BookList<T>::Add(T aBook)
{
    if(isFull())
    {
        cout << "No space for more books!" << endl;
        return false;
    }
    else
    {
        books[top] = aBook;
        top++;
        return true;
    }
}

template<class T>
int BookList<T>::Cointains(T aBook)
{
    int pos = -1;
    
    for(int i = 0; i < top; i++)
    {
        if(aBook == books[i])
            pos = i;
    }
    return pos;
}

template <class T>
bool BookList<T>::Remove(T aBook)
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
        bookpos = Cointains(aBook);
        
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

template<class T>
void BookList<T>::display() 
{
    if(isEmpty())
        cout << "No books stored!" << endl;
    else
    {
        int num = 1;
        for(int i = top - 1 ; i > -1; i--)
        {
            cout << "---Book #" << num << "---" << endl;
            cout << books[i] << endl;
            num++;
        }
    }
}

template<class T>
T BookList<T>::operator[](int indx)
{
    if (indx < 0 || indx > top)
        cerr << "Error, subscript out of range!" << endl;
    return books[indx];
}

/*template< class T>
istream &operator >>(istream &in, BookList<T>& obj)
{
    T tmp;
    cout << "---Enter book info---" << endl;
    in >> tmp;
    obj.Add(tmp);
    return in;
}

template <class T>
ostream &operator << (ostream &out, const BookList<T>& obj)
{
    //out<< obj.display();
    return out;
}*/
#endif /* BookList_h */
