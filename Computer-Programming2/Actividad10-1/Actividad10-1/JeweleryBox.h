//
//  JeweleryBox.h
//  Actividad10-1
//
//  Created by Carlos Surillo on 2/7/23.
//

#ifndef JeweleryBox_h
#define JeweleryBox_h
#include "PlainBox.h"

template < class ItemType >
class JewelryBox :public PlainBox<ItemType>
{
private:
    bool firstItemStored;
public:
    JewelryBox();
    JewelryBox(const ItemType &theItem);
    ~JewelryBox();
    void setItem(const ItemType &theItem);
};


template<class ItemType>
JewelryBox<ItemType>::JewelryBox() :PlainBox<ItemType>()
{
    firstItemStored = false;
    //cout << "JewelryBox constructor executing\n";
}
template<class ItemType>
JewelryBox<ItemType>::JewelryBox(const ItemType &theItem) : PlainBox<ItemType>()
{
    JewelryBox<ItemType> ::setItem(theItem);
    firstItemStored = false;
    //cout << "JewelryBox contructor executing\n";
}

template<class ItemType>
JewelryBox<ItemType>::~JewelryBox()
{
    //cout << "JewelryBox destructor executing\n";
}
template<class ItemType>
void JewelryBox<ItemType>::setItem(const ItemType &theItem)
{
    if (!firstItemStored)
    {
        PlainBox<ItemType> ::setItem(theItem);
        firstItemStored = true;
    }
}
#endif /* JeweleryBox_h */
