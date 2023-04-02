
//C++ Program to Calculate Sum of Natural Numbers

#include<iostream>
using namespace std;

int main()
{
    int num,sum=0;

    cout<<"Enter a positive integer: ";
    cin>>num;

    for(int i=1; i<=num; i++)
    {
        sum = sum+i;
    }

    cout<<"Sum = "<<sum;

    return 0;
}
