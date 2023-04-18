
//C++ Program to Display Prime Numbers Between Two Intervals Using Functions

#include<iostream>
using namespace std;

bool isPrime(int num)
{
    if(num<2) return false;
    for(int i=2; i<=num/2; i++)
    {
        if(num%i==0) return false;
    }
    return true;
}

void displayPrimes(int start,int end)
{
    cout<<"Prime numbers between "<<start<<" and "<<end<<"are";
    for(int i=start; i<=end; i++)
    {
        if(isPrime(i))
        {
           cout<<i<<" ";
        }
    }
    cout<<endl;
}

int main()
{

    int start,end;
    cout<<"Enter the starting number: ";
    cin>>start;
    cout<<"Enter the ending number: ";
    cin>>end;
    displayPrimes(start,end);
    return 0;
}
