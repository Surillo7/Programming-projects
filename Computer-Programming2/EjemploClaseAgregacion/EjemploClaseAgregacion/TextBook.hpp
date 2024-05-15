//
//  TextBook.hpp
//  EjemploClaseAgregacion
//
//  Created by Carlos Surillo on 1/12/23.
//

#ifndef TextBook_hpp
#define TextBook_hpp
#include <iostream>
#include <string>
using namespace std;

class TextBook
{
private:
    string title;
    string author;
    string publisher;
public:
    TextBook();
    TextBook(string textTitle, string auth, string pub);
    void set(string textTitle, string auth, string pub);
    void print() const;
};

#endif /* TextBook_hpp */
