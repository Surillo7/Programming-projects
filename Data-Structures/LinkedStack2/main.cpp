//
//  main.cpp
//  Actividad6-2
//
//  Created by Carlos Surillo on 4/3/23.
//

#include <iostream>
#include "LinkedStack.h"
#include <string>
using namespace::std;

int prec(char s);
string infixToPosfix(string aS);

int main()
{
    string inf, post;
    int choice;
    do {
        cout << "Enter 1 to continue... 0 to stop..." << endl;
        cin >> choice;
        switch (choice)
        {
            case 1:
                cout << "Enter expression to switch to postfix: ";
                cin>> inf;
                
                post = infixToPosfix(inf);
                cout << "Postfix: " << post<< endl;
                break;
            case 0:
                cout << "Goodbye..."<< endl;
                break;
            default:
                break;
        }
    } while (choice != 0);
    
    return 0;
}

int prec(char s)
{
    if (s == '^')
        return 3;
    else if (s == '/' || s == '*')
        return 2;
    else if (s == '+' || s == '-')
        return 1;
    else
        return -1;
}


string infixToPosfix(string aS)
{
    LinkedStack<char> stack;
        string ans = "";

        for (int i = 0; i < aS.length(); i++)
        {
            char ch = aS[i];

            // If the current character is an operand, add it
            if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
            {
                ans += ch; //Append the current character
            }

            // If the current character of string is an '(', push it to the stack.
            else if (ch == '(')
            {
                stack.push('(');
            }

            // If the current character of string is an ')', append the top character of stack in our answer string
            // and pop that top character from the stack until an '(' is found.
            else if (ch == ')')
            {
                while (stack.peek() != '(')
                {
                    ans += stack.peek();  // Append the top character of stack in our answer
                    stack.pop();
                }
                stack.pop();
            }

            //If an operator is scanned
            else
            {
                while (!stack.isEmpty() && prec(aS[i]) <= prec(stack.peek()))
                {
                    ans += stack.peek();
                    stack.pop();
                }
                stack.push(ch);    // Push the current character of string in stack
            }
        }

        // Pop all the remaining elements from the stack
        while (!stack.isEmpty())
        {
            ans += stack.peek();
            stack.pop();
        }

        return ans;
    
}


//Output
// Enter 1 to continue... 0 to stop...
// 1
// Enter expression to switch to postfix: a-b+c
// Postfix: ab-c+
// Enter 1 to continue... 0 to stop...
// 1
// Enter expression to switch to postfix: a-(b/c*d)
// Postfix: abc/d*-
// Enter 1 to continue... 0 to stop...
// 1
// Enter expression to switch to postfix: a/(b*c)
// Postfix: abc*/
// Enter 1 to continue... 0 to stop...
// 1
// Enter expression to switch to postfix: a/b/c-(d+e)*f
// Postfix: ab/c/de+f*-
// Enter 1 to continue... 0 to stop...
// 1
// Enter expression to switch to postfix: (a+b)*c
// Postfix: ab+c*
// Enter 1 to continue... 0 to stop...
// 1
// Enter expression to switch to postfix: a*(b/c/d)+e
// Postfix: abc/d/*e+
// Enter 1 to continue... 0 to stop...
// 1
// Enter expression to switch to postfix: a-(b+c)
// Postfix: abc+-
// Enter 1 to continue... 0 to stop...
// 1
// Enter expression to switch to postfix: a-(b+c*d)/e
// Postfix: abcd*+e/-
// Enter 1 to continue... 0 to stop...
// 0
// Goodbye...
// Program ended with exit code: 0























