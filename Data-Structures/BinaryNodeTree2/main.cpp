//
//  main.cpp
//  BinaryNodeTree2
//
//  Created by Carlos Surillo on 5/9/23.
//



#include<iostream>
using namespace::std;
#include "BinaryNodeTree.h"
template<class T>
void display(T & anItem){
      cout << anItem << ",";
}
int main()
{
    
    BinaryNodeTree <char> tree1, tree2,tree3, tree4, tree5;
    BinaryNodeTree <char> tree6;
    tree1.setRootData('F');
    tree1.attachLeft('G');
    
    tree2.setRootData('E');
    tree2.attachRightSubtree(&tree1);
    
    tree3.setRootData('D');
    tree3.attachLeftSubtree(&tree2);
    
    tree4.setRootData('C');
    tree4.attachRightSubtree(&tree3);
    
    tree5.setRootData('B');
    tree5.attachLeftSubtree(&tree4);

    
    BinaryNodeTree <char> binTree('A', &tree6 , &tree5);
    cout << "\nRecorrido inorder:";
    binTree.inorderTraverse(display);
    cout << "\nRecorrido postorder:";
    binTree.postorderTraverse(display);
    cout << "\nRecorrido preorder:";
    binTree.preorderTraverse(display);
    cout << endl;
    cout << "La cantidad de nodos dentro del arbol es:"<< binTree.getNumberOfNodes() << endl;
    cout << "La altura maxima del arbol es:"<< binTree.getHeight() << endl;
    return 0;
}//end main

//OUTPUT1
/*
 Recorrido inorder:D,B,E,A,F,C,G,
 Recorrido postorder:D,E,B,F,G,C,A,
 Recorrido preorder:A,B,D,E,C,F,G,
 La cantidad de nodos dentro del arbol es:7
 La altura maxima del arbol es:3
 Program ended with exit code: 0


//OUTPUT2

 Recorrido inorder:G,F,D,B,E,A,C,
 Recorrido postorder:G,F,D,E,B,C,A,
 Recorrido preorder:A,B,D,F,G,E,C,
 La cantidad de nodos dentro del arbol es:7
 La altura maxima del arbol es:5
 Program ended with exit code: 0
 
//OUTPUT3
 Recorrido inorder:A,C,E,G,F,D,B,
 Recorrido postorder:G,F,E,D,C,B,A,
 Recorrido preorder:A,B,C,D,E,F,G,
 La cantidad de nodos dentro del arbol es:7
 La altura maxima del arbol es:7
 Program ended with exit code: 0
 */

