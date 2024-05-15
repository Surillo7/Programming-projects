//
//  Header.h
//  Actividad11-1
//
//  Created by Carlos Surillo on 2/9/23.
//

#ifndef SimpleVectorInterFace_h
#define SimpleVectorInterFace_h

template<class T>
class SimpleVectorInterface
{
public:
    ~SimpleVectorInterface() {}
    virtual bool add(const T &newEntry)=0;
    virtual bool remove(const T &anEntry)=0;
    virtual int getIndexOf(const T &targetEntry) const=0;
    virtual bool isEmpty() const =0 ;
    virtual void display()const=0;
};
#endif /* Header_h */
