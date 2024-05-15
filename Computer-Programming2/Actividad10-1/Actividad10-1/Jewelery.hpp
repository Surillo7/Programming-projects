//
//  Jewelery.hpp
//  Actividad10-1
//
//  Created by Carlos Surillo on 2/7/23.
//

#ifndef Jewelery_hpp
#define Jewelery_hpp
#include<iostream>
using namespace::std;


//enum Gender { MALE, FEMALE, CHILD };
//enum Type { COLLAR, CHAIN, BRACELET, EARRING };
//enum Weight { KG14 , KG18  , KG24 };
//enum Metal { GOLD, PLATINUM, SILVER };

class Jewelry
{
    friend istream &operator>>(istream &in, Jewelry &obj);

    friend ostream &operator<<(ostream &strm, const Jewelry &obj)
    {
        cout << "---Jewelry Information---" << endl;
        strm << "For:" << obj.getJewelryGender() << endl;
        strm << "Type:" << obj.getJewelryType() << endl;
        strm << "Weight:" << obj.getJewelryWeight() << endl;
        strm << "Metal:" << obj.getJewelryMetal() << endl;

        return strm;
    }
    
private:
    string jewelryGender;
    string jewelryType;
    string jewelryWeight;
    string jewelryMetal;
public:
    Jewelry();
    Jewelry(const string tempGender, const string tempType, const string tempWeight, const string tempMetal, double tempPrice);
    ~Jewelry();
    void setGender(int gen);
    void setType(int tempType);
    void setWeight(int tempWeight);
    void setMetal(int tempMetal);
    string getJewelryGender() const;
    string getJewelryType() const;
    string getJewelryWeight() const;
    string getJewelryMetal() const;
};
#endif /* Jewelery_hpp */
