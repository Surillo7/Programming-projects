//
//  GradedActivity.cpp
//  Actividad9-2
//
//  Created by Carlos Surillo on 1/30/23.
//

#include "GradedActivity.hpp"
#include <iostream>
using namespace::std;


GradedActivity::GradedActivity()
{
    setScore(0.0);
}
GradedActivity::GradedActivity(double s)
{
    setScore(s);
}

GradedActivity::~GradedActivity()
{
    
}
void GradedActivity::setScore(double s)
{
    score = s;
}
double GradedActivity::getScore() const
{
    return score;
}
char GradedActivity::getLetterGrade() const
{
    char grade;
    
    if (getScore() > 89)
        grade = 'A';
    else if (getScore() > 79)
        grade = 'B';
    else if (getScore() > 69)
        grade = 'C';
    else if (getScore() > 59)
        grade = 'D';
    else
        grade = 'F';
    
    return grade;
}
