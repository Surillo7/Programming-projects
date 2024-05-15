//
//  RunnersRace.cpp
//  Actividad8-2
//
//  Created by Carlos Surillo on 1/27/23.
//

#include "RunnersRace.hpp"
#include <iostream>
using namespace::std;

RunnersRace::RunnersRace()
{
    char temp[20] = " ";
    Time time;
    numRunners = 0;
    runners = new Runner[numRunners];
    for(int i=0; i < numRunners; i++)
    {
        runners[i].setTime(time);
        runners[i].setFirst(temp);
        runners[i].setLast(temp);
    }
}

RunnersRace::RunnersRace(int aN)
{
    char temp[20] = " ";
    Time time;
    numRunners = aN;
    runners = new Runner[numRunners];
    for(int i=0; i < numRunners; i++)
    {
        runners[i].setTime(time);
        runners[i].setFirst(temp);
        runners[i].setLast(temp);
    }
}
RunnersRace::~RunnersRace()
{
    delete [] runners;
}

void RunnersRace::setRunner(int indx, Runner &obj)
{
    if(indx < 0 || indx > numRunners)
    {
        cerr << "Index out of bound." << endl;
        indx = 0;
    } else
    {
        runners[indx].setFirst(obj.getFirst());
        runners[indx].setLast(obj.getLast());
        runners[indx].setTime(obj.getTime());
    }
}

void RunnersRace::setNumRun(int aN)
{
    numRunners = aN;
}

Runner RunnersRace::getRunner(int indx) const
{
    if(indx < 0 || indx > numRunners)
    {
        cerr << "Index out of bound." << endl;
        indx = 0;
    }
    return runners[indx];
}

int RunnersRace::getNumRun() const
{
    return numRunners;
}

Runner & RunnersRace::operator [] (int indx) const
{
    if(indx < 0 || indx > numRunners)
    {
        cerr << "Index out of bound." << endl;
        indx = 0;
    }
    return runners[indx];
}
void RunnersRace::addRunner(Runner &obj)
{
    int indx = numRunners;
    Runner *temp;
    
    if(numRunners == 0)
    {
        runners = new Runner[1];
    } else
    {
        temp = new Runner [numRunners];
        
        for(int i = 0; i < numRunners; i++)
        {
            temp[i] = runners[i];
        }
        
        delete [] runners;
        runners = new Runner [numRunners + 1];
        
        for(int i = 0; i < numRunners; i++)
        {
            runners[i] = temp[i];
        }
    }
    
    setRunner(indx, obj);
    numRunners++;
}

bool RunnersRace::operator > (const RunnersRace &obj) const
{
    if (*runners > *obj.runners)
        return true;
    else
        return false;
}

bool RunnersRace::operator < (const RunnersRace &obj) const
{
    if (*runners < *obj.runners)
        return true;
    else
        return false;
}
const RunnersRace &RunnersRace:: operator = (const RunnersRace &obj)
{
    delete [] runners;
    runners = new Runner[obj.numRunners];
    for (int i = 0; i < numRunners; i++)
    {
        runners[i] = obj.runners[i];
    }
    return *this;
}

void RunnersRace::eliminate()
{
    
    int cnt = 0;
        
    char fN[20];
    char lN[20];
    
    if (numRunners == 0)
        cerr << "No runners" << endl;
    else
    {
        
        cin.ignore();
        
        cout << "Enter runner to eliminate: " << endl;
        
        cout << "First Name: ";
        cin.getline(fN, 20);
        
        cout << "Last Name: ";
        cin.getline(lN, 20);
        
        for (int i = 0; i < numRunners; i++)
        {
            if(strcmp(fN, runners[i].getFirst()) == 0 && strcmp(lN, runners[i].getLast()) == 0)
            {
                for(int j = i; j < numRunners - 1; j++)
                {
                    setRunner(j, runners[j+1]);
                }
                cnt++;
            }
        }
        if(cnt == 0)
            cerr << "Runner not found" << endl;
        else
            numRunners--;
    }
}

void RunnersRace::sort()
{
    Runner temp;
    
    if (numRunners == 0)
        cerr << "No runners" << endl;
    else
    {
        for (int i = 0; i < numRunners - 1; i++)
        {
            for(int j = i + 1; j < numRunners; j++)
            {
                if (runners[i] > runners[j])
                {
                    temp = runners[i];
                    runners[i] = runners[j];
                    runners[j] = temp;
                }
            }
        }
    }
}

void RunnersRace::search()
{
    char fN[20];
    char lN[20];
    
    
    if (numRunners == 0)
        cerr << "No runners" << endl;
    else
    {
        cin.ignore();
        
        cout << "Enter runner to search: " << endl;
        
        cout << "First Name: ";
        cin.getline(fN, 20);
        
        cout << "Last Name: ";
        cin.getline(lN, 20);
        
        for (int i = 0; i < numRunners; i++)
        {
            if(strcmp(fN, runners[i].getFirst()) == 0 && strcmp(lN, runners[i].getLast()) == 0)
            {
                cout << runners[i];
            }
        }
    }
}

istream &operator >>(istream &input, RunnersRace& obj)
{
    Runner run;
    
    input >> run;
    
    obj.addRunner(run);
    
    return input;
}

ostream &operator << (ostream &output, RunnersRace& obj)
{
    if (obj.numRunners == 0)
        cerr << "No runners" << endl;
    else
    {
        for (int i = 0; i < obj.numRunners; i++)
        {
            output << obj.runners[i] << endl;
        }
    }
    return output;
}

