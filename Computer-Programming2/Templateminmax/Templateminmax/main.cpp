//
//  main.cpp
//  Templateminmax
//
//  Created by Carlos Surillo on 1/31/23.
//

#include <iostream>
#include <string>
using namespace::std;


template <class T>
T maximum(T var1, T var2)
{
    if (var1 > var2)
        return var1;
    else
        return var2;
}

template <class T>
T minimum(T var1, T var2)
{
    if (var1 < var2)
        return var1;
    else
        return var2;
}

int main()
{
    int num1, num2;
    double n1, n2;
    string a1, a2;
    char xx, yy;
    
    cout << "Enter: ";
    cin >> num1;
    cout << "Enter: ";
    cin >> num2;
    
    cout << "Max: " << maximum(num1, num2) << endl;
    cout << "Min: " << minimum(num1, num2) << endl;
    
    cout << "Enter: ";
    cin >> n1;
    cout << "Enter: ";
    cin >> n2;
    
    cout << "Max: " << maximum(n1, n2)<< endl;
    cout << "Min: " << minimum(n1, n2)<< endl;
    
    cout << "Enter: ";
    cin >> a1;
    cout << "Enter: ";
    cin >> a2;
    
    cout << "Max: " << maximum(a1, a2)<< endl;
    cout << "Min: " << minimum(a1, a2)<< endl;
    
    cout << "Enter: ";
    cin >> xx;
    cout << "Enter: ";
    cin >> yy;
    
    cout << "Max: " << maximum(xx, yy)<< endl;
    cout << "Min: " << minimum(xx, yy)<< endl;
    
    return 0;
}
