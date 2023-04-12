
//C++ Program to Display Armstrong Number Between Two Intervals

#include<iostream>
using namespace std;

int main()
{

    int start,ending,num,n,sum,remainder;

    cout<<"Enter the starting number: ";
    cin>>start;

    cout<<"Enter the ending number: ";
    cin>>ending;

    cout<<"Armstrong numbers between "<<start<<" and "<<ending<<" are ";

    for(num=start; num<=ending; num++)
    {
        n=num;
        sum=0;

        while(n!=0)
        {
            remainder =  n%10;
            sum = sum+(remainder*remainder*remainder);
            n=n/10;
        }

        if(sum==num)
        {
            cout<<num<<endl;
        }
    }

    return 0;


}
