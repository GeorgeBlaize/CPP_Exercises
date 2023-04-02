
//C++ Program to Find Factorial

#include<iostream>
using namespace std;

int main()
{

    int fact=1,num;

    cout<<"Enter a positive integer: ";
    cin>>num;

    for(int i=1; i<=num; i++)
    {

        fact=fact*i;
    }

    cout<<"Factorial of " <<num<<" = "<<fact;

    return 0;
}

