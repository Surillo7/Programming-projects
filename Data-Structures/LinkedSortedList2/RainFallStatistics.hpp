//
//  RainFallStatistics.hpp
//  Actividad10-1
//
//  Created by Carlos Surillo on 5/1/23.
//

#ifndef RainFallStatistics_hpp
#define RainFallStatistics_hpp
#include <iostream>
using namespace::std;
#include "LinkedSortedList.h"
#include "RainFallMonth.hpp"


class RainFallStatistics
{
private:
    LinkedSortedList<RainFallMonth> RainFallYear;
public:
    RainFallStatistics();
    RainFallStatistics(LinkedSortedList<RainFallMonth>);
    RainFallStatistics(const RainFallStatistics&);
    ~RainFallStatistics();
    RainFallMonth getHighestRain();
    RainFallMonth getLowestRain();
    float getAverageRain();
    friend istream& operator >> (istream&, RainFallStatistics&);
    friend ostream& operator << (ostream&, const RainFallStatistics&);
};

RainFallStatistics::RainFallStatistics()
{
}

RainFallStatistics::RainFallStatistics(LinkedSortedList<RainFallMonth> rain)
{
}

RainFallStatistics::RainFallStatistics(const RainFallStatistics& obj)
{
}

RainFallStatistics::~RainFallStatistics()
{
}

RainFallMonth RainFallStatistics::getHighestRain()
{
    float high = RainFallYear.getEntry(1).getRain();
    int pos = 1;
    RainFallMonth highMonth;
    
    for(int i = 2; i < 13; i++)
    {
        if(high < RainFallYear.getEntry(i).getRain())
        {
            high = RainFallYear.getEntry(i).getRain();
            pos = i;
        }
    }
    highMonth = RainFallYear.getEntry(pos);
    return highMonth;
}

RainFallMonth RainFallStatistics::getLowestRain()
{
    float low = RainFallYear.getEntry(1).getRain();
    int pos = 1;
    RainFallMonth lowMonth;
    
    for(int i = 2; i < 13; i++)
    {
        if(low > RainFallYear.getEntry(i).getRain())
        {
            low = RainFallYear.getEntry(i).getRain();
            pos = i;
        }
    }
    lowMonth = RainFallYear.getEntry(pos);
    return lowMonth;
}

float RainFallStatistics::getAverageRain()
{
    float avg = 0.0;
    for(int i = 1; i < 13; i++)
    {
        avg+= RainFallYear.getEntry(i).getRain();
    }
    avg = avg/12.0;
    
    return avg;
}

istream& operator >> (istream& in, RainFallStatistics& obj)
{
    RainFallMonth rains;
    
    for(int i = 1; i < 13; i++)
    {
        cin >> rains;
        obj.RainFallYear.insertSorted(rains);
    }
    return in;
}

ostream& operator << (ostream& out, const RainFallStatistics& obj)
{
    for(int i = 1; i < 13; i++)
    {
        cout << obj.RainFallYear.getEntry(i);
    }
    return out;
}

#endif /* RainFallStatistics_hpp */
