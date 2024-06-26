//
//  MyString.hpp
//  Actividad12-1
//
//  Created by Carlos Surillo on 5/16/23.
//

#ifndef MyString_h
#define MyString_h

#include <iostream>
#include <cstdlib> // For exit() function #include<string>
using namespace::std; class MyString
{
private:
    char *str;
    int len;
public:
    MyString();
    MyString(char *);
    MyString(const MyString &);
    ~MyString() { if (len != 0) delete[] str; }
    int length() { return len; }
    char *data() { return str; };
    MyString operator+=(MyString);
    MyString operator=(MyString);
    friend bool operator==(MyString, MyString);
    friend bool operator!=(MyString, MyString);
    friend bool operator>(MyString, MyString);
    friend bool operator<(MyString, MyString);
    friend bool operator>=(MyString, MyString);
    friend bool operator<=(MyString, MyString);
    friend ostream & operator<<(ostream &, MyString);
    friend istream & operator>>(istream &, MyString &);
};

MyString::MyString()
{
    char tmp[] = "";
    len = strlen(tmp);
    str = new char[len + 1];
    strcpy(str, tmp);
}

MyString::MyString(char *sptr)
{
    len = strlen(sptr);
    str = new char[len + 1];
    strcpy(str, sptr);
}
MyString::MyString(const MyString &right)
{
    str = new char[right.len + 1];
    strcpy(str, right.str);
    len = right.len;
}
MyString MyString::operator=(MyString right)
{
    if (len != 0)
        delete[] str;
    str = new char[right.len + 1];
    strcpy(str, right.str);
    len = right.len;
    return *this;
}
MyString MyString::operator+=(MyString right)
{
    char *temp = str;
    str = new char[len + right.len + 1];
    strcpy(str, temp);
    strcat(str, right.str);
    if (len != 0)
        delete[] temp;
    len += right.len;
    return *this;
}
bool operator==(MyString left, MyString right)
{
    return strcmp(left.str, right.str) == 0;
}

bool operator!=(MyString left, MyString right)
{
    return strcmp(left.str, right.str) != 0;
}
bool operator>(MyString left, MyString right)
{
    return (strcmp(left.str, right.str) > 0);
}
bool operator<(MyString left, MyString right)
{
    return (strcmp(left.str, right.str) < 0);
    
}
bool operator>=(MyString left, MyString right)
{
    return (strcmp(left.str, right.str) >= 0);
    
}
bool operator<=(MyString left, MyString right)
{
    return (strcmp(left.str, right.str) <= 0);
    
}
ostream &operator<<(ostream &strm, MyString obj)
{
    strm << obj.str;
    return strm;
}
istream &operator>>(istream &strm, MyString &obj)
{
    // Read the MyString
    char buffer[256];
    cin.ignore();
    strm.getline(buffer, 256);
    // Invoke the convert constructor and overloaded assignment
    obj = buffer;
    return strm;
}
#endif /* MyString_h */
