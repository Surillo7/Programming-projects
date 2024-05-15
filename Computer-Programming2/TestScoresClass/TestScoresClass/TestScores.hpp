//
//  TestScores.hpp
//  TestScoresClass
//
//  Created by Carlos Surillo on 11/22/22.
//

#ifndef TestScores_hpp
#define TestScores_hpp
#include <iostream>
using namespace::std;
const int SIZE = 3;

class TestScores
{
private:
    double scores[SIZE];
    int count;
public:
    TestScores();
    TestScores(int size);
    TestScores(const TestScores &obj);
    void setScores(double value, int index);
    double getScores(int index) const;
    double getAverage() const;
    void display() const;
    double getSize() const;
    double getHighest() const;
    double getLowest() const;
    void bubbleSort();
    void selectionSort();
};
#endif
