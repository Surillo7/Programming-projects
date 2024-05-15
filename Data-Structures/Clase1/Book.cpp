//
//  Book.cpp
//  Clase1
//
//  Created by Carlos Surillo on 3/7/23.
//

#include "Book.hpp"
#include <string>
#include <iostream>
using namespace::std;


Book::Book()
{
    setAuth(" ");
    setBookNa(" ");
    setEdition(" ");
    setPublisher(" ");
}
Book::Book(string aBn, string aEd, string aAuth, string aPub)
{
    setBookNa(aBn);
    setEdition(aEd);
    setAuth(aAuth);
    setPublisher(aPub);
}
Book::~Book()
{
    
}
Book::Book(const Book & obj)
{
    setBookNa(obj.getBook());
    setEdition(obj.getEdition());
    setAuth(obj.getAuth());
    setPublisher(obj.getPublisher());
}
void Book::setBookNa(string aBn)
{
    bookNa = aBn;
}
void Book::setEdition(string aEd)
{
    bookEd = aEd;
}
void Book::setAuth(string aAuth)
{
    bookAuth = aAuth;
}
void Book::setPublisher(string aPub)
{
    bookPub = aPub;
}
string Book::getBook() const
{
    return bookNa;
}
string Book::getAuth() const
{
    return bookAuth;
}
string Book::getEdition() const
{
    return bookEd;
}
string Book::getPublisher() const
{
    return bookPub;
}
istream &operator >> (istream &in, Book &obj)
{
    string aBn, aEd, aAuth, aPub;
    
    cin.ignore();
    cout << "Book Name: ";
    getline(in, aBn);
    obj.setBookNa(aBn);
    cout << "Book Author: ";
    getline(in, aAuth);
    obj.setAuth(aAuth);
    cout<< "Book Edition: ";
    getline(in, aEd);
    obj.setEdition(aEd);
    cout << "Book Publisher: ";
    getline(in, aPub);
    obj.setPublisher(aPub);
    return in;
}
ostream &operator << (ostream &out, Book &obj)
{
    
    
    cout << "Book Name: " << obj.getBook()<< endl;
    cout << "Book Author: " << obj.getAuth()<< endl;
    cout<< "Book Edition: " << obj.getEdition()<< endl;
    cout << "Book Publisher: " << obj.getPublisher() << endl;
    return out;
}
