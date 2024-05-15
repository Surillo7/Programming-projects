//
//  PrecondViolated.h
//  LinkedSortedList
//
//  Created by Carlos Surillo on 4/25/23.
//

#ifndef PrecondViolated_h
#define PrecondViolated_h

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


#endif /* PrecondViolated_h */
