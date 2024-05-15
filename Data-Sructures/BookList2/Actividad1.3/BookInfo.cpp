//
//  BookInfo.cpp
//  Actividad1.3
//
//  Created by Carlos Surillo on 3/11/23.
//

#include "BookInfo.hpp"
#include <iostream>
#include <string>
using namespace::std;

BookInfo::BookInfo()
{
    setTitle(" ");
    setAuthor(" ");
    setPublisher(" ");
}
BookInfo::BookInfo(string aT, string aA, string aP)
{
    setTitle(aT);
    setAuthor(aA);
    setPublisher(aP);
}
BookInfo::BookInfo(const BookInfo& obj)
{
    setTitle(obj.getTitle());
    setAuthor(obj.getAuthor());
    setPublisher(obj.getPublisher());
}
BookInfo::~BookInfo()
{
    //cout << "Destroying BookInfo object!" << endl;
}
void BookInfo::setTitle(string aT)
{
    title = aT;
}
void BookInfo::setAuthor(string aA)
{
    author = aA;
}
void BookInfo::setPublisher(string aP)
{
    publisher = aP;
}
void BookInfo::setBookInfo(string aT, string aA, string aP)
{
    setTitle(aT);
    setAuthor(aA);
    setPublisher(aP);
}
string BookInfo::getTitle() const
{
    return title;
}
string BookInfo::getAuthor() const
{
    return author;
}
string BookInfo::getPublisher() const
{
    return publisher;
}

bool BookInfo::operator == (const BookInfo &obj) const
{
    if(getTitle()== obj.getTitle() && getAuthor() == obj.getAuthor() && getPublisher() == obj.getPublisher())
        return true;
    else
        return false;
}

istream &operator >>(istream &in, BookInfo& obj)
{
    string aT, aA, aP;
    cin.ignore();
    cout << "Title: ";
    getline(in, aT);
    obj.setTitle(aT);
    cout << "Author: ";
    getline(in, aA);
    obj.setAuthor(aA);
    cout << "Publisher: ";
    getline(in, aP);
    obj.setPublisher(aP);
    
    return in;
}
ostream &operator << (ostream &out, BookInfo& obj)
{
    out << "Title: " << obj.getTitle() << endl;
    out << "Author: " << obj.getAuthor()<< endl;
    out << "Publisher: " << obj.getPublisher() << endl;
    return out;
}
