//
//  main.cpp
//  Actividad7-1
//
//  Created by Carlos Surillo on 1/12/23.
//

#include <iostream>
#include "Course.hpp"
using namespace::std;





int main()
{
    
    Course *myCourses;
    
    
    int n;
    cout << "Enter number of classes in tuition: ";
    cin >> n;
    
    myCourses = new Course [n];
    
    for (int i = 0; i < n; i++)
    {
        cout << "Class #" << i+1 << ":" << endl;
        cin>> myCourses[i];
        cout << endl;
    }
    
    cout << "---------Student's classes----------" << endl << endl;
    
    for (int i = 0; i < n; i++)
    {
        cout << "Class #" << i+1 << ":" << endl;
        cout<< myCourses[i];
    }
    
    delete [] myCourses;
    return 0;
}



//OUTPUT
/*
 Enter number of classes in tuition: 4
 Class #1:
 Course Name: CECS
 Course Code: 2004
 Course Term: WI
 Instructor:
 First Name: Florencia
 Last Name: Sepulveda
 Office Number: virtual
 TextBook:
 Title: n/a
 Author name: -
 Publisher: -

 Class #2:

 Course Name: CECS
 Course Code: 2222
 Course Term: WI
 Instructor:
 First Name: Claudia
 Last Name: Talavera
 Office Number: P108
 TextBook:
 Title: How To Program c++
 Author name: Gaddis
 Publisher: Gaddis

 Class #3:
 CECS
 Course Name: Course Code: 2223
 Course Term: WI
 Instructor:

 First Name: Last Name: De la Torre
 Office Number: 109
 TextBook:
 Title: -
 Author name: -
 Publisher: -

 Class #4:

 Course Name: EE
 Course Code: 1130
 Course Term: WI
 Instructor:
 First Name: Angel
 Last Name: Fuentes
 Office Number: 310
 TextBook:
 Title: -
 Author name: -
 Publisher: -

 ---------Student's classes----------

 Class #1:
 Course Name: CECS
 Course Code: 2004
 Course Term: WI
 ------Instructor-------
 First Name: Florencia
 Last Name: Sepulveda
 Office Number: virtual

 -------TextBook--------
 Title: n/a
 Author name: -
 Publisher: -

 Class #2:
 Course Name: CECS
 Course Code: 2222
 Course Term: WI
 ------Instructor-------
 First Name: Claudia
 Last Name: Talavera
 Office Number: 108P

 -------TextBook--------
 Title: How To Program c++
 Author name: Gaddis
 Publisher: Gaddis

 Class #3:
 Course Name: ECS
 Course Code: 2223
 Course Term: WI
 ------Instructor-------
 First Name:
 Last Name: De la Torre
 Office Number: 109

 -------TextBook--------
 Title: -
 Author name: -
 Publisher: -

 Class #4:
 Course Name: EE
 Course Code: 1130
 Course Term: WI
 ------Instructor-------
 First Name: Angel
 Last Name: Fuentes
 Office Number: 310

 -------TextBook--------
 Title: -
 Author name: -
 Publisher: -

 Program ended with exit code: 0
 */
