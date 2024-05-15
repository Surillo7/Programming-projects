//
//  Assignment.cpp
//  Actividad4-1
//
//  Created by Carlos Surillo on 3/31/23.
//

#include "Assignment.hpp"
#include <iostream>
using namespace::std;


Assignment::Assignment():dueDate()
{
    setDescription(" ");
}
Assignment::Assignment(Date obj, string aD):dueDate(obj)
{
    setDescription(aD);

}
Assignment::Assignment(const Assignment& obj):dueDate(obj.dueDate)
{
    setDescription(obj.getDescription());
}
Assignment::~Assignment()
{
    
}
void Assignment::setDueDate(Date obj)
{
    dueDate = obj;
}
void Assignment::setDescription(string aD)
{
    descript = aD;
}

Date Assignment::getDueDate() const
{
    return this->dueDate;
}
string Assignment::getDescription() const
{
    return descript;
}
bool Assignment::operator < (const Assignment& obj) const
{
    if (getDueDate() < obj.getDueDate())
        return true;
    else
        return false;
}
bool Assignment::operator > (const Assignment& obj) const
{
    if (getDueDate() > obj.getDueDate())
        return true;
    else
        return false;
}

bool Assignment::operator <= (const Assignment& obj) const
{
    if (getDueDate() <= obj.getDueDate())
        return true;
    else
        return false;
}
bool Assignment::operator >= (const Assignment& obj) const
{
    if (getDueDate() >= obj.getDueDate())
        return true;
    else
        return false;
}
bool Assignment::operator == (const Assignment& obj) const
{
    if(getDueDate()== obj.getDueDate())
        return true;
    else
        return false;
}

istream & operator >> (istream& in, Assignment& obj)
{
    string des;
    cout << "---Due date---" << endl;
    in>>obj.dueDate;
    cout << "---Description---"<< endl;
    cin.ignore();
    getline(cin, des);
    obj.setDescription(des);
    return in;
}
ostream & operator << (ostream& out, const Assignment &obj)
{
    out<< "Due Date: " << obj.getDueDate()<< endl;
    out << "Description: " << obj.getDescription() << endl;
    return out;
}
