//
//  IntegerList.hpp
//  IntegerList
//
//  Created by Carlos Surillo on 12/6/22.
//

#ifndef IntegerList_hpp
#define IntegerList_hpp

class IntegerList
{
private:
    int *list;
    int numElements;
    bool isValid(int) const;
public:
    IntegerList(int);
    ~IntegerList();
    void setElement(int, int);
    int getElement(int) const;
};
#endif /* IntegerList_hpp */
