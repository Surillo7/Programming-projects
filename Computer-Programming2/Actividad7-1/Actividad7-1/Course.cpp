//
//  Course.cpp
//  Actividad7-1
//
//  Created by Carlos Surillo on 1/12/23.
//

#include "Course.hpp"
#include <iostream>
using namespace::std;



Course::Course():instructor(), textbook()
{
    setCourseCode(" ");
    setCourseName(" ");
    setCourseTerm(" ");
}


Course::Course(string aCourseName, string aCourseCode, string aCourseTerm, string instrLastName,string instrFirstName, string instrOffice, string textTitle, string author,string publisher): instructor(instrLastName, instrFirstName, instrOffice), textbook(textTitle, author, publisher)
{
    setCourseName(aCourseName);
    setCourseCode(aCourseCode);
    setCourseTerm(aCourseTerm);
}


Course:: Course(string aCourseName, string aCourseCode, string aCourseTerm, Instructor &anIstructor, TextBook &aTextBook): instructor(anIstructor), textbook(aTextBook)
{
    setCourseName(aCourseName);
    setCourseCode(aCourseCode);
    setCourseTerm(aCourseTerm);
}

Course::Course(const Course &obj): instructor(obj.instructor), textbook(obj.textbook)
{
    setCourseName(obj.getCourseName());
    setCourseCode(obj.getCourseCode());
    setCourseTerm(obj.getCourseTerm());
}

Course::~Course(){
}


void Course::set(string aCourseName, string aCourseCode, string aCourseTerm, string instrLastName, string instrFirstName, string instrOffice, string textTitle, string author, string publisher)
{
    setCourseName(aCourseName);
    setCourseCode(aCourseCode);
    setCourseTerm(aCourseTerm);
    instructor.set(instrLastName,instrFirstName, instrOffice);
    textbook.set(textTitle, author, publisher);
}

void Course::set(string aCourseName, string aCourseCode, string aCourseTerm,Instructor &anIstructor, TextBook &aTextBook)
{
    setCourseName(aCourseName);
    setCourseCode(aCourseCode);
    setCourseTerm(aCourseTerm);
    instructor = anIstructor;
    textbook = aTextBook;
}
void Course::setCourseName(string aCourseName)
{
    courseName = aCourseName;
}
void Course::setCourseCode(string aCourseCode)
{
    courseCode = aCourseCode;
}
void Course::setCourseTerm(string aCourseTerm)
{
    courseTerm = aCourseTerm;
}
void Course::setInstructor(Instructor &anIstructor)
{
    instructor = anIstructor;
}
void Course::setInstructor(string instrLastName, string instrFirstName, string instrOffice)
{
    instructor.set(instrLastName,instrFirstName, instrOffice);
}
void Course::setTextBook(TextBook &aTextBook)
{
    textbook = aTextBook;
}
void Course::setTextBook(string textTitle, string author, string publisher)
{
    textbook.set(textTitle, author, publisher);
}
string Course::getCourseName() const
{
    return courseName;
}
string Course::getCourseCode() const
{
    return courseCode;
}
string Course::getCourseTerm() const
{
    return courseTerm;
}
const Instructor &Course:: getInstructor() const
{
    return this->instructor;
}
const TextBook &Course::getTextBook() const
{
    return this->textbook;
}
ostream &operator << (ostream &strm, const Course &obj)
{
    strm<< "Course Name: " << obj.courseName << endl;
    strm<< "Course Code: " << obj.courseCode << endl;
    strm<< "Course Term: " << obj.courseTerm << endl;
    strm << "------Instructor------- " << endl << obj.instructor << endl;
    strm << "-------TextBook-------- " << endl << obj.textbook<< endl;
    return strm;
}
istream &operator >> (istream &strm, Course &obj)
{
    
    string cN, cC, cT;
    
    cin.ignore();
    cout<< "Course Name: ";
    getline(strm,cN);
    obj.setCourseName(cN);
    
    cout<< "Course Code: ";
    getline(strm,cC);
    obj.setCourseCode(cC);
    
    cout<< "Course Term: ";
    getline(strm,cT);
    obj.setCourseTerm(cT);
    
    cout << "Instructor:" << endl;
    strm>> obj.instructor;
    cout << "TextBook:" << endl;
    strm>> obj.textbook;
    return strm;
}
