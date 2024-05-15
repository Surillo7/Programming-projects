//
//  Complex.cpp
//  Actividad5-2
//
//  Created by Carlos Surillo on 1/11/23.
//

#include "Complex.hpp"
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace::std;

Complex::Complex()
{
    setImag(0.0);
    setReal(0.0);
}

Complex::Complex(double aReal, double aImag)
{
    setReal(aReal);
    setImag(aImag);
}

Complex::Complex(const Complex &obj)
{
    setReal(obj.getReal());
    setImag(obj.getImag());
}

Complex::~Complex(){
    
}

void Complex::setReal(double aReal)
{
    real = aReal;
}

void Complex::setImag(double aImag)
{
    imaginary = aImag;
}

double Complex::getReal() const
{
    return real;
}

double Complex::getImag() const
{
    return imaginary;
}

Complex Complex:: operator + (const Complex &obj)
{
    Complex res;
    res.real = real + obj.real;
    res.imaginary = imaginary + obj.imaginary;
    return res;
}
Complex Complex:: operator - (const Complex &obj)
{
    Complex res;
    res.real = real - obj.real;
    res.imaginary = imaginary - obj.imaginary;
    return res;
}

bool Complex:: operator == (const Complex &obj) const
{
    if (getReal()== obj.getReal() && getImag()== obj.getImag())
        return true;
    else
        return false;
}


Complex Complex::operator * (const Complex &obj)
{
    Complex res;
    res.real = (real * obj.real) - (imaginary * obj.imaginary);
    res.imaginary = (real * obj.imaginary) + (imaginary * obj.real);
    return res;
}

Complex Complex:: operator / (const Complex &obj)
{
    Complex res;
    res.real = ((real * obj.real) + (imaginary * obj.imaginary))/ (pow(obj.real, 2.0) + pow(obj.imaginary, 2.0));
    res.imaginary = (((real * -1) * obj.imaginary) + (imaginary* obj.real))/ (pow(obj.real, 2.0) + pow(obj.imaginary, 2.0));
    return res;
}

istream &operator >> (istream &strm, Complex &obj)
{
    cout << "Entre parte real del numero complejo: ";
    strm>> obj.real;
    cout << "Entre parte imaginaria del numero complejo: ";
    strm>>obj.imaginary;
    
    return strm;
}

ostream &operator << (ostream &strm, const  Complex &obj)
{
    
    if (obj.getImag()>=0)
    {
        cout << fixed << setprecision(2);
        strm << "Resultado de operación: ";
        strm<< obj.getReal() << " + " << obj.getImag() << "i" << endl;
        cout.unsetf(std::ios::fixed);
    }
    else
    {
        cout << fixed << setprecision(2);
        strm << "Resultado de operación: ";
        strm<< obj.getReal() << obj.getImag() << "i" << endl;
        cout.unsetf(std::ios::fixed);
    }
    
    return strm;
}


Complex Complex:: conjugate(const  Complex &obj)
{
    Complex res;
    res.real = getReal();
    res.imaginary = (getImag() * -1);
    return res;
}
