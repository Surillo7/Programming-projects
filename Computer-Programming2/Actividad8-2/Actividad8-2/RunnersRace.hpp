//
//  RunnersRace.hpp
//  Actividad8-2
//
//  Created by Carlos Surillo on 1/27/23.
//

#ifndef RunnersRace_hpp
#define RunnersRace_hpp
#include "Runner.hpp"
#include <iostream>
using namespace::std;

class RunnersRace
{
    friend istream &operator >>(istream &input, RunnersRace& obj);
    friend ostream &operator << (ostream &output, RunnersRace& obj);
private:
    Runner *runners;
    int numRunners;
public:
    RunnersRace();
    RunnersRace(int);
    ~RunnersRace();
    void setRunner(int indx, Runner &obj);
    void setNumRun(int);
    Runner getRunner(int indx) const;
    int getNumRun() const;
    Runner &operator [] (int indx) const;
    void addRunner(Runner &obj);
    void eliminate();
    void search();
    void sort();
    bool operator > (const RunnersRace &obj) const;
    bool operator < (const RunnersRace &obj) const;
    const RunnersRace &operator = (const RunnersRace &obj);
};
#endif /* RunnersRace_hpp */
