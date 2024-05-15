//
//  main.cpp
//  Actividad10-1
//
//  Created by Carlos Surillo on 5/1/23.
//

#include <iostream>
using namespace::std;
#include "RainFallStatistics.hpp"



int main()
{
    RainFallStatistics rainStats;
    
    cin >> rainStats;
    
    
    cout << endl<< "---Month with highest rainfall---"<< endl;
    cout << rainStats.getHighestRain() << endl;
    
    cout << "---Month with lowest rainfall---"<< endl;
    cout << rainStats.getLowestRain() << endl;
    
    cout<< "Average rain in year: " << rainStats.getAverageRain() << endl;
    
    
    return 0;
}

//OUTPUT
/*
 Enter Month: January
 Enter rainfall: 10
 Enter Month: February
 Enter rainfall: 12
 Enter Month: March
 Enter rainfall: 8
 Enter Month: April
 Enter rainfall: 6
 Enter Month: May
 Enter rainfall: 6
 Enter Month: June
 Enter rainfall: 6
 Enter Month: July
 Enter rainfall: 7
 Enter Month: August
 Enter rainfall: 14
 Enter Month: September
 Enter rainfall: 13
 Enter Month: October
 Enter rainfall: 10
 Enter Month: November
 Enter rainfall: 9
 Enter Month: December
 Enter rainfall: 11
 
 ---Month with highest rainfall---
 Month: August
 Rainfall: 14

 ---Month with lowest rainfall---
 Month: June
 Rainfall: 6

 Average rain in year: 9.33333
 Program ended with exit code: 0
 */
