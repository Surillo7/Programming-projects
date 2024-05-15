//
//  main.cpp
//  LinkedBag
//
//  Created by Carlos Surillo on 3/21/23.
//

#include <iostream>
#include "LinkedBag.h"
#include "BagInterface.h"
#include "Node.h"
using namespace::std;
 
int main(){
      LinkedBag<int> list;
 
      list.add(2);
      list.display();
      list.add(4);
      list.display();
      list.add(8);
      list.display();
      list.add(3);
      list.display();
      list.remove(8);
      list.display();
      list.remove(2);
      list.display();
      list.add(5);
      list.display();
      list.add(6);
      list.display();
      list.add(3);
      list.display();
      int x = 3;
      int frequency = list.getFrequencyOf(x);
      cout << "El elemento "<<x<<" esta " << frequency << "dentro de las lista" << endl;
      LinkedBag<int>  list2(list); //Copy Constructor
      cout << "Lista original\n";
      list.display();
      cout << "Lista copeada\n";
      list2.display();
 
      if (list.contains(x)){
           cout << "El elemento "<<x<<" esta dentro de la lista\n";
      }//end if
      else {
           cout << "El elemento " << x << " no se encuentra  dentro de la lista\n";
      }//end else
      system("pause");
      return 0;
}//end main
