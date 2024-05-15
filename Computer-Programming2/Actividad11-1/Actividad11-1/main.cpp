//
//  main.cpp
//  Actividad11-1
//
//  Created by Carlos Surillo on 2/9/23.
//

#include <iostream>
#include "SimpleVectorInterFace.h"
#include "SimpleVector.h"
#include "SearchableVector.h"
#include "SortableVector.h"
#include "Soccer.hpp"
using namespace::std;
int main()
{
    
    Soccer tmp1, tmp2;
    MyString tmp;
    int result;
    int n;

    cout << "How many players in team: ";
    cin >>n;
    
    SearchableVector<Soccer> SoccerTeam(n);
    SortableVector<Soccer> SoccerTeam1(n);
    
    cout << "Enter the team's players" << endl;
    
    for(int i = 0; i< n; i++)
    {
        cout << "Player[" << i + 1 << "]" << endl;
        cin >> SoccerTeam1[i];
    }
    
    SoccerTeam1.SelectionSort();
    
    for(int i = 0; i< n; i++)
    {
        tmp1 = SoccerTeam1.getElementAt(i);
        SoccerTeam.setValue(tmp1, i);
    }
    
    cout << "Enter player name you are searching" << endl;
    cin >> tmp;
    tmp2.setName(tmp);
    result = SoccerTeam.findItem(tmp2);
    
    if(result == -1)
        cout << "Player not in team." << endl;
    else
    {
        cout << "Player is in team." << endl;
        cout<< SoccerTeam[result];
    }
    
    
    return 0;
}


//OUTPUT
/*
 How many players in team: 3
 Enter the team's players
 Player[1]
 Name: Carlos
 Number: 3
 Points: 12
 Player[2]
 Name: Ronny
 Number: 7
 Points: 55
 Player[3]
 Name: Bale
 Number: 11
 Points: 19
 Enter player name you are searching
 Carlos
 Player is in team.
 Player's name: Carlos
 Player's number: 3
 Player's scored points: 12
 Program ended with exit code: 0
 */
