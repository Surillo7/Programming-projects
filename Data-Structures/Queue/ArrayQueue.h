//
//  ArrayQueue.h
//  Queue
//
//  Created by Carlos Surillo on 4/13/23.
//

#ifndef ArrayQueue_h
#define ArrayQueue_h

#include "QueueInterface.h"
#include "PrecondViolatedExcept.h"

const int MAX_QUEUE = 3;

template<class ItemType>
class ArrayQueue : public QueueInterface<ItemType>
{
private:
   ItemType items[MAX_QUEUE]; // Array of queue items
   int front;                 // Index to front of queue
   int back;                  // Index to back of queue
   int count;                 // Number of items currently in the queue
   
public:
   ArrayQueue();
   // Copy constructor and destructor supplied by compiler
   bool isEmpty() const;
   bool enqueue(const ItemType& newEntry);
   bool dequeue();
   
   /** @throw PrecondViolatedExcep if queue is empty. */
    ItemType peekFront() const noexcept(false);
    void display() const;
}; // end ArrayQueue

template<class ItemType>
ArrayQueue<ItemType>::ArrayQueue() : front(0), back(MAX_QUEUE - 1), count(0)
{
} // end default constructor

template<class ItemType>
bool ArrayQueue<ItemType>::isEmpty() const
{
   return count == 0;
} // end isEmpty

template<class ItemType>
bool ArrayQueue<ItemType>::enqueue(const ItemType& newEntry)
{
   bool result = false;
   if (count < MAX_QUEUE)
   {
      // Queue has room for another item
      back = (back + 1) % MAX_QUEUE;
      items[back] = newEntry;
      count++;
      result = true;
   } // end if
   
   return result;
} // end enqueue

template<class ItemType>
bool ArrayQueue<ItemType>::dequeue()
{
   bool result = false;
   if (!isEmpty())
   {
      front = (front + 1) % MAX_QUEUE;
      count--;
      result = true;
   } // end if
   
   return result;
} // end dequeue

template<class ItemType>
ItemType ArrayQueue<ItemType>::peekFront() const noexcept(false)
{
   // Enforce precondition
   if (isEmpty())
      throw PrecondViolatedExcep("peekFront() called with empty queue");
   
   // Queue is not empty; return front
   return items[front];
} // end peekFront

template <class ItemType>
void ArrayQueue<ItemType>::display() const
{
    int i,k;
    i = front;
    k = 0;
    while(k<count)
    {
        cout << items[i] << ", ";
        i = (i+1)% MAX_QUEUE;
        k++;
    }//end while
    cout<< endl;
}

#endif /* ArrayQueue_h */
