//
//  RestaurantBill.hpp
//  Actividad6-1
//
//  Created by Carlos Surillo on 1/14/23.
//

#ifndef RestaurantBill_hpp
#define RestaurantBill_hpp
#include <iostream>
using namespace::std;

class RestaurantBill
{
private:
    char* plateName;
    double price;
    double quant;
public:
    RestaurantBill();
    RestaurantBill(char*, double);
    RestaurantBill(const RestaurantBill &obj);
    ~RestaurantBill();
    void setQnt(double);
    void setName(char*);
    void setPlatePrice(double);
    void set(char*, double);
    char* getName() const;
    double getPlatePrice() const;
    double getQnt() const;
    double getTotalPlatePrice() const;
    const RestaurantBill &operator=(const RestaurantBill &obj);
};

#endif /* RestaurantBill_hpp */
