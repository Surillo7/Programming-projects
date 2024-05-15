//
//  BookInfo.hpp
//  Actividad1.3
//
//  Created by Carlos Surillo on 3/11/23.
//

#ifndef BookInfo_hpp
#define BookInfo_hpp
#include <iostream>
#include <string>
using namespace::std;

class BookInfo
{
private:
    string title;
    string author;
    string publisher;
public:
    BookInfo();
    BookInfo(string, string, string);
    BookInfo(const BookInfo&);
    ~BookInfo();
    void setTitle(string);
    void setAuthor(string);
    void setPublisher(string);
    void setBookInfo(string, string, string);
    string getTitle() const;
    string getAuthor() const;
    string getPublisher() const;
    bool operator == (const BookInfo &obj) const;
    friend istream &operator >>(istream &in, BookInfo& obj);
    friend ostream &operator << (ostream &out, BookInfo& obj);
};

#endif /* BookInfo_hpp */
