
//C++ Program to Convert Binary Number to Decimal and vice-versa

#include<iostream>
#include<cmath>

using namespace std;

int binaryToDecimal(int binaryNum)
{

    int decimalNum=0,base=1;
    while(binaryNum>0)
    {
        int lastDigit=binaryNum%10;
        binaryNum/=10;
        decimalNum+=lastDigit*base;
        base*=2;
    }
    return decimalNum;

}

int decimalToBinary(int decimalNum)
{
    int binaryNum=0,base=1;
    while(decimalNum>0)
    {
        int lastDigit=decimalNum%2;
        decimalNum/=2;
        binaryNum+=lastDigit*base;
        base*=10;
    }
    return binaryNum;
}


int main()
{
    int choice,num;
    cout<<"Enter 1 to convert binary to decimal"<<endl;
      cout<<"Enter 2 to convert decimal to binary"<<endl;
      cin>>choice;
      if(choice!=1 && choice !=2)
      {
          cout<<"Invalid choice.Please enter 1 or 2."<<endl;
          return 0;
      }
      cout<<"Enter the number: ";
      cin>>num;
      if(choice ==1)
      {
          int decimalNum=binaryToDecimal(num);
          cout<<"The decimal equivalent of "<<num<<" is: "<<decimalNum<<endl;
      }
      else
      {
          int binaryNum=decimalToBinary(num);
          cout<<"The binary equivalent of"<<num<<" is : "<<binaryNum<<endl;

      }
      return 0;

}
