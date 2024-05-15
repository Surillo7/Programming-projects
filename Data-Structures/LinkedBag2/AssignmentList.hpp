//
//  AssignmentList.hpp
//  Actividad4-1
//
//  Created by Carlos Surillo on 3/31/23.
//

#ifndef AssignmentList_hpp
#define AssignmentList_hpp

#include <iostream>
#include "Assignment.hpp"
#include "LinkedBag.h"
using namespace::std;

class AssignmentList
{
private:
    LinkedBag<Assignment> homework;
public:
    AssignmentList();
    AssignmentList(LinkedBag<Assignment>);
    AssignmentList(const AssignmentList&);
    ~AssignmentList();
    void addAssignment();
    void removeHw();
    void show() const;
    void nextDue();
};

#endif /* AssignmentList_hpp */
