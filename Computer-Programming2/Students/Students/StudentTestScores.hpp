//
//  StudentTestScores.hpp
//  Students
//
//  Created by Carlos Surillo on 12/8/22.
//

#ifndef StudentTestScores_hpp
#define StudentTestScores_hpp
#include <string>
using namespace std;
const double DEFAULT_SCORE = 0.0;
class StudentTestScores
{
private:
    string studentName; // The student's name
    double *testScores; // Points to array of test scores
    int numTestScores; // Number of test scores
public:
    void createTestScoresArray(int size);
    // Constructor
    StudentTestScores(string name, int numScores);
    // Copy constructor
    StudentTestScores(const StudentTestScores &obj);
    ~StudentTestScores();
    // Destructor
    // The setTestScore function sets a specific
    // test score's value.
    // Set the student's name.
    void setStudentName(string name);
    // Get the student's name.
    string getStudentName() const;
    // Get the number of test scores.
    int getNumTestScores() const;
    // Get a specific test score.
    void setTestScore(double score, int index);
    double getTestScore(int index) const;
    void display() const;
};


#endif /* StudentTestScores_hpp */
