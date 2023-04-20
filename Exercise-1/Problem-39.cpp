
//C++ Program to Convert Octal Number to Decimal and vice-versa

#include<iostream>
#include<cmath>

using namespace std;

int octalToDecimal(int octaNum)
{

    int decimalNum=0,base=1;
    while(octaNum>0)
    {
        int lastDigit=octaNum%10;
        octaNum/=10;
        decimalNum+=lastDigit*base;
        base *=8;

    }
    return decimalNum;
}


int decimalToOctal(int decimalNum)
{
    int octalNum=0,base=1;
    while(decimalNum>0)
    {
        int lastDigit=decimalNum%8;
        decimalNum/=8;
        octalNum+=lastDigit*base;
        base*=10;
    }
    return octalNum;
}

int main()
{

    int choice,num;
    cout<<"Enter 1 to covert octal to decimal"<<endl;
    cout<<"Enter 1 to covert decimal to octal"<<endl;

    cin>>choice;
    if(choice !=1 && choice!=2)
    {
        cout<<"Invalid choice.Please enter 1 or 2."<<endl;
        return 0;

    }
    cout<<"Enter the number: ";
    cin>>num;
    if(choice==1)
    {
        int decimalNum=octalToDecimal(num);
        cout<<"The decimal equivalent of "<<num<<" is: "<<decimalNum<<endl;

    }
    else
    {
        int octalNum = decimalToOctal(num);
        cout<<"The octal equivalent of "<<num <<" is: "<<octalNum<<endl;
    }
    return 0;
}
