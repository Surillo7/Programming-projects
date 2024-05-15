//
//  Book.hpp
//  Clase1
//
//  Created by Carlos Surillo on 3/7/23.
//  #138098
//  CECS 3212-20
//

#ifndef Book_hpp
#define Book_hpp
#include <string>
#include <iostream>
using namespace::std;

class Book
{
private:
    string bookNa;
    string bookEd;
    string bookAuth;
    string bookPub;
public:
    Book();
    Book(string, string, string, string);
    ~Book();
    Book(const Book & obj);
    void setBookNa(string);
    void setEdition(string);
    void setAuth(string);
    void setPublisher(string);
    string getBook() const;
    string getAuth() const;
    string getEdition() const;
    string getPublisher() const;
    friend istream &operator >> (istream &, Book &obj);
    friend ostream &operator << (ostream &, Book &obj);
};

#endif /* Book_hpp */
