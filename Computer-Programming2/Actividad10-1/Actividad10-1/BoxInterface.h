//
//  BoxInterface.h
//  Actividad10-1
//
//  Created by Carlos Surillo on 2/7/23.
//

#ifndef BoxInterface_h
#define BoxInterface_h
template <class ItemType>
class BoxInterface
{
public:
    virtual ~BoxInterface() {}
    virtual void setItem(const ItemType &theItem) = 0;
    virtual ItemType getItem() const = 0;
};

#endif /* BoxInterface_h */
