
//C++ Program to Find LCM

#include<iostream>
using namespace std;

int main()
{
    int a,b,maximum,minimum,remainder;
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

    while(maximum%minimum!=0)
    {
        remainder=maximum%minimum;
        maximum=minimum;
        minimum=remainder;
    }

    cout<<"HCF = "<<minimum<<endl;
    cout<<"LCM = "<<(a*b)/minimum;

    return 0;

}
