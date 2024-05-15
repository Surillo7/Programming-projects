//
//  Polynomial.hpp
//  Actividad3.1
//
//  Created by Carlos Surillo on 3/16/23.
//

#ifndef Polynomial_hpp
#define Polynomial_hpp
#include "ArrayBag.h"
#include "Term.hpp"

class Polynomial
{
private:
    ArrayBag<Term> poly;
    int dimension;
public:
    Polynomial();
    Polynomial(ArrayBag<Term> aPoly, int aD);
    ~Polynomial();
    Polynomial(const Polynomial& obj);
    void setPolynomial(Term aPoly);
    int degree();
    int coefficient(int power);
    void changeCoefficient(int newC, int Pow);
    Term operator[] (int index);
    Polynomial operator + ( Polynomial &obj);
    friend istream& operator >>(istream&, Polynomial&);
    friend ostream& operator <<(ostream&, Polynomial&);
};
#endif /* Polynomial_hpp */
