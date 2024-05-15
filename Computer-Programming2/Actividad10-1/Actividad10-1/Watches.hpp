//
//  Watches.hpp
//  Actividad10-1
//
//  Created by Carlos Surillo on 2/7/23.
//

#ifndef Watches_hpp
#define Watches_hpp
#include <iostream>
using namespace::std;

class Watches
{
    friend istream &operator>>(istream &in, Watches &obj);

    friend ostream &operator<<(ostream &strm, const Watches &obj)
    {
        cout << "---Watch Information---" << endl;
        strm << "For:" << obj.getJewelryGender() << endl;
        strm << "Brand:" << obj.getJewelryBrand() << endl;
        
        return strm;
    }
    
private:
    string watchGender;
    string watchBrand;
    
public:
    Watches();
    Watches(const string tempGender, const string tempBrand);
    ~Watches();
    void setGender(int gen);
    void setBrand(int tempBrand);
    string getJewelryGender() const;
    string getJewelryBrand() const;
};
#endif /* Watches_hpp */
