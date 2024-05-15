//
//  main.cpp
//  SLPriorityQueue
//
//  Created by Carlos Surillo on 4/27/23.
//


#include <iostream>
using namespace std;
#include "Client.h"
#include "LinkedQueue.h"
#include "SL_PriorityQueue.h"
#include "LinkedSortedList.h"

int main()
{
    LinkedQueue<Client> bankQueue;
    SL_PriorityQueue<Client> eventListPQueue;
    
    bool teller = true;

    Client num1('A', 1 ,5);
    Client num2('A', 2 ,5);
    Client num3('A', 4 ,5);
    Client num4('A', 20 ,5);
    Client num5('A', 22 ,5);
    Client num6('A', 24 ,5);
    Client num7('A', 26 ,5);
    Client num8('A', 28 ,5);
    Client num9('A', 30 ,5);
    Client num10('A', 80 ,3);

    eventListPQueue.add(num3);
    eventListPQueue.add(num5);
    eventListPQueue.add(num1);
    eventListPQueue.add(num4);
    eventListPQueue.add(num2);
    eventListPQueue.add(num6);
    eventListPQueue.add(num7);
    eventListPQueue.add(num8);
    eventListPQueue.add(num9);
    eventListPQueue.add(num10);
    
    while(!eventListPQueue.isEmpty())
    {
        Client nextClient = eventListPQueue.peek();
        int time = nextClient.getArrTime();
        
        if (nextClient.getStatus() == 'A')
        {
            eventListPQueue.remove();
            if (bankQueue.isEmpty() && teller)
            {
                int departureTime = time + nextClient.getTranTime();
                Client departureEvent('D', departureTime, 1);
                eventListPQueue.add(departureEvent);
                teller = false;
            }
            else
            {
                bankQueue.enqueue(nextClient);
            }
            cout << "Processing an arrival event at time: " << nextClient.getArrTime() << endl;
        }
        else
        {
            eventListPQueue.remove();
            if (!bankQueue.isEmpty())
            {
                Client waitingClient = bankQueue.peekFront();
                bankQueue.dequeue();
                int departureTime = time + waitingClient.getTranTime();
                Client departureEvent('D', departureTime, 1);
                eventListPQueue.add(departureEvent);
            }
            else
            {
                teller = true;
            }
            cout << "Processing a departure event at time: " << time << endl;
        }
    }
    return 0;
}

//OUTPUT
/*
 Processing an arrival event at time: 1
 Processing an arrival event at time: 2
 Processing an arrival event at time: 4
 Processing a departure event at time: 6
 Processing a departure event at time: 11
 Processing a departure event at time: 16
 Processing an arrival event at time: 20
 Processing an arrival event at time: 22
 Processing an arrival event at time: 24
 Processing a departure event at time: 25
 Processing an arrival event at time: 26
 Processing an arrival event at time: 28
 Processing a departure event at time: 30
 Processing an arrival event at time: 30
 Processing a departure event at time: 35
 Processing a departure event at time: 40
 Processing a departure event at time: 45
 Processing a departure event at time: 50
 Processing an arrival event at time: 88
 Processing a departure event at time: 91
 Program ended with exit code: 0
 */
