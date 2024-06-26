//
//  SortedListInterface.h
//  SLPriorityQueue
//
//  Created by Carlos Surillo on 4/27/23.
//

#ifndef SortedListInterface_h
#define SortedListInterface_h

template<class ItemType>
class SortedListInterface
{
public:

    virtual void insertSorted(const ItemType& newEntry) = 0;
    virtual bool removeSorted(const ItemType& anEntry) = 0;
    virtual int getPosition(const ItemType& anEntry) = 0;
    virtual bool isEmpty() const = 0;
    virtual int getLength() const = 0;
    virtual bool remove1(int position) = 0;
    virtual bool remove(const ItemType& anEntry) = 0;
    virtual void clear() = 0;
    virtual ItemType getEntry(int position) const = 0;
    virtual void display() const = 0;
    
};
#endif /* SortedListInterface_h */
