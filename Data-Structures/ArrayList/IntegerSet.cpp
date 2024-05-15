//
//  IntegerSet.cpp
//  Actividad7-1
//
//  Created by Carlos Surillo on 4/11/23.
//

/*#include "IntegerSet.hpp"
#include <iostream>
#include <string>
using namespace::std;

IntegerSet::IntegerSet()
{
    for(int i = 1; i <= MAX; i++)
    {
        boolList.insert(i, false);
    }
}
IntegerSet::IntegerSet(ArrayList<bool> set)
{
    for(int i = 1; i <= MAX; i++)
    {
        boolList.insert(i, set.getEntry(i));
    }
}
IntegerSet::IntegerSet(const IntegerSet& obj)
{
    for(int i = 1; i <= MAX; i++)
    {
        boolList.insert(i, obj.boolList.getEntry(i));
    }
}
IntegerSet::~IntegerSet()
{
    
}
void IntegerSet::addElement(int num)
{
    boolList.setEntry(num, true);
}

void IntegerSet::removeElement(int num)
{
    boolList.setEntry(num, false);
}

IntegerSet IntegerSet::unionOfSets(IntegerSet &secSet)
{
    IntegerSet unionSet;
    for(int i = 1; i <= MAX; i++)
    {
        if(boolList.getEntry(i) || secSet.boolList.getEntry(i))
        {
            unionSet.addElement(i);
        }
    }
    return unionSet;
}
IntegerSet IntegerSet::intersectionOfsets(IntegerSet &secSet)
{
    IntegerSet intersectionSet;
    for(int i = 1; i <= MAX; i++)
    {
        if(boolList.getEntry(i) && secSet.boolList.getEntry(i))
        {
            intersectionSet.addElement(i);
        }
    }
    return intersectionSet;
}

IntegerSet IntegerSet::getDifference(IntegerSet &secSet)
{
    IntegerSet differenceSets;
    for(int i = 1; i <= MAX; i++)
    {
        if(boolList.getEntry(i) && !secSet.boolList.getEntry(i))
        {
            differenceSets.addElement(i);
        }
    }
    return differenceSets;
}
IntegerSet IntegerSet::symmDifference(IntegerSet &secSet)
{
    IntegerSet symmetricDiff;
    for(int i = 1; i <= MAX; i++)
    {
        if(boolList.getEntry(i) && !secSet.boolList.getEntry(i))
        {
            symmetricDiff.addElement(i);
        }
        else if (!boolList.getEntry(i) && secSet.boolList.getEntry(i))
        {
            symmetricDiff.addElement(i);
        }
    }
    return symmetricDiff;
}


bool IntegerSet::isEqualTo(IntegerSet &secSet)
{
    bool flag = true;
    int i = 1;
    while (i <= MAX && flag)
    {
        if(boolList.getEntry(i) != secSet.boolList.getEntry(i))
        {
            flag = false;
            return flag;
        }
        i++;
    }
    return flag;
}


string IntegerSet::toString()
{
    string str = "";
    for(int i = 1; i < MAX; i++)
    {
        if(boolList.getEntry(i))
        {
            str += to_string(i) + " ";
        }
    }
    return str;
}



istream & operator >> (istream& in, IntegerSet &obj)
{
    IntegerSet list;
    int elements, dat;
    
    cout << "Enter how many elements in set: ";
    cin>> elements;
    
    for(int i = 0; i < elements; i++)
    {
        //bool tryAgain = true;
        cout << "Enter number in set: ";
        cin>> dat;
        //while(tryAgain)
        //{
           // try
           // {
                list.addElement(dat);
               // tryAgain = false;
            //}
            //catch(PrecondViolatedExcep e)
            //{
            //    cout<< "Please enter a value between 0-100: ";
           //     cin>> num;
           // }
        }
    //}
    return in;
}

ostream & operator << (ostream& out, IntegerSet &obj)
{
    for(int i = 1; i<=obj.MAX; i++)
    {
        if(obj.boolList.getEntry(i))
        {
            out << i << " ";
        }
        out << endl;
    }
    return out;
}
*/
