//
//  Precond.h
//  SLPriorityQueue
//
//  Created by Carlos Surillo on 4/27/23.
//

#ifndef Precond_h
#define Precond_h
#include<iostream>
#include <stdexcept>
#include <string>
using namespace std;

class PrecondViolatedExcep : public logic_error
{
public:
   PrecondViolatedExcep(const string& message = "");
}; // end PrecondViolatedExcep

PrecondViolatedExcep::PrecondViolatedExcep(const string& message) : logic_error("Precondition Violated Exception: " + message)
{
    //cout << "Not Found Exception: " + message << endl;
}  // end constructor

#endif /* Precond_h */
