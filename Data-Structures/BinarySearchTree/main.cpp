//
//  main.cpp
//  Actividad12-1
//
//  Created by Carlos Surillo on 5/16/23.
//

#include <iostream>
using namespace::std;
#include "DB.hpp"
#include "PersonInfo.hpp"


void menu(int& choice)
{
    cout << "---Menu---" << endl;
    cout << "1. Add person"<< endl
    << "2. Remove person"<< endl
    << "3. Search person"<< endl
    << "4. Modify person"<< endl
    << "5. Display"<< endl
    << "6. Quit"<< endl;
    
    cin>> choice;
}

int main()
{
    int choice;
    DB people;
    PersonInfo tem;
    
    do {
        menu(choice);
        
        switch (choice)
        {
            case 1:
                cin>> tem;
                people.addInfo(tem);
                break;
            case 2:
                cout << "---Enter person to remove---"<< endl;
                cin>> tem;
                people.removeInfo(tem);
                break;
            case 3:
                cout<< "---Enter person to search---"<< endl;
                cin>> tem;
                people.search(tem);
                break;
            case 4:
                cout<< "---Enter person to modify---"<< endl;
                cin>> tem;
                people.modify(tem);
                break;
            case 5:
                cout<< people;
                break;
            case 6:
                cout << "Goodbye..!"<< endl;
                break;
            default:
                break;
        }
        
    } while (choice!=6);
    return 0;
}

//OUTPUT
/*
---Menu---
1. Add person
2. Remove person
3. Search person
4. Modify person
5. Display
6. Quit
1
Enter name: carlos
Enter birthdate:
Day: 9
Month: 2
Year: 2000
---Menu---
1. Add person
2. Remove person
3. Search person
4. Modify person
5. Display
6. Quit
1
Enter name: frank
Enter birthdate:
Day: 4
Month: 7
Year: 2001
---Menu---
1. Add person
2. Remove person
3. Search person
4. Modify person
5. Display
6. Quit
5
Name: carlos
Birthdate: 2/9/2000
,Name: frank
Birthdate: 7/4/2001
,---Menu---
1. Add person
2. Remove person
3. Search person
4. Modify person
5. Display
6. Quit
2
---Enter person to remove---
Enter name: carlos
Enter birthdate:
Day: 9
Month: 2
Year: 2000
---Menu---
1. Add person
2. Remove person
3. Search person
4. Modify person
5. Display
6. Quit
5
Name: frank
Birthdate: 7/4/2001
,---Menu---
1. Add person
2. Remove person
3. Search person
4. Modify person
5. Display
6. Quit
4
---Enter person to modify---
Enter name: frank
Enter birthdate:
Day: 4
Month: 7
Year: 2001
Enter name: Ricky
Enter birthdate:
Day: 2
Month: 2
Year: 2002
---Menu---
1. Add person
2. Remove person
3. Search person
4. Modify person
5. Display
6. Quit
5
Name: Ricky
Birthdate: 2/2/2002
,---Menu---
1. Add person
2. Remove person
3. Search person
4. Modify person
5. Display
6. Quit
3
---Enter person to search---
Enter name: Ricky
Enter birthdate:
Day: 2
Month: 2
Year: 2002
Ricky was found in tree!
Name: Ricky
Birthdate: 2/2/2002

---Menu---
1. Add person
2. Remove person
3. Search person
4. Modify person
5. Display
6. Quit
6
Goodbye..!
Program ended with exit code: 0
*/
