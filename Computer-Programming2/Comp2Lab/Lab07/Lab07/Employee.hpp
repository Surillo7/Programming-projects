//
//  Employee.hpp
//  Lab07
//
//  Created by Carlos Surillo on 2/4/23.
//

#ifndef Employee_hpp
#define Employee_hpp
#include "Date.hpp"
#include "Person.hpp"
#include <iostream>
#include <iomanip>
#include <string>
using namespace::std;

class Employee: public Person
{
private:
    int employeeID;
    Date *hireDate;
    string position;
    double annualSalary;
public:
    Employee()
    {
        setID(0);
        setSal(0.0);
        setpos(" ");
        hireDate = new Date;
        hireDate -> setDate(0, 0, 0);
    }
    
    Employee(int id, double sal, string pos, Date hdate)
    {
        setID(id);
        setSal(sal);
        setpos(pos);
        sethDate(hdate);
    }
    
    ~Employee()
    {
        delete hireDate;
    }
    void setID(int aid)
    {
        employeeID = aid;
    }
    
    void setSal(double sal)
    {
        annualSalary = sal;
    }
    
    void setpos(string apos)
    {
        position = apos;
    }
    
    
    void sethDate(Date hdate)
    {
        hireDate = new Date;
        hireDate = &hdate;
    }
    
    int random()
    {
        int a1;
        srand((unsigned int)time(NULL));
        a1 = rand() % 10000;
        return a1;
    }
    
    int getId() const
    {
        return employeeID;
    }
    
    double getSal() const
    {
        return annualSalary;
    }
    
    string getPos() const
    {
        return position;
    }
    
    Date * getHdate() const
    {
        return hireDate;
    }
    
    friend istream &operator >> (istream& in, Employee &obj)
    {
        string Fn, Ln, SsN, pos;
        int id = obj.random();
        
        cin.ignore();
        cout << "Enter first name: ";
        getline(in, Fn);
        obj.setFirst(Fn);
        
        cout << "Enter last name: ";
        getline(in, Ln);
        obj.setLast(Ln);
        
        cout << "Enter ssn(123-45-6789): ";
        getline(in, SsN);
        obj.setssN(SsN);
        
        cout << "Enter birthdate: " << endl;
        in >> *obj.birthDate;
        
        cout << "Enter hire date: " << endl;
        in >> *obj.hireDate;
        
        cin.ignore();
        cout << "Enter position: ";
        getline(in, pos);
        obj.setpos(pos);
        
        cout << "Enter annual salary: ";
        in>> obj.annualSalary;
        
        obj.setID(id);
        return in;
    }
    
    friend ostream &operator << (ostream& out, Employee &obj)
    {
        out << obj.getId() << "\t" << *obj.getHdate() << "\t" << obj.getSsN() << "\t" << obj.getFirst() << " " << obj.getLast() << "\t" << obj.getPos() << "\t" << obj.getSal();
        out << endl;
        return out;
    }
};

#endif /* Employee_hpp */


