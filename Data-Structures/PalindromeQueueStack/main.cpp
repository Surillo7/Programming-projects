//
//  main.cpp
//  PalindromeQueueStack
//
//  Created by Carlos Surillo on 4/18/23.
//

#include <iostream>
#include "ListQueue.h"
#include "LinkedStack.h"
#include <string>
bool isPalindrome(string str);


int main()
{
    
    int mark = 0;
    while(mark != 2)
    {
        string str;
        
        cout << "Enter string: ";
        cin>> str;
        
        bool pali = isPalindrome(str);
        
        if(pali)
            cout << "It is a palindrome." << endl;
        else
            cout << "It is not a palindrome." << endl;
        
        mark++;
    }
    
    return 0;
}


bool isPalindrome(string str)
{
    // Create an empty queue and an empty stack
    ListQueue<char> aQueue;
    LinkedStack<char> aStack;
    // Add each character of the string to both the queue and the stack
    int half = str.length()/2;
    
    for (int i = 0; i < half; i++)
    {
        char nextChar = str[i];
        aQueue.enqueue(nextChar);
    }
    
    if(half % 2 == 0)
    {
        for(int i = half; i< str.length(); i++)
        {
            char nextChar2 = str[i];
            aStack.push(nextChar2);
        }
    } else
    {
        half = half + 1;
        for(int i = half; i< str.length(); i++)
        {
            char nextChar2 = str[i];
            aStack.push(nextChar2);
        }
    }
    
    // Compare the queue characters with the stack characters
    bool charactersAreEqual = true;
    while (!aQueue.isEmpty() && charactersAreEqual)
    {
        char queueFront = aQueue.peekFront();
        char stackTop = aStack.peek();
        if (queueFront == stackTop)
        {
            aQueue.dequeue();
            aStack.pop();
        }
        else
            charactersAreEqual = false;
    }
    return charactersAreEqual;
}


//OUTPUT
/*
 Enter string: radar
 It is a palindrome.
 Enter string: abcda
 It is not a palindrome.
 Program ended with exit code: 0
 */
