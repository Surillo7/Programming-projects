//
//  StudentList.hpp
//  EjemploJan24
//
//  Created by Carlos Surillo on 1/24/23.
//

#ifndef StudentList_hpp
#define StudentList_hpp

#include <iostream>
#include <cstdlib>
using namespace::std;
#include "PersonInfo.hpp"
class StudentsList
{
    friend ostream &operator << (ostream &strm, const StudentsList &rigthObject);
    friend istream &operator >> (istream &strm, StudentsList &rigthObject);
private:
    PersonInfo *listPtr;
    int numOfElements;
    bool isValid(int subscript) const;
public:
    StudentsList();
    StudentsList(int size);
    ~StudentsList();
    void setElement(PersonInfo value, int subscript);
    PersonInfo getElement(int subscript) const;
    int getNumOfElements() const;
    void subscriptError() const;
    void selectionSort();
    PersonInfo &operator[](const int &subscript);
    PersonInfo operator[](int subscript) const;
    StudentsList operator=(const StudentsList &rigthObject);
};

#endif /* StudentList_hpp */
