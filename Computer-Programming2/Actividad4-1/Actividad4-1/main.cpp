//
//  main.cpp
//  Actividad4-1
//
//  
//

#include "swimmingPool.hpp"
#include <iostream>
using namespace::std;

int main()
{
    swimmingPool myPool;
    swimmingPool myPool2(10, 6, 7, 10, 8);
    
    int aw, al, ad;
    double rf, rd;
    
    cout << "Enter Pool data: " << endl;
    cout << "Width(ft): ";
    cin>> aw;
    cout << "Length(ft): ";
    cin>> al;
    cout<< "Depth(ft): ";
    cin>> ad;
    cout << "Rate to fill(gall/min): ";
    cin>> rf;
    cout << "Rate to drain(gall/min): ";
    cin>> rd;
    
    cout << endl << endl;
    
    cout << "Pool Data #1: " << endl;
    myPool.setWidth(aw).setLength(al).setDepth(ad).setRateFill(rf).setRateDrain(rd).display();
    cout << endl<< endl;
    cout << "Pool Data#2: " << endl;
    myPool2.display();
    cout << endl <<endl;
    
    swimmingPool myPool3(myPool);
    cout << "Pool Data (Copy Cunstructor): " << endl;
    myPool3.display();
    cout << endl;
    
    return 0;
}


//OUTPUT
/*
 Enter Pool data:
 Width(ft): 12
 Length(ft): 10
 Depth(ft): 7
 Rate to fill(gall/min): 30
 Rate to drain(gall/min): 45


 Pool Data #1:
 Length(ft): 10
 Width(ft): 12
 Depth(ft): 7
 Amount of water (gall): 6268.66
 Rate to fill(gal/min): 30
 Rate to drain(gal/min): 45
 Time to fill(min): 208.955
 Time to drain(min): 139.303


 Pool Data#2:
 Length(ft): 6
 Width(ft): 10
 Depth(ft): 7
 Amount of water (gall): 3134.33
 Rate to fill(gal/min): 10
 Rate to drain(gal/min): 8
 Time to fill(min): 313.433
 Time to drain(min): 391.791


 Pool Data (Copy Cunstructor):
 Length(ft): 10
 Width(ft): 12
 Depth(ft): 7
 Amount of water (gall): 6268.66
 Rate to fill(gal/min): 30
 Rate to drain(gal/min): 45
 Time to fill(min): 208.955
 Time to drain(min): 139.303

 Program ended with exit code: 0
 */
