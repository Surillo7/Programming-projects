//
//  IntegerSet.hpp
//  Actividad7-1
//
//  Created by Carlos Surillo on 4/11/23.
//

#ifndef IntegerSet_hpp
#define IntegerSet_hpp

#include <iostream>
#include "ArrayList.h"
using namespace::std;

class IntegerSet
{
private:
    const int MAX = 101;
    ArrayList<bool> boolList;
public:
    IntegerSet();
    IntegerSet(ArrayList<bool> set);
    IntegerSet(const IntegerSet& obj);
    ~IntegerSet();
    void addElement(int num);
    void removeElement(int num);
    bool getElement(int pos) const;
    IntegerSet unionOfSets(IntegerSet &secSet);
    IntegerSet intersectionOfsets(IntegerSet &secSet);
    IntegerSet getDifference(IntegerSet &secSet);
    IntegerSet symmDifference(IntegerSet &secSet);
    IntegerSet &operator = (const IntegerSet& obj);
    bool isEqualTo(IntegerSet &secSet);
    string toString();
    friend istream & operator >> (istream& in, IntegerSet &obj);
    friend ostream & operator << (ostream& out,  IntegerSet &obj);
};


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
        if(boolList.getEntry(i))
            unionSet.addElement(i);
        else if (secSet.boolList.getEntry(i))
            unionSet.addElement(i);
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
            differenceSets.boolList.setEntry(i, true);
        }
        else if(boolList.getEntry(i) && secSet.boolList.getEntry(i))
        {
            differenceSets.boolList.setEntry(i, false);
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
    for(int i = 1; i <= MAX; i++)
    {
        if(boolList.getEntry(i))
        {
            str += to_string(i - 1) + " ";
        }
    }
    return str;
}

IntegerSet & IntegerSet::operator = (const IntegerSet& obj)
{
    for(int i = 1; i< obj.MAX; i++)
    {
        boolList.setEntry(i, obj.getElement(i));
    }
    return *this;
}

bool IntegerSet::getElement(int pos)const
{
    return boolList.getEntry(pos);
}


istream & operator >> (istream& in, IntegerSet &obj)
{
    int elements, dat;
    
    cout << "Enter how many elements in set: ";
    cin>> elements;
    
    for(int i = 0; i < elements; i++)
    {
        bool tryAgain = true;
        cout << "Enter number in set: ";
        cin>> dat;
        while(tryAgain)
        {
            try
            {
                obj.addElement(dat + 1);
                tryAgain = false;
            }
            catch(PrecondViolatedExcep e)
            {
                cout<< "Please enter a value between 0-100: ";
                cin>> dat;
            }
        }
    }
    return in;
}

ostream & operator << (ostream& out, IntegerSet &obj)
{
    string s = obj.toString();
    int i = 0;
    while(s[i] != '\0')
    {
        out<< s[i] << " ";
        i++;
    }
    return out;
}


#endif /* IntegerSet_hpp */
