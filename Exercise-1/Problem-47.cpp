
//C++ Program to Multiply Two Matrix Using Multi-dimensional Arrays

#include<iostream>
using namespace std;

int main()
{

    int a[100][100],b[100][100],mult[100][100],r1,c1,r2,c2;

    cout<<"Enter rows and columns for first matrix: ";
    cin>>r1>>c1;
    cout<<"Enter rows and columns for first matrix: ";
    cin>>r2>>c2;

    while(c1!=r2)
    {
        cout<<"Error! column of first matrix not equal to row of second.";
        cout<<"Enter rows and columns for first matrix: ";
        cin>>r1>>c1;

        cout<<"Enter rows and columns for second matrix: ";
        cin>>r2>>c2;

        cout<<endl<<"Enter elements of matrix 1: "<<endl;
        for(int i=0;i<r1; i++)
        {
            for(int j=0; j<c1; j++)
            {
                cout<<"Enter element a"<<i+1<<j+1<<" : ";
                cin>>a[i][j];
            }
        }

          cout<<endl<<"Enter elements of matrix 2: "<<endl;
        for(int i=0;i<r1; i++)
        {
            for(int j=0; j<c1; j++)
            {
                cout<<"Enter element a"<<i+1<<j+1<<" : ";
                cin>>b[i][j];
            }
        }

        for(int i=0; i<r1; i++)
        {
            for(int j=0; j<c2; j++)
            {
                mult[i][j]=0;
            }
        }

        for(int i=0; i<r1; i++)
        {
            for(int j=0; j<c2; j++)
            {
                for(int k=0; k<c1; k++)
                {
                    mult[i][j] +=a[i][k]*b[k][j];
                }
            }
        }

        cout<<endl<<"Output Matrix: "<<endl;
        for(int i=0; i<r1; i++)
        {
            for(int j=0; j<c2; j++)
            {
                cout<<" "<<mult[i][j];
                if(j==c2-1)
                    cout<<endl;
            }
        }
    }
    return 0;
}
