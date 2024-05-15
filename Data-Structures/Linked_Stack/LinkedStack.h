//
//  LinkedStack.h
//  Linked_Stack
//
//  Created by Carlos Surillo on 3/28/23.
//

#ifndef LinkedStack_h
#define LinkedStack_h

#include <cassert>
#include "StackInterface.h"
#include "Node.h"

template<class ItemType>
class LinkedStack : public StackInterface<ItemType>
{
private:
    Node<ItemType>* topPtr; // Pointer to first node in the chain; // this node contains the stack’s top
public:
    // Constructors and destructor:
    LinkedStack(); // Default constructor
    LinkedStack(const LinkedStack<ItemType>& aStack); // Copy constructor
    virtual ~LinkedStack(); // Destructor
    // Stack operations:
    bool isEmpty() const;
    bool push(const ItemType& newItem);
    bool pop();
    ItemType peek() const;
    void display() const;
}; // end LinkedStack

template<class ItemType> LinkedStack<ItemType>::LinkedStack() : topPtr(nullptr)
{
} // end default constructor

template<class ItemType>
LinkedStack<ItemType>::LinkedStack(const LinkedStack<ItemType>& aStack)
{
    // Point to nodes in original chain
    Node<ItemType>* origChainPtr = aStack->topPtr;
    if (origChainPtr == nullptr)
        topPtr = nullptr; // Original bag is empty
    else
    {
        // Copy first node
        topPtr = new Node<ItemType>();
        
        topPtr->setItem(origChainPtr->getItem());
        // Point to first node in new chain
        Node<ItemType>* newChainPtr = topPtr;
        // Copy remaining nodes
        while (origChainPtr != nullptr)
        {
            // Advance original-chain pointer
            origChainPtr = origChainPtr->getNext();
            // Get next item from original chain
            ItemType nextItem = origChainPtr->getItem();
            // Create a new node containing the next item
            Node<ItemType>* newNodePtr = new Node<ItemType>(nextItem); // Link new node to end of new chain
            newChainPtr->setNext(newNodePtr);
            // Advance pointer to new last node
            newChainPtr = newChainPtr->getNext();
            
        } // end while
        newChainPtr->setNext(nullptr); // Flag end of chain
    }//end if
}// end copy constructor

template<class ItemType> LinkedStack<ItemType>::~LinkedStack()
{
// Pop until stack is empty
while (!isEmpty())
    pop();
} // end destructor

template<class ItemType>
bool LinkedStack<ItemType>::isEmpty() const
{
    return topPtr == nullptr;
} // end isEmpty

template<class ItemType>
bool LinkedStack<ItemType>::push(const ItemType& newItem)
{
    Node<ItemType>* newNodePtr = new Node<ItemType>(newItem, topPtr);
    topPtr = newNodePtr;
    newNodePtr = nullptr;
    return true;
}// end push

template<class ItemType>
bool LinkedStack<ItemType>::pop()
{
    bool result = false;
    if (!isEmpty())
    {
        // Stack is not empty; delete top
        Node<ItemType>* nodeToDeletePtr = topPtr;
        topPtr = topPtr->getNext();
        // Return deleted node to system
        nodeToDeletePtr->setNext(nullptr);
        delete nodeToDeletePtr;
        nodeToDeletePtr = nullptr;
        result = true;
    } // end if
    return result;
} // end pop

template<class ItemType>
ItemType LinkedStack<ItemType>::peek() const
{
    assert(!isEmpty()); // Enforce precondition
    // Stack is not empty;return top
    return topPtr->getItem();
} // end getTop
// end of implementation file


template <class ItemType>
void LinkedStack<ItemType>::display() const
{
    Node<ItemType> *curPtr = topPtr;
    
    while (curPtr != nullptr)
    {
        cout << curPtr -> getItem() << " ";
        curPtr = curPtr -> getNext();
    }
    cout << endl;
}


#endif /* LinkedStack_h */
