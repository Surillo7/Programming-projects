//
//  Assignment.hpp
//  Actividad4-1
//
//  Created by Carlos Surillo on 3/31/23.
//

#ifndef Assignment_hpp
#define Assignment_hpp
#include <iostream>
#include <string>
using namespace::std;
#include "Date.hpp"

class Assignment
{
private:
    Date dueDate;
    string descript;
public:
    Assignment();
    Assignment(Date, string);
    Assignment(const Assignment&);
    ~Assignment();
    void setDueDate(Date);
    void setDescription(string);
    Date getDueDate() const;
    string getDescription() const;
    bool operator < (const Assignment&) const;
    bool operator > (const Assignment&) const;
    bool operator <= (const Assignment&) const;
    bool operator >= (const Assignment&) const;
    bool operator == (const Assignment&) const;
    friend istream & operator >> (istream&, Assignment&);
    friend ostream & operator << (ostream&, const Assignment&);
};

#endif /* Assignment_hpp */
