//
//  Name.hpp
//  Actividad7-3
//
//  Created by Carlos Surillo on 1/20/23.
//

#ifndef Name_hpp
#define Name_hpp
#include <iostream>
#include <string>
using namespace::std;


class Name
{
private:
    char* firstName;
    char* lastName;
public:
    Name();
    Name(char*, char*);
    Name(const Name&);
    ~Name();
    void setFirst(char*);
    void setLast(char*);
    char* getFirst() const;
    char* getLast() const;
    const Name &operator = (const Name &obj);
    friend istream &operator >>(istream &input, Name& obj);
    friend ostream &operator << (ostream &output, Name& obj); 
};
#endif //* Name_hpp *


