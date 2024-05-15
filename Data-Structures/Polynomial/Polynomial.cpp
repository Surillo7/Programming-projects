//
//  Polynomial.cpp
//  Actividad3.1
//
//  Created by Carlos Surillo on 3/16/23.
//

#include "Polynomial.hpp"
#include <iostream>
using namespace::std;

Polynomial::Polynomial()
{
    dimension = 0;
    //poly[dimension].setCoef(0);
    //poly[dimension].setExp(0);
}
Polynomial::Polynomial(ArrayBag<Term> aPoly, int aD)
{
    dimension = aD;
    for(int i = 0; i < dimension; i++)
    {
        poly[i].set(aPoly[i].getCoef(), aPoly[i].getExp());
    }
}
Polynomial::~Polynomial()
{
    
}
Polynomial::Polynomial(const Polynomial& obj)
{
    dimension = obj.dimension;
    poly = obj.poly;
}
void Polynomial::setPolynomial(Term aPoly)
{
    poly.add(aPoly);
    dimension++;
}
int Polynomial::degree()
{
    int highest = poly[0].getExp();
    for(int i = 1; i < dimension; i++)
    {
        if(highest < poly[i].getExp())
            highest = poly[i].getExp();
    }
    return highest;
}
int Polynomial::coefficient(int power)
{
    for(int i = 0; i < dimension; i++)
    {
        if(poly[i].getExp() == power)
            return poly[i].getCoef();
    }
    return 0;
}
void Polynomial::changeCoefficient(int newC, int Pow)
{
    Term tmp;
    int pos = -1;
    for(int i = 0; i < poly.getCurrentSize(); i++)
    {
        if(poly[i].getExp() == Pow)
        {
            poly.remove(poly[i]);
            tmp.set(newC, Pow);
            poly.add(tmp);
            pos = i;
        }
    }
    if(pos == -1)
    {
        tmp.set(newC, Pow);
        setPolynomial(tmp);
    }
}

Polynomial Polynomial::operator +(Polynomial &obj)
{
    Polynomial tmp;
    
    for (int i = 0; i < poly.getCurrentSize(); i++)
    {
        tmp.poly.add(poly[i]);
    }

    for (int i = 0; i < obj.poly.getCurrentSize(); i++)
    {
        int flag = -1;
        for (int j = 0; j < tmp.poly.getCurrentSize(); j++)
        {
            if (tmp.poly[j].getExp() == obj.poly[i].getExp())
            {
                tmp.poly.add(tmp.poly[j] += obj.poly[i]);
                tmp.poly.remove(tmp.poly[j]);
                flag = 0;
                break;
            }
                    
        }
        if (flag == -1)
            tmp.poly.add(obj.poly[i]);
    }
    return tmp;
}

Term Polynomial::operator[](int index)
{
    if (index < 0 || index > dimension)
        cerr << "Error, subscript out of range!" << endl;
    return poly[index];
}

istream& operator >>(istream& in, Polynomial& obj)
{
    Term tmp;
    int n;
    cout << "Enter terms in polynomial: ";
    in>> n ;
    for(int i = 0; i < n; i++)
    {
        cout << "---Term #" << i + 1 << "---" << endl;
        cin >> tmp;
        obj.setPolynomial(tmp);
    }
    return in;
}

ostream& operator <<(ostream& out, Polynomial& obj)
{
    for(int i = 0; i < obj.poly.getCurrentSize(); i++)
    {
        if (i == 0)
            out << obj.poly[i].getCoef() << "x^" << obj.poly[i].getExp();
        else if(obj.poly[i].getExp() == 1)
            out << " + " << obj.poly[i].getCoef();
        else if(obj.poly[i].getExp() == 0)
            out << "+ 1 ";
        else
            out << " + " << obj.poly[i].getCoef() << "x^" << obj.poly[i].getExp();
    }
    
    return out;
}
