//
//  Client.h
//  SLPriorityQueue
//
//  Created by Carlos Surillo on 5/2/23.
//

#ifndef Client_h
#define Client_h

#include <iostream>
using namespace::std;


class Client
{
private:
    char statusOfClient;
    int transactionTime, ArrivedTime;
public:
    Client();
    Client(char, int, int);
    Client(const Client&);
    ~Client();
    void setStatus(char);
    void setTranTime(int);
    void setArrTime(int);
    char getStatus() const;
    int getTranTime() const;
    int getArrTime() const;
    bool operator < (const Client&) const;
    bool operator > (const Client&) const;
    bool operator == (const Client&) const;
    bool operator != (const Client&) const;
    friend istream& operator >> (istream& in, Client& obj)
    {
        cout << "Enter status: ";
        in>> obj.statusOfClient;
        cout << "Enter Arrival Time: ";
        in>> obj.ArrivedTime;
        cout << "Enter transaction time: ";
        in>> obj.transactionTime;
        return in;
    }
    friend ostream& operator << (ostream& out, const Client& obj)
    {
        out<< "Status: "<< obj.getStatus()<< endl;
        out<< "Arrived Time: "<< obj.getArrTime()<< endl;
        out<< "Transaction Time: "<< obj.getTranTime() << endl;
        return out;
    }
    
};

Client::Client()
{
    setStatus('a');
    setTranTime(0);
    setArrTime(0);
}

Client:: Client(char st, int aT, int tT)
{
    setStatus(st);
    setTranTime(tT);
    setArrTime(aT);
}

Client::Client(const Client& obj)
{
    setStatus(obj.getStatus());
    setTranTime(obj.getTranTime());
    setArrTime(obj.getArrTime());
}

Client::~Client()
{
    
}

void Client::setStatus(char st)
{
    statusOfClient = st;
}

void Client::setTranTime(int tT)
{
    transactionTime = tT;
}

void Client::setArrTime(int aT)
{
    ArrivedTime = aT;
}

char Client::getStatus() const
{
    return statusOfClient;
}

int Client::getTranTime() const
{
    return transactionTime;
}

int Client::getArrTime() const
{
    return ArrivedTime;
}

bool Client::operator < (const Client& obj) const
{
    return getArrTime() < obj.getArrTime();
}

bool Client::operator > (const Client& obj) const
{
    return getArrTime() > obj.getArrTime();

}

bool Client::operator == (const Client& obj) const
{
    return (getArrTime() == obj.getArrTime() && getTranTime() == obj.getTranTime() && getStatus() == obj.getStatus());

}

bool Client::operator != (const Client& obj) const
{
    return (getArrTime() != obj.getArrTime() && getTranTime() != obj.getTranTime() && getStatus() != obj.getStatus());
}


#endif /* Client_h */
