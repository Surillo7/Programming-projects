//
//  BMI.hpp
//  actividad5-1
//
//  Created by Carlos Surillo on 1/10/23.
//

#ifndef BMI_hpp
#define BMI_hpp
#include <iostream>
using namespace::std;

class BMI
{
private:
    char* name;
    double weight;
    double height;
public:
    BMI();
    BMI(char*, double, double);
    ~BMI();
    BMI(const BMI &obj);
    void setName(char*);
    void setWeight(double);
    void setHeight(double);
    double getHeight() const;
    double getWeight() const;
    char* getName() const;
    double getBMI() const;
    friend ostream &operator << (ostream &strm, const  BMI &obj);
    friend istream &operator >> (istream &strm, BMI &obj);
};
#endif /* BMI_hpp */
