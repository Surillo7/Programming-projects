//
//  Runner.hpp
//  Actividad8-2
//
//  Created by Carlos Surillo on 1/25/23.
//

#ifndef Runner_hpp
#define Runner_hpp
#include <iostream>
#include "Time.hpp"
using namespace::std;

class Runner
{
private:
    char* firstName;
    char* lastName;
    Time time;
public:
    Runner();
    Runner(char*, char*, Time &aTime);
    Runner(const Runner&);
    ~Runner();
    void setTime(Time &aTime);
    void setFirst(char*);
    void setLast(char*);
    char* getFirst() const;
    char* getLast() const;
    Time & getTime();
    bool operator > (const Runner &obj) const;
    bool operator < (const Runner &obj) const;
    const Runner &operator = (const Runner &obj);
    bool operator == (const Runner &obj) const;
    friend istream &operator >>(istream &input, Runner& obj);
    friend ostream &operator << (ostream &output, Runner& obj);
};
#endif /* Runner_hpp */
