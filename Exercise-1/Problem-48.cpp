
//C++ Program to Find Transpose of a Matrix

#include<iostream>
using namespace std;

int main()
{
    int m,n;
    cout<<"Enter the number of rows of the matrix: ";
    cin>>m;
    cout<<"Enter the number of columns of the matrix: ";
    cin>>n;

    int mat[m][n];
    cout<<"Enter the matrix elements: "<<endl;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>mat[i][j];
        }
    }

    cout<<"The tranpose of the matrix is: "<<endl;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout<<mat[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
