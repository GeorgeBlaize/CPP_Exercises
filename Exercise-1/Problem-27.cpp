
//C++ Program to Check Armstrong Number

#include<iostream>
using namespace std;

int main()
{
    int num,n,sum=0,remainder;

    cout<<"Enter an integer: ";
    cin>>num;

    n=num;

    while(n!=0)
    {
        remainder = n % 10;
        sum=sum+(remainder*remainder*remainder);
        n=n/10;
    }

    if(sum==num)
    {
        cout<<num<<" is an Armstrong number.";

    }
    else
    {
        cout<<num<<" is not an Armstrong number.";
    }

    return 0;
}
