
//C++ Program to Check Whether a character is Vowel or Consonant.

#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout<<"Enter an alphabet: ";
    cin>>ch;

    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
    {
        cout<<ch<<" is a vowel";
    }
    else  if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
        cout<<ch<<" is a vowel";
    }
    else
    {
        cout<<ch<<" is a consonant";
    }

    return 0;
}
