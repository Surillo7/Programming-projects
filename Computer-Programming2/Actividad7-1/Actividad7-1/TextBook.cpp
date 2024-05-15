//
//  TextBook.cpp
//  Actividad7-1
//
//  Created by Carlos Surillo on 1/12/23.
//

#include "TextBook.hpp"
#include <iostream>
#include <string>
using namespace std;

TextBook::TextBook()
{
    setTitle(" ");
    setPub(" ");
    setAuth(" ");
}
// Constructor
TextBook::TextBook(string textTitle, string auth, string pub)
{
    setTitle(textTitle);
    setPub(pub);
    setAuth(auth);
}
TextBook::TextBook(const TextBook &obj)
{
    setTitle(obj.getTitle());
    setPub(obj.getPub());
    setAuth(obj.getAuth());
}
TextBook::~TextBook()
{
    
}
// set function
void TextBook::set(string textTitle, string auth, string pub)
{
    title = textTitle;
    author = auth;
    publisher = pub;
}
void TextBook::setTitle(string textTitle)
{
    title = textTitle;
}
void TextBook::setAuth(string auth)
{
    author = auth;
}
void TextBook::setPub(string pub)
{
    publisher = pub;
}
string TextBook::getTitle() const
{
    return title;
}
string TextBook::getAuth() const
{
    return author;
}
string TextBook::getPub() const
{
    return publisher;
}
ostream &operator << (ostream &strm, const TextBook &obj)
{
    strm<< "Title: " << obj.getTitle() << endl;
    
    strm << "Author name: " << obj.getAuth() << endl;
    
    strm << "Publisher: " << obj.getPub()<< endl;

    return strm;
}
istream &operator >> (istream &strm, TextBook &obj)
{
    string ath, pbl, ttl;
    
    cout << "Title: ";
    getline(strm,ttl);
    obj.setTitle(ttl);
    
    cout << "Author name: ";
    getline(strm,ath);
    obj.setAuth(ath);
    
    cout << "Publisher: ";
    getline(strm,pbl);
    obj.setPub(pbl);
    return strm;
}
