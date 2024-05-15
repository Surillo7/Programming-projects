//
//  DB.h
//  Actividad12-1
//
//  Created by Carlos Surillo on 5/16/23.
//

#ifndef DB_h
#define DB_h

#include "PersonInfo.h"
#include "BinarySearchTree.h"

class DB
{
private:
    BinarySearchTree<PersonInfo> BST;
    int numberOfPersons;
public:
    DB();
    DB(BinarySearchTree<PersonInfo>, int);
    DB(const DB&);
    ~DB();
    void addInfo(PersonInfo);
    void removeInfo(PersonInfo);
    void search(PersonInfo);
    void modify(PersonInfo);
    friend ostream & operator << (ostream&, const DB&);
};


template<class T>
void display(T& anItem)
{
    cout << anItem << ",";
}

DB::DB():BST()
{
    numberOfPersons = 0;
}

DB::DB(BinarySearchTree<PersonInfo> Bst2, int nOp)
{
    BST = Bst2;
    numberOfPersons = nOp;
}

DB::DB(const DB& obj)
{
    BST = obj.BST;
    numberOfPersons = obj.numberOfPersons;
}

DB::~DB()
{
}

void DB::addInfo(PersonInfo PI)
{
    BST.add(PI);
    numberOfPersons++;
}

void DB::removeInfo(PersonInfo PI)
{
    if(BST.isEmpty())
        cout<< "Tree is empty!" << endl;
    else
        BST.remove(PI);
    
    numberOfPersons--;
}

void DB::search(PersonInfo PI)
{
    if(BST.isEmpty())
        cout << "Tree is empty!"<< endl;
    else
    {
        if(BST.contains(PI))
        {
            cout<< PI.getName() << " was found in tree!" << endl;
            cout << BST.getEntry(PI) << endl;
        }
        else
        {
            cout<< "Person not found in tree..."<<endl;
        }
    }
}

void DB::modify(PersonInfo PI)
{
    if(BST.isEmpty())
        cout << "Tree is empty!"<< endl;
    else
    {
        if(BST.contains(PI))
        {
            PersonInfo tmp;
            cin>> tmp;
            BST.remove(PI);
            addInfo(tmp);
        }
        else
        {
            cout<< "Person not found in tree..."<<endl;
        }
    }
}


ostream & operator << (ostream& out, const DB& obj)
{
    if(obj.BST.isEmpty())
        cout<< "Tree is empty..." << endl;
    else
        obj.BST.inorderTraverse(display);
    return out;
}

#endif /* DB_h */
