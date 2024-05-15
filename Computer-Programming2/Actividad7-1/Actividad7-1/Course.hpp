//
//  Course.hpp
//  Actividad7-1
//
//  Created by Carlos Surillo on 1/12/23.
//

#ifndef Course_hpp
#define Course_hpp
#include <iostream>
#include <string>
#include "Instructor.hpp"
#include "TextBook.hpp"
using namespace std;
class Course
{
private:
    string courseName; // Course name
    string courseCode;
    string courseTerm;
    Instructor instructor; // Instructor
    TextBook textbook; // Textbook
public:
    // Constructor
    Course();
    Course(string aCourseName, string aCourseCode, string aCourseTerm, string instrLastName,string instrFirstName, string instrOffice, string textTitle, string author,string publisher);
    Course(string aCourseName, string aCourseCode, string aCourseTerm, Instructor &anIstructor, TextBook &aTextBook);
    Course(const Course &obj);
    ~Course();
    void set(string aCourseName, string aCourseCode, string aCourseTerm, string instrLastName,string instrFirstName, string instrOffice,string textTitle, string author,string publisher);
    void set(string aCourseName, string aCourseCode, string aCourseTerm,Instructor &anIstructor, TextBook &aTextBook);
    void setCourseName(string aCourseName);
    void setCourseCode(string aCourseCode);
    void setCourseTerm(string aCourseTerm);
    void setInstructor(Instructor &anIstructor);
    void setInstructor(string instrLastName, string instrFirstName, string instrOffice);
    void setTextBook(TextBook &aTextBook);
    void setTextBook(string textTitle, string author, string publisher);
    string getCourseName() const;
    string getCourseCode() const;
    string getCourseTerm() const;
    const Instructor & getInstructor() const;
    const TextBook &getTextBook() const;
    friend ostream &operator << (ostream &strm, const Course &obj);
    friend istream &operator >> (istream &trm, Course &obj);
};
#endif /* Course_hpp */
