//
//  ListQueue.h
//  PalindromeQueueStack
//
//  Created by Carlos Surillo on 4/18/23.
//

#ifndef ListQueue_h
#define ListQueue_h

#include "QueueInterface.h"
#include "LinkedList.h"
#include "PrecondViolated.h"

template<class ItemType>
class ListQueue : public QueueInterface<ItemType>
{
private:
   LinkedList<ItemType>* listPtr; // Pointer to list of queue items
   
public:
   ListQueue();
   ListQueue(const ListQueue& aQueue);
   ~ListQueue();
   bool isEmpty() const;
   bool enqueue(const ItemType& newEntry);
   bool dequeue();
   
   /** @throw  PrecondViolatedExcep if queue is empty. */
    ItemType peekFront() const noexcept(false);
    void display() const;
}; // end ListQueue

template<class ItemType>
ListQueue<ItemType>::ListQueue()
{
   listPtr = new LinkedList<ItemType>();
}  // end default constructor

template<class ItemType>
ListQueue<ItemType>::ListQueue(const ListQueue& aQueue) : listPtr(aQueue.listPtr)
{
}  // end copy constructor

template<class ItemType>
ListQueue<ItemType>::~ListQueue()
{
}  // end destructor

template<class ItemType>
bool ListQueue<ItemType>::isEmpty() const
{
   return listPtr->isEmpty();
}  // end isEmpty

template<class ItemType>
bool ListQueue<ItemType>::enqueue(const ItemType& newEntry)
{
   return listPtr->insert(listPtr->getLength() + 1, newEntry);
}  // end enqueue

template<class ItemType>
bool ListQueue<ItemType>::dequeue()
{
   return listPtr->remove(1);
}  // end dequeue

template<class ItemType>
ItemType ListQueue<ItemType>::peekFront() const noexcept(false)
{
   if (isEmpty())
      throw PrecondViolatedExcep("peekFront() called with empty queue.");

   // Queue is not empty; return front
   return listPtr->getEntry(1);
}  // end peekFront
// End of implementation file.

template <class ItemType>
void ListQueue<ItemType>::display() const
{
    listPtr -> display();
}


#endif /* ListQueue_h */
