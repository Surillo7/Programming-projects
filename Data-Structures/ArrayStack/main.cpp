//
//  main.cpp
//  Actividad6-1
//
//  Created by Carlos Surillo on 4/3/23.
//

#include <iostream>
#include "ArrayStack.h"
#include <string>

bool checkBraces(string aTemp);

int main()
{
    string temp, temp2;
    bool check, check2;
    
    cout << "Enter expression(1): ";
    cin>> temp;
    
    check = checkBraces(temp);
    
    cout << "Enter expression(2): ";
    cin>> temp2;
    
    check2 = checkBraces(temp2);
    return 0;

}


bool checkBraces(string aTemp)
{
    ArrayStack<char> stack1;
    bool balancedSoFar = true;
    int i= 0;
    
    while(aTemp[i] != '\0')
        {
            
            if((aTemp[i] == '{') || (aTemp[i] == '[') || (aTemp[i] == '('))
                stack1.push(aTemp[i]);
            
            else if (aTemp[i] == '}')
            {
                if(!stack1.isEmpty())
                {
                    if(stack1.peek() != '{')
                        balancedSoFar = false;
                    stack1.pop();
                }
            }
            else if(aTemp[i] == ']'){
                if(!stack1.isEmpty())
                {
                    if(stack1.peek() != '[')
                        balancedSoFar = false;
                    stack1.pop();
                }
            }
             else if(aTemp[i] == ')'){
                if(!stack1.isEmpty())
                {
                    if(stack1.peek() != '(')
                        balancedSoFar = false;
                    stack1.pop();
                }
            }

            i++;
        }
        if (stack1.isEmpty() && balancedSoFar == true)
        {
            cout << "Braces are balanced!" << endl;
            return balancedSoFar;
        }
        else
        {
            cout << "Braces are not balanced!" << endl;
            return balancedSoFar;
        }
    }



//OUTPUT
/*
 Enter expression(1): {ab(c[d])e}
 Braces are balanced!
 Enter expression(2): {ab(c))
 Braces are not balanced!
 Program ended with exit code: 0
 */
