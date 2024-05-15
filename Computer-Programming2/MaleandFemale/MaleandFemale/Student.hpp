//
//  Student.hpp
//  MaleandFemale
//
//  Created by Carlos Surillo on 12/13/22.
//

#ifndef Student_hpp
#define Student_hpp
#include <iostream>
using namespace::std;

class Student
{
private:
    int males;
    int females;
    char *className;
    char* trimestre;
    int seccion;
public:
    Student();
    Student(int aMales, int aFemales, int sec, char* acl, char* tri);
    Student(const Student &obj);
    ~Student();
    void setMales(int);
    void setFemales(int);
    void setClass(char*);
    void setTrim(char*);
    void setSect(int);
    int getMales() const;
    int getFemales() const;
    int getSect() const;
    char *getClass() const;
    char* getTrim() const;
    int getTotal() const;
    double getPercentMales() const;
    double getPercentFemales() const;
    void display() const;
    Student & operator = (const Student &obj);
    friend ostream &operator << (ostream &strm, const Student &obj);
    friend istream &operator >> (istream &strm, Student &obj);
};

#endif /* Student_hpp */
