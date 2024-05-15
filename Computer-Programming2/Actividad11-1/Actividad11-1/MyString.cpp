//
//  MyString.cpp
//  Actividad11-1
//
//  Created by Carlos Surillo on 2/10/23.
//

#include "MyString.hpp"


MyString::MyString()
{
    this-> str = nullptr;
}

MyString::MyString(char* sptr)
{
    str = new char[strlen(sptr) + 1];
    strcpy(str, sptr);
}

MyString::MyString(const MyString& obj)
{
    setStr(obj.getStr());
}

MyString::~MyString()
{
    delete [] str;
}

void MyString::setMyString(const MyString& obj)
{
    setStr(obj.getStr());
}
void MyString::setStr(char * sptr)
{
    str = new char[strlen(sptr) + 1];
    strcpy(str, sptr);
}
char * MyString:: getStr() const
{
    return str;
}

const MyString& MyString::operator=(const MyString &obj)
{
    delete [] str;
    str = new char[strlen(obj.str) + 1];
    strcpy(str, obj.str);
    return *this;
}

bool operator==(MyString left, MyString right)
{
    return strcmp(left.str, right.str) == 0;
}

bool operator>(MyString left, MyString right)
{
    return (strcmp(left.str, right.str) > 0);
}

bool operator<(MyString left, MyString right)
{
      return (strcmp(left.str, right.str) < 0);
}

ostream& operator<<(ostream& strm, MyString obj)
{
    strm << obj.str;
    return strm;
}

istream& operator>>(istream& strm, MyString& obj)
{
    cin.ignore();
    char temp[100];
    strm.getline(temp, 100);
    obj.setStr(temp);
    
    return strm;
}
