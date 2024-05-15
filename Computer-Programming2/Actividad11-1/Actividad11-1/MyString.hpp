//
//  MyString.hpp
//  Actividad11-1
//
//  Created by Carlos Surillo on 2/10/23.
//

#ifndef MyString_hpp
#define MyString_hpp
#include <iostream>
#include <string.h> // For MyString library functions
#include <cstdlib> // For exit() function
using namespace std;
class MyString
{
private:
    char* str;
public:
    MyString();
    MyString(char*);
    MyString(const MyString&);
    ~MyString();
    void setMyString(const MyString& obj);
    void setStr(char * sptr);
    char* getStr() const;
    const MyString &operator=(const MyString& obj);
    friend bool operator==(MyString, MyString);
    friend bool operator>(MyString, MyString);
    friend bool operator<(MyString, MyString);
    friend ostream& operator<<(ostream&, MyString);
    friend istream& operator>>(istream&, MyString&);
};
#endif /* MyString_hpp */
