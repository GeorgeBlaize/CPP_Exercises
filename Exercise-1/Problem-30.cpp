
//C++ Programs To Create Pyramid and Pattern

#include<iostream>
using namespace std;

int main()
{

    int num=5;
    for(int i=1; i<=num; i++)
    {
       for( int j=1; j<=i; j++)
       {
           cout<<" *";
       }
       cout<<"\n";
    }

    return 0;

}