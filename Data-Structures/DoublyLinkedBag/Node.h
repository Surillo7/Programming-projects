//
//  Node.h
//  Actividad4-2
//
//  Created by Carlos Surillo on 4/1/23.
//

#ifndef Node_h
#define Node_h

#include <cstddef>
#include <iostream>
using namespace::std;

template<class ItemType>
class Node
{
private:
   ItemType item; // A data item
   Node<ItemType>* next; // Pointer to next node
    Node<ItemType>* prev; //pointer to previous node
   
public:
    Node();
    Node(const ItemType& anItem);
    Node(const ItemType& anItem, Node<ItemType>* nextNodePtr, Node<ItemType>* prevNodePtr);
    void setItem(const ItemType& anItem);
    void setNext(Node<ItemType>* nextNodePtr);
    void setPrev(Node<ItemType>* prevNodePtr);
    ItemType getItem() const;
    Node<ItemType>* getNext() const;
    Node<ItemType>* getPrev() const;
}; // end Node


template<class ItemType>
Node<ItemType>::Node() : next(nullptr), prev(nullptr)
{
} // end default constructor

template<class ItemType>
Node<ItemType>::Node(const ItemType& anItem) : item(anItem), next(nullptr), prev(nullptr)
{
} // end constructor

template<class ItemType>
Node<ItemType>::Node(const ItemType& anItem, Node<ItemType>* nextNodePtr, Node<ItemType>* prevNodePtr): item(anItem), next(nextNodePtr), prev(prevNodePtr)
{
} // end constructor

template<class ItemType>
void Node<ItemType>::setItem(const ItemType& anItem)
{
   item = anItem;
} // end setItem

template<class ItemType>
void Node<ItemType>::setNext(Node<ItemType>* nextNodePtr)
{
   next = nextNodePtr;
} // end setNext

template<class ItemType>
void Node<ItemType>::setPrev(Node<ItemType>* prevNodePtr)
{
   prev = prevNodePtr;
} // end setNext

template<class ItemType>
ItemType Node<ItemType>::getItem() const
{
   return item;
} // end getItem

template<class ItemType>
Node<ItemType>* Node<ItemType>::getNext() const
{
   return next;
} // end getNext

template<class ItemType>
Node<ItemType>* Node<ItemType>::getPrev() const
{
   return prev;
} // end getNext


#endif /* Node_h */
