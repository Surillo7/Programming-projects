//
//  PlainBox.h
//  Actividad10-1
//
//  Created by Carlos Surillo on 2/7/23.
//

#ifndef PlainBox_h
#define PlainBox_h
#include "BoxInterface.h"
using namespace::std;

template<class ItemType>
class PlainBox: public BoxInterface<ItemType>
{
protected:
    ItemType item;
public:
    PlainBox();
    PlainBox(const ItemType &theItem);
    virtual~PlainBox();
    virtual void setItem(const ItemType &theItem);
    virtual ItemType getItem() const;
};

template<class ItemType>
PlainBox<ItemType>::PlainBox()
{
    //cout << "PlainBox constructor executing\n";
}
template<class ItemType>
PlainBox<ItemType>::PlainBox(const ItemType &theItem)
{
    setItem(theItem);
}
template<class ItemType>
PlainBox<ItemType>::~PlainBox()
{
    //cout << "PlainBox destructor executing\n";
}
template<class ItemType>
void PlainBox<ItemType>::setItem(const ItemType &theItem)
{
    item = theItem;
}
template<class ItemType>
ItemType PlainBox<ItemType>::getItem() const
{
    return item;
}
#endif /* PlainBox_h */
