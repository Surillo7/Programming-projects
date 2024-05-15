//
//  Term.cpp
//  Actividad3.1
//
//  Created by Carlos Surillo on 3/16/23.
//

#include "Term.hpp"
#include <iostream>
using namespace::std;

Term::Term()
{
    setExp(0);
    setCoef(0);
}

Term::Term(int aC, int aE)
{
    setCoef(aC);
    setExp(aE);
}

Term::Term(const Term& obj)
{
    setCoef(obj.getCoef());
    setExp(obj.getExp());
}

Term::~Term()
{
    
}

void Term::setCoef(int aC)
{
    coef = aC;
}
void Term::setExp(int aE)
{
    exp = aE;
}
void Term::set(int aC, int aE)
{
    setCoef(aC);
    setExp(aE);
}
int Term::getCoef() const
{
    return coef;
}
int Term::getExp() const
{
    return exp;
}
bool Term::operator == (const Term& obj) const
{
    return getExp() == obj.getExp();
}

Term Term::operator +=(const Term &obj)
{
    if(getExp() == obj.getExp())
    {
        coef += obj.coef;
    }
    return *this;
}

istream& operator >> (istream& in, Term& obj)
{
    cout << "Enter coefficient: ";
    in>> obj.coef;
    cout << "Enter power: ";
    in>> obj.exp;
    return in;
}
ostream& operator << (ostream& out, const Term& obj)
{
    cout << obj.getCoef() << "x^" << obj.getExp();
    return out;
}
