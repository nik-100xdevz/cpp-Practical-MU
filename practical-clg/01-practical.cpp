// Write cpp program to make simple calculator
#include<iostream>
using namespace std;

int main()
{
    char op;
    double num1, num2;
    cout<<"Enter an operator(+,-,*,/):";
    cin>>op;
    cout << "Enter two number:";
    cin>>num1>>num2;
    switch (op)
    {
        case '+':
            cout<<num1+num2<<endl;
            break;
        case '-':
            cout<<num1-num2<<endl;
            break;
        case '*':
            cout<<num1*num2<<endl;
            break;
        case '/':
        if (num2 == 0)
        {
            cout<<"the number is divisble by zero"<<endl;
        } else{
            cout<<num1/num2 << endl;
        }
        
        
    default:
    cout<<"Invalid operator"<<endl;
        break;
    }
    return 0;
}