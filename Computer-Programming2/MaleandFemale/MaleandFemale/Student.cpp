//
//  Student.cpp
//  MaleandFemale
//
//  Created by Carlos Surillo on 12/13/22.
//

#include "Student.hpp"
#include <iostream>
#include "Negativemales.h"
#include "NegativeFemales.h"
using namespace::std;

Student::Student()
{
    this-> setMales(3);
    this-> setFemales(3);
    
}
Student::Student(int aMales, int aFemales, int sec, char* acl, char* tri)
{
    (*this).setMales(aMales);
    (*this).setFemales(aFemales);
    (*this).setClass(acl);
    (*this).setTrim(tri);
    (*this).setSect(sec);

}
Student::Student(const Student &obj)
{
    (*this).setMales(obj.getMales());
    (*this).setFemales(obj.getFemales());
    (*this).setClass(obj.getClass());
    (*this).setTrim(obj.getTrim());
    (*this).setSect(obj.getSect());
}
Student::~Student()
{
    cout << "Destruyendo objetos del tipo Students " << endl;
    delete [] className;
    delete [] trimestre;
    className = nullptr;
    trimestre = nullptr;
}
void Student::setMales(int aMales)
{
    if(aMales >= 0)
    {
        this-> males = aMales;
    } else
        throw NegativeMales(aMales);
}
void Student::setFemales(int aFemales)
{
    if(aFemales >= 0)
    {
        this-> females = aFemales;
    } else
        throw NegativeFemales(aFemales);
}

void Student::setClass(char* acl)
{
    this->className = new char[strlen(acl) + 1];
    strcpy(this->className, acl);
}

void Student::setTrim(char* tri)
{
    this->trimestre = new char[strlen(tri) + 1];
    strcpy(this->trimestre, tri);
}

void Student::setSect(int sec)
{
    this-> seccion = sec;
}

int Student::getMales() const
{
    return (*this).males;
}
int Student::getFemales() const
{
    return (*this).females;
}

char* Student:: getClass() const
{
    return this->className;
}

char* Student:: getTrim() const
{
    return this->trimestre;
}

int Student:: getSect() const
{
    return this->seccion;
}

int Student::getTotal() const
{
    return ((*this).getFemales() + (*this).getMales());
}
double Student::getPercentMales() const
{
    return (((double) getMales()) / getTotal());
}
double Student::getPercentFemales() const
{
    return (((double) getFemales()) / getTotal());
}
void Student::display() const
{
    cout << "Informacion del curso: " << endl;
    cout << "Course Name:" << getClass() << endl;
    cout << "Section:" << getSect() << endl;
    cout << "Trimester:" <<getTrim()<<endl;
    cout << "La cantidad de feminas matriculadas en el curso son:" << this->getFemales() << endl;
    cout << "Equivalen a " << getPercentFemales() << " % de una total de " << this->getTotal() << " estudiantes" << endl;
    cout << "La cantidad de varones matriculadas en el curso son:" << this->getMales() << endl;
    cout << "Equivalen a " << getPercentMales() << " % de una total de " << this->getTotal() << " estudiantes" << endl;
}

Student & Student::operator = (const Student &obj)
{
    (*this).setClass(obj.getClass());
    (*this).setSect(obj.getSect());
    (*this).setTrim(obj.getTrim());
    (*this).setFemales(obj.getFemales());
    (*this).setMales(obj.getMales());
    return *this;
}

ostream &operator << (ostream &strm, const Student &obj)
{
    cout << "Informacion del curso: " << endl;
    cout << "Course Name:" << obj.getClass() << endl;
    cout << "Section:" << obj.getSect() << endl;
    cout << "Trimester:" << obj.getTrim() << endl;
    cout << "La cantidad de feminas matriculadas en el curso son:" << obj.getFemales() << endl;
    cout << "Equivalen a " << obj.getPercentFemales() << " % de una total de " << obj.getTotal() << " estudiantes" << endl;
    cout << "La cantidad de varones matriculadas en el curso son:" << obj.getMales() << endl;
    cout << "Equivalen a " << obj.getPercentMales() << " % de una total de " << obj.getTotal() << " estudiantes" << endl;
    return strm;
}

istream &operator >> (istream &strm, Student &obj)
{

    char tempName[30];
    char tempTrimester[10];
    bool tryAgain;
    int aMales, aFemales;

    cin.ignore();
    cout << "Entre el nombre del curso:";
    cin.getline(tempName, 30);
    obj.setClass(tempName);
    cout << "Entre la seccion ";
    strm >> obj.seccion;
    cout << "Entre el trimester ( EX. WI/22):";
    cin>>tempTrimester;
    obj.setTrim(tempTrimester);

    
    cout << "Entre la cantidad de varones matriculados en el curso: ";
    cin>> aMales;
    tryAgain = true;
    while (tryAgain){
        try{
        obj.setMales(aMales);
            tryAgain = false;
        }
        catch (NegativeMales e){
            cout << "Please enter a nonnegative value: ";
            cin >> aMales;
        }
    }//end while
    cout << "Entre la cantidad de feminas matriculados en el curso: ";
    cin >> aFemales;
    tryAgain = true;
    while (tryAgain){
        try{
            obj.setFemales(aFemales);
            tryAgain = false;
        }
        catch (NegativeFemales e){
            cout << "Please enter a nonnegative value: ";
            cin >> aFemales;
        }
    }//end while
    return strm;
}



/*
 #include<iostream>
 using namespace::std;
 #include "Students.h"
 #include "NegativeFemales.h"
 #include "NegativeMales.h"
 Students::Students(){
     this->setFemales(3);
     this->setMales(3);
 }
 Students::Students(char *aCourseName, int aSection, char *aTrimester, int aMales, int aFemales) {
     (*this).setCourseName(aCourseName);
     (*this).setSection(aSection);

     (*this).setFemales(aFemales);
     (*this).setMales(aMales);
 }
 Students::Students(const Students &obj){
     (*this).setCourseName(obj.getCourseName());
     (*this).setSection(obj.getSection());
     (*this).setTrimester(obj.getTrimester());
     (*this).setFemales(obj.getFemales());
     (*this).setMales(obj.getMales());
 }
 Students::~Students(){
     cout << "Destruyendo objetos del tipo Students " << endl;
     delete [] courseName;
     delete [] trimester;
     courseName = nullptr;
     trimester = nullptr;
 }

 void Students::setCourseName(char *aCourseName){
     courseName = new char[strlen(aCourseName) + 1];
     strcpy_s(courseName, strlen(aCourseName) + 1, aCourseName);
 }
 void Students::setSection(int aSection){
     section = aSection;

 }
 void Students::setTrimester(char *aTrimester){
     trimester = new char[strlen(aTrimester) + 1];
     strcpy_s(trimester, strlen(aTrimester) + 1, aTrimester);
 }
 void Students::setMales(int aMales){
     if (aMales >= 0)
         this->males = aMales;
     else
         throw NegativeMales(aMales);
 }
 void Students::setFemales(int aFemales){
     if (aFemales >= 0)
         this->females = aFemales;
     else
         throw NegativeFemales(aFemales);
 }

 char * Students::getCourseName() const{
     return courseName;

 }
 int Students::getSection() const{
     return section;
 }
 char * Students::getTrimester() const{
     return trimester;
 }
 // Accessor functions
 int Students::getMales() const{
     return (*this).males;
 }
 int Students::getFemales() const{
     return (*this).females;
 }
 int Students::getTotal() const{
     return ((*this).getFemales() + (*this).getMales());
 }
 double Students::getPercentMales() const{
     return (((double)(getMales()) / getTotal())*100);
 }
 double Students::getPercentFemales() const{
     return(((double)(getFemales()) / getTotal())*100);
 }
 void Students::display() const{
     cout << "Informacion del curso: " << endl;
     cout << "Course Name:" << getCourseName() << endl;
     cout << "Section:" << getSection() << endl;
     cout << "Trimester:" <<getTrimester()<<endl;
     cout << "La cantidad de feminas matriculadas en el curso son:" << this->getFemales() << endl;
     cout << "Equivalen a " << getPercentFemales() << " % de una total de " << this->getTotal() << " estudiantes" << endl;
     cout << "La cantidad de varones matriculadas en el curso son:" << this->getMales() << endl;
     cout << "Equivalen a " << getPercentMales() << " % de una total de " << this->getTotal() << " estudiantes" << endl;
 }

 Students & Students::operator = (const Students &obj){
     (*this).setCourseName(obj.getCourseName());
     (*this).setSection(obj.getSection());
     (*this).setTrimester(obj.getTrimester());
     (*this).setFemales(obj.getFemales());
     (*this).setMales(obj.getMales());
     return *this;
 }
 
 ostream &operator << (ostream &strm, const Students &obj)
 {
     cout << "Informacion del curso: " << endl;
     cout << "Course Name:" << obj.getCourseName() << endl;
     cout << "Section:" << obj.getSection() << endl;
     cout << "Trimester:" << obj.getTrimester() << endl;
     cout << "La cantidad de feminas matriculadas en el curso son:" << obj.getFemales() << endl;
     cout << "Equivalen a " << obj.getPercentFemales() << " % de una total de " << obj.getTotal() << " estudiantes" << endl;
     cout << "La cantidad de varones matriculadas en el curso son:" << obj.getMales() << endl;
     cout << "Equivalen a " << obj.getPercentMales() << " % de una total de " << obj.getTotal() << " estudiantes" << endl;
     return strm;
 }

 istream &operator >> (istream &strm, Students &obj)
 {

     char tempName[30];
     char tempTrimester[10];
     bool tryAgain;
     int aMales, aFemales;

     cin.ignore();
     cout << "Entre el nombre del curso:";
     cin.getline(tempName, 30);
     obj.setCourseName(tempName);
     cout << "Entre la seccion ";
     strm >> obj.section;
     cout << "Entre el trimester ( EX. WI/22):";
     cin>>tempTrimester;
     obj.setTrimester(tempTrimester);

     
     cout << "Entre la cantidad de varones matriculados en el curso: ";
     cin>> aMales;
     tryAgain = true;
     while (tryAgain){
         try{
         obj.setMales(aMales);
             tryAgain = false;
         }
         catch (NegativeMales e){
             cout << "Please enter a nonnegative value: ";
             cin >> aMales;
         }
     }//end while
     cout << "Entre la cantidad de feminas matriculados en el curso: ";
     cin >> aFemales;
     tryAgain = true;
     while (tryAgain){
         try{
             obj.setFemales(aFemales);
             tryAgain = false;
         }
         catch (NegativeFemales e){
             cout << "Please enter a nonnegative value: ";
             cin >> aFemales;
         }
     }//end while

     return strm;
 }
 */
