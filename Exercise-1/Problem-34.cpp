
//C++ Program to Check Whether a Number can be Express as Sum of Two Prime Numbers

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

bool canBeExpressedAsSumOFPrimes(int num)
{
    for(int i=2; i<=num/2; i++)
    {
        if(isPrime(i))
        {
            if(isPrime(num-i))
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if(canBeExpressedAsSumOFPrimes(num))
    {
        cout<<num<<" can be expressed as the sum of two prime numbers."<<endl;
    }
    else
    {
        cout<<num<<" cannot be expressed as the sum of two prime numbers."<<endl;
    }

    return 0;
    }


