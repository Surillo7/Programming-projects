//
//  main.cpp
//  Stack
//
//  Created by Carlos Surillo on 3/24/23.
//

#include <iostream>
#include "ArrayStack.h"
using namespace std;

int main() {
    ArrayStack<int> stack1, stack2;
    int stackTop;
    stack1.push(1);
    stack1.push(2);
    stack2.push(3);
    stack2.push(4);
    stack1.pop();
    stackTop = stack2.peek();
    stack1.push(stackTop);
    stack1.push(5);
    stack2.pop();
    stack2.push(6);
    stack1.display();
    stack2.display();
    return 0;
}
