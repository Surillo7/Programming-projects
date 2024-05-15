//
//  Runner.cpp
//  Actividad8-2
//
//  Created by Carlos Surillo on 1/25/23.
//

#include "Runner.hpp"
#include <iostream>
using namespace::std;

Runner::Runner(): time()
{
    char temp[20] = " ";
    setFirst(temp);
    setLast(temp);
}


Runner::Runner(char* first, char* last, Time& aTime): time(aTime)
{
    setFirst(first);
    setLast(last);
    time = aTime;
}
Runner::Runner(const Runner& obj): time(obj.time)
{
    setFirst(obj.getFirst());
    setLast(obj.getLast());
}
Runner::~Runner()
{
    delete [] firstName;
    delete [] lastName;
}
void Runner::setFirst(char* first)
{
    firstName = new char[strlen(first) + 1];
    strcpy(firstName, first);
}
void Runner::setLast(char* last)
{
    lastName = new char[strlen(last) + 1];
    strcpy(lastName, last);
}


void Runner::setTime(Time &aTime)
{
    time = aTime;
}

char* Runner::getFirst() const
{
    return firstName;
}
char* Runner::getLast() const
{
    return lastName;
}

Time & Runner:: getTime() 
{
    return time;
}

const Runner & Runner::operator = (const Runner &obj)
{
    delete [] firstName;
    firstName = new char[strlen(obj.firstName) + 1];
    strcpy(firstName, obj.firstName);

    
    delete [] lastName;
    lastName = new char[strlen(obj.lastName) + 1];
    strcpy(lastName, obj.lastName);
    
    time = obj.time;
    
    return *this;
}

bool Runner::operator > (const Runner &obj) const
{
    if(time > obj.time)
        return true;
    else
        return false;
}
bool Runner::operator < (const Runner &obj) const
{
    if(time < obj.time)
        return true;
    else
        return false;
}

bool Runner::operator == (const Runner &obj) const
{
    if(getFirst() == obj.getFirst() && getLast() == obj.getLast() && time == obj.time)
        return true;
    else
        return false;
}


istream &operator >>(istream &input, Runner& obj)
{
    char fN[20];
    char lN[20];
    cin.ignore();
    
    cout << "First Name: ";
    input.getline(fN, 20);
    obj.setFirst(fN);
    
    cout << "Last Name: ";
    input.getline(lN, 20);
    obj.setLast(lN);
    
    input >> obj.time;
    
    return input;
    
}
ostream &operator << (ostream &output, Runner& obj)
{
    output << "----"<< obj.firstName << " " << obj.lastName <<"----" << endl;
    output << obj.time << endl;
    return output;
}
