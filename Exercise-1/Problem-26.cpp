
//C++ Program to Display Prime Numbers Between Two Intervals


#include<iostream>
using namespace std;

int main()
{

    int start,ending,i,j,flag;

    cout<<"Enter two numbers(intervals): ";
    cin>>start>>ending;

    cout<<"Prime numbers between "<<start<<" and "<<ending<<" are :";
    for(int i=start; i<=ending; i++)
    {
        if(i==1 || i==0)
            continue;
        flag=1;

        for(j=2; j<=i/2; j++)
        {
            if(i%j==0)
            {

                flag=0;
                break;
            }

        }

        if(flag==1)

            cout<<i <<", ";

    }

    return 0;
}

