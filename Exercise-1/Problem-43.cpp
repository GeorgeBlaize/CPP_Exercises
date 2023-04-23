
//C++ Program to Calculate Average of Numbers Using Arrays


#include<iostream>
using namespace std;

int main()
{

    int n;

    float num[100];

    float sum=0.0,avg;
    cout<<"Enter the numbers of data: ";
    cin>>n;


    for(int i=0; i<n; i++)
    {
        cout<<"Enter number: ";
        cin>>num[i];

        sum=sum+num[i];
    }

    avg=sum/n;

    cout<<"Average = "<<avg;

    return 0;

}
