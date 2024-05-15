//
//  PriorityQueue.h
//  SLPriorityQueue
//
//  Created by Carlos Surillo on 4/27/23.
//

#ifndef SL_PriorityQueue_h
#define SL_PriorityQueue_h
#include "PriorityQueueInterface.h"
#include "LinkedSortedList.h"
#include "Precond.h"

template<class ItemType>
class SL_PriorityQueue : public PriorityQueueInterface<ItemType>
{
private:
    LinkedSortedList<ItemType>* slistPtr; // Pointer to sorted list of
    // items in the priority queue
    LinkedSortedList<ItemType>* copyChain(const LinkedSortedList<ItemType>*
        origChainPtr);
public:
    SL_PriorityQueue();
    SL_PriorityQueue(const SL_PriorityQueue& pq);
    ~SL_PriorityQueue();
    bool isEmpty() const;
    bool add(const ItemType& newEntry);
    bool remove();
    /** @throw PrecondViolatedExcep if priority queue is empty. */
    ItemType peek() const noexcept(false);
    void display() const;
}; // end SL_PriorityQueue

template<class ItemType>
SL_PriorityQueue<ItemType>::SL_PriorityQueue() : slistPtr(nullptr)
{
    slistPtr = new LinkedSortedList<ItemType>();
}
template<class ItemType>
SL_PriorityQueue<ItemType>::SL_PriorityQueue(const SL_PriorityQueue<ItemType>& pq)
{
    slistPtr = copyChain(pq->slistPtr);
}
template<class ItemType>
SL_PriorityQueue<ItemType>::~SL_PriorityQueue()
{
}
template<class ItemType>
bool SL_PriorityQueue<ItemType>::isEmpty() const
{
    return slistPtr-> isEmpty();
}
template<class ItemType>
bool SL_PriorityQueue<ItemType>::add(const ItemType& newEntry)
{
    slistPtr->insertSorted(newEntry);
    return true;
} // end add
template<class ItemType>
bool SL_PriorityQueue<ItemType>::remove()
{
    // The highest priority item is at the end of the sorted list
    return slistPtr->remove1(1);
} // end remove
template<class ItemType>
ItemType SL_PriorityQueue<ItemType>::peek()const noexcept(false)
{
    if (isEmpty())
        throw PrecondViolatedExcep("peekFront() called with empty queue");
    else {
        return slistPtr->getEntry(1);
    }
} // end peekFront
//Private Methods:
template<class ItemType>
LinkedSortedList<ItemType>* SL_PriorityQueue<ItemType>::copyChain(const
    LinkedSortedList<ItemType>* origChainPtr)
{
    LinkedSortedList<ItemType>* copiedChainPtr;
    if (origChainPtr == nullptr)
    {
        copiedChainPtr = nullptr;
    }
    else
    {
        // Build new chain from given one
        copiedChainPtr = new LinkedSortedList<ItemType>(origChainPtr->getItem());
        copiedChainPtr->setNext(copyChain(origChainPtr->getNext()));
    } // end if
    return copiedChainPtr;
} // end copyChain
template<class ItemType>
void SL_PriorityQueue<ItemType>::display() const {
    slistPtr->display();
}

#endif /* PriorityQueue_h */
