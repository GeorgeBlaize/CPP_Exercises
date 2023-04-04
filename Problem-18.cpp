
//C++ Program to Reverse a Number

#include<iostream>
using namespace std;

int main()
{
    int num,remainder,reverse_number=0;
    cout<<"Enter an integer: ";
    cin>>num;

    while(num!=0)
    {
        remainder=num%10;
        reverse_number=reverse_number*10+remainder;
        num=num/10;
    }

    cout<<"Reversed number = "<<reverse_number;

    return 0;
}
