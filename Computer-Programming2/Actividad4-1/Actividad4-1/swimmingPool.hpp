//
//  swimmingPool.hpp
//  Actividad4-1
//
//  Created by Carlos Surillo, Stephanie Cruz, Alanna Vega
//

#ifndef swimmingPool_hpp
#define swimmingPool_hpp

class swimmingPool
{
private:
    int width;
    int length;
    int depth;
    double rateFill;
    double rateDrain;
public:
    swimmingPool();
    swimmingPool(int, int, int, double, double);
    swimmingPool(swimmingPool &obj);
    ~swimmingPool();
    swimmingPool& setWidth(int);
    swimmingPool& setLength(int);
    swimmingPool& setDepth(int);
    swimmingPool& setRateFill(double);
    swimmingPool& setRateDrain(double);
    int getWidth() const;
    int getLength() const;
    int getDepth() const;
    double getRateFill() const;
    double getRateDrain() const;
    double getWater() const;
    double getTimeFill() const;
    double getTimeDrain() const;
    void display() const;
};

#endif /* swimmingPool_hpp */
