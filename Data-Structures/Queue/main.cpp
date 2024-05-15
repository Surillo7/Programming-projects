//
//  main.cpp
//  Queue
//
//  Created by Carlos Surillo on 4/13/23.
//

#include <iostream>
#include "ArrayQueue.h"



int main()
{
    ArrayQueue<int> queue1;
    //int queueFront;
    
    queue1.enqueue(5);
    queue1.enqueue(15);
    queue1.enqueue(20);
    queue1.enqueue(25);
    queue1.display();

    cout<< queue1.peekFront()<< endl;
    queue1.dequeue();
    queue1.display();
    queue1.dequeue();
    queue1.display();
    queue1.enqueue(30);
    queue1.enqueue(35);
    queue1.dequeue();
    queue1.display();

    ArrayQueue<int> queue2(queue1);
    queue2.display();
    
   
    return 0;
}


//OUTPUT
/*
 5, 15, 20,
 5
 15, 20,
 20,
 30, 35,
 30, 35,
 Program ended with exit code: 0
 */
