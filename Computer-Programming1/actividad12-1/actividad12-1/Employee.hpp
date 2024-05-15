//
//  Employee.hpp
//  actividad12-1
//
//  Created by Carlos Surillo on 10/20/22.
//

#ifndef Employee_hpp
#define Employee_hpp

#include <iostream>
#include <string>
using namespace::std;
class Employee
{
private:
    string name;
    int idNumber;
    string department;
    string position;
public:
    Employee();
    Employee(string aName, int aIdNumber, string aDepartment, string aPosition);
    Employee(string aName, int aIdNumber);
    void set_name(string aName);
    void set_id(int aIdNumber);
    void set_department(string aDepartment);
    void set_position(string aPosition);
    void set(string aName, int aIdNumber, string aDepartment, string aPosition);
    string getName() const;
    string getDepartment() const;
    string getPosition() const;
    int getId() const;
    void display() const;
};
#endif /* Employee_hpp */
