
//C++ program to Find Sum of Natural Numbers using Recursion

#include<iostream>
using namespace std;

int add(int n);

int main()
{

    int num;

    cout<<"Enter a positive integer: ";
    cin>>num;

    cout<<"Sum = "<<add(num);

    return 0;
}

int add(int n)
{

    if(n!=0)
        return n + add(n-1);
    return 0;
}
