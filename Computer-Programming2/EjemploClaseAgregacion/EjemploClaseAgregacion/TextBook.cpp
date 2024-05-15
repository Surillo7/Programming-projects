//
//  TextBook.cpp
//  EjemploClaseAgregacion
//
//  Created by Carlos Surillo on 1/12/23.
//

#include "TextBook.hpp"
#include <iostream>
#include <string>
using namespace std;

TextBook::TextBook()
{
    set("", "", "");
}

TextBook::TextBook(string textTitle, string auth, string pub)
{
    set(textTitle, auth, pub);
}

void TextBook::set(string textTitle, string auth, string pub)
{
    title = textTitle;
    author = auth;
    publisher = pub;
}

void TextBook::print() const
{
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "Publisher: " << publisher << endl;
}
