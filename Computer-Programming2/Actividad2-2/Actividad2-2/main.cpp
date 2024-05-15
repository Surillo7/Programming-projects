//
//  main.cpp
//  Actividad2-3
//
//  Created by Carlos Surillo, Stephanie Cruz, Alanna Vega
//  on 12/4/22.
//

#include <iostream>
#include <string>
#include <iomanip>
using namespace::std;
#define PAUSE {cout<< "\nPress [ENTER] to continue...\n"; cin.get(); cin.get();}


void answerSheet(string *array, int size);
void studentAns(string *array, int size);
void check(string *array1, string *array2, bool *array3, int size, int *corr, int *wrong);
void printWrong(string *array1, string *array2, bool *array3, int size, int *corr, int *wrong);
void passfail(int *corr, int *wrong, int size);


int main()
{
    int n;
    cout << "Enter number of questions in test: ";
    cin >> n;
    
    string *correctAnswers = nullptr;
    string *studentAnswers = nullptr;
    bool *checkAnswers = nullptr;
    int *numCorrect = nullptr;
    int *numWrong = nullptr;
    
    correctAnswers = new string[n];
    studentAnswers = new string[n];
    checkAnswers = new bool[n];
    numWrong = new int(0);
    numCorrect = new int(0);
    
    
    answerSheet(correctAnswers, n);
    studentAns(studentAnswers, n);
    check(correctAnswers, studentAnswers, checkAnswers, n, numCorrect, numWrong);
    printWrong(correctAnswers, studentAnswers, checkAnswers, n, numCorrect, numWrong);
    passfail(numCorrect, numWrong, n);
    
    
    delete [] correctAnswers;
    correctAnswers = nullptr;
    
    delete [] studentAnswers;
    studentAnswers = nullptr;
    
    delete [] checkAnswers;
    checkAnswers = nullptr;
    
    delete numCorrect;
    numCorrect = 0;
    
    delete numWrong;
    numWrong = 0;
    
    PAUSE;
    return 0;
}

void answerSheet(string *array, int size)
{
    cout << "Enter the correct answers for the test: (A,B,C, or D)"<< endl;
    
    for(int i = 0; i < size; i++)
    {
        cout<< "Q#" << i + 1 << ": ";
        cin >> *(array + i);
    }
    PAUSE;
}

void studentAns(string *array, int size)
{
    cout << "Enter the student's answers for the test: (A,B,C, or D)"<< endl;
    
    for(int i = 0; i < size; i++)
    {
        cout<< "Q#" << i + 1 << ": ";
        cin >> *(array + i);
    }
    PAUSE;
}

void check(string *array1, string *array2, bool *array3, int size,int *corr, int *wrong)
{
    for(int i = 0; i < size; i++)
    {
        if(*(array1 + i) == *(array2 + i))
        {
            *(array3 + i) = true;
            *corr = *corr + 1;
        } else
        {
            *(array3 + i) = false;
            *wrong = *wrong + 1;
        }
    }
}

void printWrong(string *array1, string *array2, bool *array3, int size, int *corr, int *wrong)
{
    cout << "Wrong student answers: " << endl;
    for (int i = 0; i < size; i++)
    {
        if (*(array3 + i) == false)
        {
            cout << "Q#" << i + 1 << ":"<< endl;
            cout << "Answer: " << *(array2 + i) << endl;
            cout << "Correct Answer: " << *(array1 + i) << endl;
        }
    }
    PAUSE;
}

void passfail(int *corr, int *wrong, int size)
{
    double *percent = nullptr;
    percent = new double(0);
    *percent = (double) *corr / size;

    cout << "Test Score: " << *corr << "/" << size << endl;
    cout << fixed << setprecision(2);
    cout << "Percent: " << *percent << endl;

    
    if (*percent < 0.75)
    {
        cout << "You failed! You needed at least 75% to pass." << endl;
    } else
    {
        cout << "Congrats! You Pass!" << endl;
    }
    
    delete percent;
    percent = 0;
}


//OUTPUT:
/*
 Enter number of questions in test: 5
 Enter the correct answers for the test: (A,B,C, or D)
 Q#1: A
 Q#2: C
 Q#3: C
 Q#4: A
 Q#5: B

 Press [ENTER] to continue...

 Enter the student's answers for the test: (A,B,C, or D)
 Q#1: D
 Q#2: C
 Q#3: B
 Q#4: A
 Q#5: B

 Press [ENTER] to continue...

 Wrong student answers:
 Q#1:
 Answer: D
 Correct Answer: A
 Q#3:
 Answer: B
 Correct Answer: C

 Press [ENTER] to continue...


 Test Score: 3/5
 Percent: 0.60
 You failed! You needed at least 75% to pass.

 Press [ENTER] to continue...


 Program ended with exit code: 0
 */

