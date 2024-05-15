//
//  TestScores.cpp
//  TestScoresClass
//
//  Created by Carlos Surillo on 11/22/22.
//

#include <iostream>
using namespace::std;
#include "TestScores.hpp"

TestScores::TestScores()
{
    count = 5;
    for (int index = 0; index < getSize(); index++)
    {
        setScores(0.0, index);
    }
}

TestScores::TestScores(int size)
{
    count = size;
    for(int index = 0; index < getSize(); index++)
    {
        setScores(0.0, index);
    }
}

TestScores::TestScores(const TestScores &obj)
{
    count = obj.getSize();
    for(int index = 0; index < getSize(); index++)
    {
        setScores(obj.getScores(index), index);
    }
}

void TestScores::setScores(double value, int index)
{
    scores[index] = value;
}

double TestScores::getScores(int index) const
{
    return (scores[index]);
}

double TestScores::getAverage() const
{
    double sum = 0.0;
    for (int index = 0; index < getSize(); index++)
    {
        sum+= getScores(index);
    }
    return (sum/ getSize());
}

void TestScores::display() const
{
    cout << "El contenido del arreglo es: " << endl;
    for(int index = 0; index < getSize(); index++)
    {
        cout<< getScores(index) << "  " <<  endl;
    }
    cout << "El promedio de los numeros contenidos en el arreglo es: " << getAverage() << endl;
    
    cout << "La nota mas alta: " << getHighest()<< endl;
    cout << "La nota mas baja: " << getLowest() << endl;
}

double TestScores::getSize() const
{
    return count;
}

double TestScores::getLowest() const
{
    int index = 0;
    double lowest = getScores(index);
    for (int i = index + 1; i < getSize(); i++)
    {
        if(lowest > getScores(i))
        {
            lowest = getScores(i);
        }
    }
    return lowest;
}

double TestScores::getHighest() const
{
    int index = 0;
    double highest = getScores(index);
    for (int i = index + 1; i < getSize(); i++)
    {
        if(highest < getScores(i))
        {
            highest = getScores(i);
        }
    }
    return highest;
}

void TestScores::bubbleSort() 
{
    //hightolow
    cout << "\nCalling BubbleSort..." << endl;
    double temp = 0;
    for (int i = 0; i < getSize() -1; i++)
    {
        for(int j = i + 1; j < getSize(); j++)
        {
            if(scores[i] < scores[j])
            {
                temp = scores[i];
                scores[i] = scores[j];
                scores[j] = temp;
            }
        }
    }
    cout << "El contenido en orden de mayor a menor: " << endl;
    for(int index = 0; index < getSize(); index++)
    {
        cout<< getScores(index) << "  " <<  endl;
    }
}

void TestScores::selectionSort()
{
    //lowtohigh
    cout<< "\nCalling SelectionSort..."<< endl;
    double temp = 0, highest = 0;
    int highIndex = -1;
    for (int i = 0; i < getSize() -1; i++)
    {
        highest = scores[i];
        for(int j = i + 1; j < getSize(); j++)
        {
            if(highest > scores[j])
            {
                highest = scores[j];
                highIndex = j;
            }
        }
        if (highIndex > -1)
        {
            temp = scores[i];
            scores[i] = highest;
            scores[highIndex] = temp;
            highIndex = -1;
        }
    }
    cout << "El contenido en orden de menor a mayor: " << endl;
    for(int index = 0; index < getSize(); index++)
    {
        cout<< getScores(index) << "  " <<  endl;
    }
}
