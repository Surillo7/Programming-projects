//
//  main.cpp
//  Actividad6-1
//
//  Created by Carlos Surillo on 1/14/23.
//

#include <iostream>
#include "RestaurantBill.hpp"
#include <iomanip>
using namespace::std;

void menu(int &choice);
char temp1[20] = "Plain Egg" ;
char temp2[20] = "Bacon and Egg" ;
char temp3[20] = "Muffin" ;
char temp4[20] = "French Toast" ;
char temp5[20] = "Fruit Basket" ;
char temp6[20] = "Cereal" ;
char temp7[20] = "Coffee" ;
char temp8[20] = "Tea" ;


int main()
{
    const double TAX = 0.05;
    int choice;
    double qty;
    double total = 0;
    double totAmount = 0;
    double totTax = 0;
    RestaurantBill it1(temp1, 1.45), it2(temp2, 2.45), it3(temp3, 0.99), it4(temp4, 1.99), it5(temp5, 2.49), it6(temp6, 0.69), it7(temp7, 0.50), it8(temp8, 0.75);
    
    RestaurantBill* myMenu;
    myMenu = new RestaurantBill[8];
    
    myMenu[0] = it1;
    myMenu[1] = it2;
    myMenu[2] = it3;
    myMenu[3] = it4;
    myMenu[4] = it5;
    myMenu[5] = it6;
    myMenu[6] = it7;
    myMenu[7] = it8;

    
    cout << "Choose items to order by selecting the number on the left" << endl << endl;
    
    cout << "------Menu------" << endl;
    cout <<"1. Plain Egg" << endl;
    cout <<"2. Bacon and Egg" << endl;
    cout <<"3. Muffin" << endl;
    cout <<"4. French Toast"<< endl ;
    cout <<"5. Fruit Basket" << endl;
    cout <<"6. Cereal" << endl;
    cout <<"7. Coffee" << endl;
    cout <<"8. Tea" << endl;
    cout <<"9. Pay order" << endl<< endl;
    
    do
    {
        menu(choice);
        
        switch (choice)
        {
            case 1:
                cout << "Quantity: ";
                cin>> qty;
                myMenu[0].setQnt(qty);
                break;
            case 2:
                cout << "Quantity: ";
                cin>> qty;
                myMenu[1].setQnt(qty);
                break;
            case 3:
                cout << "Quantity: ";
                cin>> qty;
                myMenu[2].setQnt(qty);
                break;
            case 4:
                cout << "Quantity: ";
                cin>> qty;
                myMenu[3].setQnt(qty);
                break;
            case 5:
                cout << "Quantity: ";
                cin>> qty;
                myMenu[4].setQnt(qty);
                break;
            case 6:
                cout << "Quantity: ";
                cin>> qty;
                myMenu[5].setQnt(qty);
                break;
            case 7:
                cout << "Quantity: ";
                cin>> qty;
                myMenu[6].setQnt(qty);
                break;
            case 8:
                cout << "Quantity: ";
                cin>> qty;
                myMenu[7].setQnt(qty);
                break;
            case 9:
                
                for (int i = 0; i < 8; i++)
                {
                    if(myMenu[i].getQnt() > 0)
                    {
                        cout << left << myMenu[i].getQnt() <<" " << setw(15) << myMenu[i].getName();
                        cout<< "$" << setw(10) << fixed << setprecision(2) << myMenu[i].getTotalPlatePrice() << endl;
                        total += myMenu[i].getTotalPlatePrice();
                        cout.unsetf(std::ios::fixed);
                    }
                }
                
                totTax = total * TAX;
                cout << left << setw(15) << "Tax:" << "$" << setw(11) << fixed << setprecision(2) << totTax << endl;
                
                totAmount = total + totTax;
                
                cout << left << setw(15) << "Amount Due:" << "$"<< setw(10) << fixed << setprecision(2) << totAmount << endl;
        
                choice++;
                break;
        }
    } while (choice != 10);
    
    delete [] myMenu;
    return 0;

}

void menu(int &choice)
{
    cout << "Enter choice: ";
    cin >> choice;
}



//OUTPUT
/*
 Choose items to order by selecting the number on the left

 ------Menu------
 1. Plain Egg
 2. Bacon and Egg
 3. Muffin
 4. French Toast
 5. Fruit Basket
 6. Cereal
 7. Coffee
 8. Tea
 9. Pay order

 Enter choice: 3
 Quantity: 1
 Enter choice: 7
 Quantity: 1
 Enter choice: 8
 Quantity: 1
 Enter choice: 9
 1 Muffin         $0.99
 1 Coffee         $0.50
 1 Tea            $0.75
 Tax:           $0.11
 Amount Due:    $2.35
 Program ended with exit code: 0
 */
