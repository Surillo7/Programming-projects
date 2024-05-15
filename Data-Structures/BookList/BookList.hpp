//
//  BookList.hpp
//  Actividad1.2
//
//  Created by Carlos Surillo on 3/10/23.
//

#ifndef BookList_hpp
#define BookList_hpp
#include <iostream>
#include <string>
using namespace::std;

const int MAX_CAPACITY = 5;

class BookList
{
private:
    string books[MAX_CAPACITY];
    int top;
public:
    BookList();
    BookList(string [], int);
    BookList(const BookList&);
    ~BookList();
    bool isEmpty();
    bool isFull();
    int getCurrentSiz() const;
    bool Add(string);
    int Cointains(string);
    bool Remove(string);
    void display() const;
    string operator[](int indx);
    friend istream &operator >>(istream &in, BookList& obj);
    friend ostream &operator << (ostream &out, BookList& obj);
};

#endif /* BookList_hpp */
