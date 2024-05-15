//
//  Complex.hpp
//  Actividad5-2
//
//  Created by Carlos Surillo on 1/11/23.
//

#ifndef Complex_hpp
#define Complex_hpp
#include <iostream>
using namespace::std;

class Complex
{
private:
    double real;
    double imaginary;
public:
    Complex();
    Complex(double, double);
    Complex(const Complex &obj);
    ~Complex();
    void setReal(double);
    void setImag(double);
    double getReal() const;
    double getImag() const;
    Complex conjugate(const  Complex &obj);
    friend ostream &operator << (ostream &strm, const  Complex &obj);
    friend istream &operator >> (istream &strm, Complex &obj);
    Complex operator + (const Complex &obj);
    Complex operator - (const Complex &obj);
    Complex operator * (const Complex &obj);
    Complex operator / (const Complex &obj);
    bool operator == (const Complex &obj) const;
};
#endif /* Complex_hpp */
