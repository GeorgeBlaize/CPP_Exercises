
//C++ Program to Check Whether a Number is Palindrome or Not

#include<iostream>
using namespace std;

int main()
{
    int num,reversed=0,remainder,n;

    cout<<"Enter a positive number: ";
    cin>>num;

    n=num;

    while(n!=0)
    {
        remainder= n%10;
        reversed = reversed*10+remainder;
        n = n/10;
    }

    cout<<"The reverse of the number is: "<<reversed<<endl;

    if(num == reversed)
    {
        cout<<"The number is palindrome.";
    }
    else
    {
        cout<<"The number is not a palindrome. ";
    }

    return 0;

}
