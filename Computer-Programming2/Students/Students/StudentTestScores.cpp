//
//  StudentTestScores.cpp
//  Students
//
//  Created by Carlos Surillo on 12/8/22.
//
#include<iostream>
using namespace::std;
#include "StudentTestScores.hpp"

void StudentTestScores::createTestScoresArray(int size)
{
    numTestScores = size;
    testScores = new double[size];
    for (int i = 0; i < size; i++)
        testScores[i] = DEFAULT_SCORE;
}

StudentTestScores::StudentTestScores(string name, int numScores)
{
    studentName = name;
    createTestScoresArray(numScores);
}

// Copy constructor
StudentTestScores::StudentTestScores(const StudentTestScores &obj)
{
    studentName = obj.studentName;
    numTestScores = obj.numTestScores;
    testScores = new double[numTestScores];
    for (int i = 0; i < numTestScores; i++)
        testScores[i] = obj.testScores[i];
}

// Destructor
StudentTestScores::~StudentTestScores()
{
    delete[] testScores;
    
}

void StudentTestScores::setTestScore(double score, int index)
{
    testScores[index] = score;
}

// Set the student's name.
void StudentTestScores::setStudentName(string name)
{
    studentName = name;
}

// Get the student's name.
string StudentTestScores::getStudentName() const
{
    return studentName;
}
// Get the number of test scores.
int StudentTestScores::getNumTestScores() const
{
    return numTestScores;
}
// Get a specific test score.
double StudentTestScores::getTestScore(int index) const
{
    return testScores[index];
}
void StudentTestScores::display() const
{
    cout << "Las notas del estudiante "<< getStudentName()<< " son :"
    << endl;

    for (int index = 0; index < getNumTestScores(); index++)
    {
        cout << getTestScore(index) << ",";
    }//end for
    cout << endl;
    
}

