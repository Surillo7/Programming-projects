//
//  TextBook.hpp
//  Actividad7-1
//
//  Created by Carlos Surillo on 1/12/23.
//

#ifndef TextBook_hpp
#define TextBook_hpp
#include <iostream>
#include <string>
using namespace std;

// TextBook class
class TextBook
{
private:
    string title; // Book title
    string author; // Author name
    string publisher; // Publisher name
public:
    // The default constructor stores empty strings
    // in the string objects.
    TextBook();
    // Constructor
    TextBook(string textTitle, string auth, string pub);
    TextBook(const TextBook &obj);
    ~TextBook();
    // set function
    void set(string textTitle, string auth, string pub);
    void setTitle(string textTitle);
    void setAuth(string auth);
    void setPub(string pub);
    string getTitle() const;
    string getAuth() const;
    string getPub() const;
    friend ostream &operator << (ostream &strm, const TextBook &obj);
    friend istream &operator >> (istream &strm, TextBook &obj);
};
#endif /* TextBook_hpp */
