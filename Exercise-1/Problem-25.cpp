
//C++ Program to Check Whether a Number is Prime or Not

#include<iostream>
using namespace std;

int main()
{
    int num;

    int flag=1;

    cout<<"Enter a positive integer: ";
    cin>>num;

    for(int i=2; i<num; i++)
    {
        if(num%i==0)
        {
            flag=0;
            break;
        }
    }

    if(flag==1)
    {
        cout<<num<<" is a prime number.";
    }
    else
    {
        cout<<num <<" is not a prime number.";
    }

    return 0;
}
