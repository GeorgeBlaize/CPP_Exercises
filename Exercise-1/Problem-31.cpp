
//C++ Program to Make a Simple Calculator to Add, Subtract, Multiply or Divide Using switch...case

#include<iostream>
using namespace std;

int main()
{
    char op;
    double num1,num2;
    cout<<"Enter operator: +,-,*,/:";
    cin>>op;

    cout<<"Enter two operands: ";
    cin>>num1>>num2;

    switch(op)
    {
        case '+':
        {
            cout<<num1<<" + "<<num2<<" = "<<num1+num2;
            break;
        }
          case '-':
        {
            cout<<num1<<" + "<<num2<<" = "<<num1-num2;
            break;
        }
          case '*':
        {
            cout<<num1<<" + "<<num2<<" = "<<num1*num2;
            break;
        }
          case '/':
        {
            cout<<num1<<" + "<<num2<<" = "<<num1/num2;
            break;
        }

          default :
            cout<<"Invalid Operator";
    }

    return 0;
}
