//
//  AssignmentList.cpp
//  Actividad4-1
//
//  Created by Carlos Surillo on 3/31/23.
//

#include "AssignmentList.hpp"
#include "Assignment.hpp"
#include "LinkedBag.h"
#include "Node.h"
#include <iostream>
using namespace::std;

AssignmentList::AssignmentList()
{}
AssignmentList::AssignmentList(LinkedBag<Assignment>)
{}
AssignmentList::AssignmentList(const AssignmentList&)
{}
AssignmentList::~AssignmentList()
{}
void AssignmentList::addAssignment()
{
    Assignment newTask;
    cin>> newTask;
    homework.add(newTask);
}

void AssignmentList::removeHw()
{
    Assignment completedTask;
    if(homework.isEmpty())
        cout << "No homework assigned..."<< endl;
    else
    {
        cout << "---Enter completed assignment---"<<endl;
        cin>> completedTask;
        if(!homework.contains(completedTask))
            cout << "This HW is not assigned currently..." << endl;
        else
            homework.remove(completedTask);
    }
}

void AssignmentList::show() const
{
    if(homework.isEmpty())
        cout << "No homework assigned..."<< endl;
    else
    {
        cout<< "---List of assignments---"<< endl;
        homework.display();
    }
}

void AssignmentList::nextDue()
{
    Node<Assignment>* curPtr = homework.getHeadPtr();
    LinkedBag<Assignment> tempHW;
    Assignment nextTask = curPtr-> getItem();
    
    
    if(homework.isEmpty())
        cout << "No homework assigned..." << endl;
    else
    {
        while (curPtr != nullptr)
        {
            if(curPtr->getItem().getDueDate() < nextTask.getDueDate())
            {
                nextTask = curPtr->getItem();
                tempHW.clear();
                tempHW.add(nextTask);
            }
            else if(curPtr->getItem().getDueDate() == nextTask.getDueDate())
            {
                tempHW.add(curPtr->getItem());
            }
            curPtr = curPtr -> getNext();
        }
        cout<< "---The next assignment(s) due---"<< endl;
        tempHW.display();
    }
}

