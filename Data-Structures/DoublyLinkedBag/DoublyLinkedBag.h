//
//  DoublyLinkedBag.h
//  Actividad4-2
//
//  Created by Carlos Surillo on 4/1/23.
//

#ifndef DoublyLinkedBag_h
#define DoublyLinkedBag_h

#include <cstddef>
#include <iostream>
#include <vector>
using namespace::std;
#include "BagInterface.h"
#include "Node.h"

template<class ItemType>
class DoublyLinkedBag : public BagInterface<ItemType>
{
private:
    Node<ItemType>* headPtr; // Pointer to first node
    Node<ItemType>* tailPtr; // Pointer to last node
    int itemCount;           // Current count of bag items
   
    // Returns either a pointer to the node containing a given entry
    // or the null pointer if the entry is not in the bag.
    Node<ItemType>* getPointerTo(const ItemType& target) const;
   
public:
    DoublyLinkedBag();
    DoublyLinkedBag(const DoublyLinkedBag<ItemType>& aBag); // Copy constructor
    virtual ~DoublyLinkedBag();              // Destructor should be virtual
    int getCurrentSize() const;
    bool isEmpty() const;
    bool add(const ItemType& newEntry);
    bool remove(const ItemType& anEntry);
    void removeHead();
    void clear();
    bool contains(const ItemType& anEntry) const;
    int getFrequencyOf(const ItemType& anEntry) const;
    vector<ItemType> toVector() const;
    void display() const;
    void displayTail() const;
    void rotateRight(const ItemType& anEntry);
    void rotateLeft(const ItemType& anEntry);
    bool addtoback(const ItemType& newEntry);
    Node<ItemType>* getHeadPtr() const;
    Node<ItemType>* getTailPtr() const;
    
}; // end LinkedBag



template<class ItemType>
DoublyLinkedBag<ItemType>::DoublyLinkedBag() : headPtr(nullptr), tailPtr(nullptr), itemCount(0)
{
}  // end default constructor

template<class ItemType>
DoublyLinkedBag<ItemType>::DoublyLinkedBag(const DoublyLinkedBag<ItemType>& aBag)
{
    itemCount = aBag.itemCount;
    Node<ItemType>* origChainPtr = aBag.headPtr; // Points to nodes in original chain
    Node<ItemType>* origChainTailPtr = aBag.tailPtr;
       
   
   if (origChainPtr == nullptr)
      headPtr = nullptr;  // Original bag is empty
   else
   {
      // Copy first node
      headPtr = new Node<ItemType>();
      headPtr->setItem(origChainPtr->getItem());
      
      // Copy remaining nodes
      Node<ItemType>* newChainPtr = headPtr;      // Points to last node in new chain
      origChainPtr = origChainPtr->getNext();     // Advance original-chain pointer
      
      while (origChainPtr != nullptr)
      {
          // Get next item from original chain
          ItemType nextItem = origChainPtr->getItem();
         
          // Create a new node containing the next item
          Node<ItemType>* newNodePtr = new Node<ItemType>(nextItem);
         
          // Link new node to end of new chain
          newChainPtr->setNext(newNodePtr);
         
          newChainPtr-> setPrev(newChainPtr);
          // Advance pointer to new last node
          newChainPtr = newChainPtr->getNext();
         
          // Advance original-chain pointer
          origChainPtr = origChainPtr->getNext();
      }   // end while
      
      newChainPtr->setNext(nullptr);              // Flag end of chain
   }  // end if
}  // end copy constructor

template<class ItemType>
DoublyLinkedBag<ItemType>::~DoublyLinkedBag()
{
   clear();
}  // end destructor

template<class ItemType>
bool DoublyLinkedBag<ItemType>::isEmpty() const
{
    return itemCount == 0;
}  // end isEmpty

template<class ItemType>
int DoublyLinkedBag<ItemType>::getCurrentSize() const
{
    return itemCount;
}  // end getCurrentSize

template<class ItemType>
bool DoublyLinkedBag<ItemType>::add(const ItemType& newEntry)
{
   // Add to beginning of chain: new node references rest of chain;
   // (headPtr is null if chain is empty)
        Node<ItemType>* nextNodePtr = new Node<ItemType>();
        nextNodePtr->setItem(newEntry);
        nextNodePtr->setNext(nullptr);
    
        if(isEmpty())
        {
            headPtr = nextNodePtr;
            tailPtr = nextNodePtr;
        }
        else
        {
            headPtr->setPrev(nextNodePtr);  // heads prev will now be the new node
            nextNodePtr->setNext(headPtr);
            headPtr = nextNodePtr;          // head pointer is the new node
            headPtr->setPrev(nullptr);
        }
    //   Node<ItemType>* nextNodePtr = new Node<ItemType>(newEntry, headPtr); // alternate code
        itemCount++;

        return true;
}  // end add

template<class ItemType>
vector<ItemType> DoublyLinkedBag<ItemType>::toVector() const
{
   vector<ItemType> bagContents;
   Node<ItemType>* curPtr = headPtr;
   int counter = 0;
    while ((curPtr != nullptr) && (counter < itemCount))
   {
       bagContents.push_back(curPtr->getItem());
       curPtr = curPtr->getNext();
       counter++;
   }  // end while
   
   return bagContents;
}  // end toVector

template<class ItemType>
bool DoublyLinkedBag<ItemType>::remove(const ItemType& anEntry)
{
   Node<ItemType>* entryNodePtr = getPointerTo(anEntry);
   bool canRemoveItem = !isEmpty() && (entryNodePtr != nullptr);
   if (canRemoveItem)
   {
       // Copy data from first node to located node
       entryNodePtr->setItem(headPtr->getItem());
      
       // Delete first node
       Node<ItemType>* nodeToDeletePtr = headPtr;
       headPtr = headPtr->getNext();
      
      // Return node to the system
       nodeToDeletePtr->setNext(nullptr);
       nodeToDeletePtr->setPrev(nullptr);
       delete nodeToDeletePtr;
       nodeToDeletePtr = nullptr;
      
       itemCount--;
   } // end if
   
    return canRemoveItem;
}  // end remove

template<class ItemType>
void DoublyLinkedBag<ItemType>::clear()
{
   Node<ItemType>* nodeToDeletePtr = headPtr;
   while (headPtr != nullptr)
   {
      headPtr = headPtr->getNext();
      
      // Return node to the system
       nodeToDeletePtr->setNext(nullptr);
       nodeToDeletePtr->setPrev(nullptr);
       delete nodeToDeletePtr;
      
      nodeToDeletePtr = headPtr;
   }  // end while
   // headPtr is nullptr; nodeToDeletePtr is nullptr
   
    itemCount = 0;
}  // end clear


template<class ItemType>
int DoublyLinkedBag<ItemType>::getFrequencyOf(const ItemType& anEntry) const
{
    int frequency = 0;
   int counter = 0;
   Node<ItemType>* curPtr = headPtr;
   while ((curPtr != nullptr) && (counter < itemCount))
   {
      if (anEntry == curPtr->getItem())
      {
         frequency++;
      } // end if
      
      counter++;
      curPtr = curPtr->getNext();
   } // end while
   
    return frequency;
}  // end getFrequencyOf

template<class ItemType>
bool DoublyLinkedBag<ItemType>::contains(const ItemType& anEntry) const
{
    return (getPointerTo(anEntry) != nullptr);
}  // end contains

// private
// Returns either a pointer to the node containing a given entry
// or the null pointer if the entry is not in the bag.
template<class ItemType>
Node<ItemType>* DoublyLinkedBag<ItemType>::getPointerTo(const ItemType& anEntry) const
{
   bool found = false;
   Node<ItemType>* curPtr = headPtr;
   
   while (!found && (curPtr != nullptr))
   {
      if (anEntry == curPtr->getItem())
         found = true;
      else
         curPtr = curPtr->getNext();
   } // end while
   
   return curPtr;
} // end getPointerTo

template <class ItemType>
void DoublyLinkedBag<ItemType>::display() const
{
    Node<ItemType>* curPtr = headPtr;
    while(curPtr != nullptr)
    {
        cout << curPtr -> getItem()<< " ";
        curPtr = curPtr -> getNext();
    }// end while
    cout << endl;
}

template <class ItemType>
bool DoublyLinkedBag<ItemType>::addtoback(const ItemType& newEntry)
{
   // Add to beginning of chain: new node references rest of chain;
   // (headPtr is null if chain is empty)
    
    Node<ItemType>* nextNodePtr = new Node<ItemType>();
    nextNodePtr->setItem(newEntry);
    nextNodePtr->setNext(nullptr);  // New node points to chain
//   Node<ItemType>* nextNodePtr = new Node<ItemType>(newEntry, headPtr); // alternate code
    Node <ItemType> *curPtr = headPtr;

    while(curPtr -> getNext() != nullptr)
    {
        curPtr = curPtr -> getNext();
    }
    curPtr -> setNext(nextNodePtr);
    itemCount++;
   
   return true;
}  // end add

template <class ItemType>
Node<ItemType> *DoublyLinkedBag<ItemType>::getHeadPtr() const
{
    return headPtr;
}

template <class ItemType>
void DoublyLinkedBag<ItemType>::removeHead()
{
   Node<ItemType>* nodeToDelete = headPtr;
   headPtr = headPtr->getNext();
   headPtr->setPrev(nullptr);

   nodeToDelete->setNext(nullptr);
   nodeToDelete->setPrev(nullptr);
   delete nodeToDelete;
   nodeToDelete = nullptr;
}

template<class ItemType>
void DoublyLinkedBag<ItemType>::displayTail()const
{
  
      Node<ItemType>* curPtr = tailPtr;
      while(curPtr != nullptr)
      {
          cout << curPtr->getItem() << " ";
          curPtr = curPtr->getPrev();
      }
    cout << endl;
}


template <class ItemType>
void DoublyLinkedBag<ItemType>::rotateRight(const ItemType& anEntry)
{
    Node<ItemType>* temp = getPointerTo(anEntry);
    Node<ItemType>* temp2 = headPtr;
    ItemType item = temp->getItem();

    
    
    if(temp == tailPtr)
        cout << "Cannot rotate..."<< endl;
    else
    {
        headPtr = temp;
        temp = temp->getNext();
        headPtr->setItem(temp->getItem());
        headPtr = temp;
        headPtr->setItem(item);
        headPtr = temp2;
    }
    display();
}


template <class ItemType>
void DoublyLinkedBag<ItemType>::rotateLeft(const ItemType& anEntry)
{
    Node<ItemType>* temp = getPointerTo(anEntry);
    Node<ItemType>* temp2 = tailPtr;
    ItemType item = temp->getItem();

    
    
    if(temp == headPtr)
        cout << "Cannot rotate..."<< endl;
    else
    {
        tailPtr = temp;
        temp = temp->getPrev();
        tailPtr->setItem(temp->getItem());
        tailPtr = temp;
        tailPtr->setItem(item);
        tailPtr = temp2;
    }
    display();
}
#endif /* DoublyLinkedBag_h */
