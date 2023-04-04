
//C++ Program to Find GCD

#include<iostream>
using namespace std;

int main()
{

    int a,b,maximum,minimum,rem;
    cout<<"Enter two numbers: ";
    cin>>a>>b;

    if(a>b)
    {
        maximum=a;
        minimum=b;
    }
    else
    {
        maximum=b;
        minimum=a;

    }

    while(maximum % minimum!=0)
    {
        rem=maximum%minimum;
        maximum=minimum;
        minimum=rem;
    }

    cout<<"HCF = "<<minimum;


    return 0;

}
