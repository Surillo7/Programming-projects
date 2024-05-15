//
//  StudentList.cpp
//  EjemploJan24
//
//  Created by Carlos Surillo on 1/24/23.
//

#include "StudentList.hpp"
#include<iostream>
#include <cstdlib>
using namespace ::std;



StudentsList::StudentsList(){
    char temp[20] = " ";
    numOfElements = 8;
    listPtr = new PersonInfo[getNumOfElements()];
    for (int index = 0; index < getNumOfElements(); index++){
        listPtr[index].setFirstName(temp);
        listPtr[index].setLastName(temp);
    }//end for
}

StudentsList::StudentsList(int size)
{
    char temp[20] = " ";
    numOfElements = size;
    listPtr = new PersonInfo [size];
    for (int index = 0; index < getNumOfElements(); index++){
        listPtr[index].setFirstName(temp);
        listPtr[index].setLastName(temp);
    }//end for
}


StudentsList::~StudentsList()
{
    cout << "The Destructor of StudentList class is called\n ";
    if (getNumOfElements() != 0 ){
        if (!listPtr){
            delete[] listPtr;
            listPtr = nullptr;
        }
    }//end if
}

bool StudentsList::isValid(int subscript) const
{
    bool status;
    if (subscript < 0 || subscript >= getNumOfElements())
        status = false;
    else
        status = true;
    return status;
}

void StudentsList::setElement(PersonInfo value, int subscript){
    if (isValid(subscript))
        listPtr[subscript] = value;
    else
    {
        subscriptError();
    }
}

PersonInfo StudentsList::getElement(int subscript) const{
    if (isValid(subscript)){
        return listPtr[subscript];
    }
    else
    {
        PersonInfo ii;
        subscriptError();
        return ii;
    }
}


int StudentsList::getNumOfElements() const{
    return numOfElements;
}

void StudentsList::subscriptError() const
{
    cout << "ERROR: Subscript out of range.\n";
    system("pause");
    exit(EXIT_FAILURE);

}

PersonInfo &StudentsList::operator[](const int & subscript)
{
    if (subscript < 0 || subscript >= getNumOfElements())
        subscriptError();
    return listPtr[subscript];
}

PersonInfo StudentsList::operator[](int subscript) const
{

    if (subscript < 0 || subscript >= getNumOfElements())
        subscriptError();
    return listPtr[subscript];
}

void StudentsList::selectionSort(){
    
    int startScan, minIndex;
    PersonInfo minValue;
    for (startScan = 0; startScan < (getNumOfElements() - 1); startScan++)
        {
            minIndex = startScan;
            minValue = listPtr[startScan];
            for (int index = startScan + 1; index < getNumOfElements(); index++)
            {
                if (listPtr[index] < minValue)
                {
                    minValue = listPtr[index];
                    minIndex = index;
                }//end if
            }//end for
            listPtr[minIndex] = listPtr[startScan];
            listPtr[startScan] = minValue;
        }//end for
    }


StudentsList StudentsList::operator=(const StudentsList &rigthObject)
{
    numOfElements = rigthObject.getNumOfElements();
    listPtr = new PersonInfo[numOfElements];
    for (int index = 0; index < getNumOfElements(); index++)
    {
        listPtr[index].setFirstName(rigthObject[index].getFirstName());
        listPtr[index].setLastName(rigthObject[index].getLastName());
    }//end for
    return *this;
}


ostream &operator << (ostream &strm, const StudentsList &rigthObject){
    
    cout << "\nThe student's name in the front of the line by first name is: " << endl;
    strm << rigthObject.listPtr[0];
    cout << "\nThe student's name at the end of the line by first name is: " << endl;
    strm << rigthObject.listPtr[rigthObject.getNumOfElements() - 1];

    cout << "\nThe new order of students in line by first name: " << endl;
    for (int index = 0; index < rigthObject.getNumOfElements(); index++)
    {
        strm <<index+1<<") "<< rigthObject.listPtr[index];
    }//end for
    return strm;
}
istream &operator >> (istream &strm, StudentsList &rigthObject){
    
    cout << "Enter the students names's enrolled in the course:" << endl;
    for (int index = 0; index < rigthObject.getNumOfElements(); index++)
    {
        strm >> rigthObject.listPtr[index];
    }//end for
    return strm;
}
