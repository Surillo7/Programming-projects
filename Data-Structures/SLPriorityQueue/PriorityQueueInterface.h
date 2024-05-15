//
//  PriorityQueueInterface.h
//  SLPriorityQueue
//
//  Created by Carlos Surillo on 4/27/23.
//

#ifndef PriorityQueueInterface_h
#define PriorityQueueInterface_h

template<class ItemType>
class PriorityQueueInterface
{
public:
    virtual bool isEmpty() const = 0;
    virtual bool add(const ItemType& newEntry) = 0;
    virtual bool remove() = 0;
    virtual ItemType peek() const = 0;
    virtual void display() const = 0;
};

#endif /* PriorityQueueInterface_h */
