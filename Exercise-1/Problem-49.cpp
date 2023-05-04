
//C++ Program to Multiply two Matrices by Passing Matrix to Function

#include <iostream>

using namespace std;

const int MAX = 100;

// Function to multiply two matrices
void multiplyMatrix(int mat1[][MAX], int mat2[][MAX], int res[][MAX], int r1, int c1, int r2, int c2)
{
    // Checking if multiplication is possible
    if (c1 != r2)
    {
        cout << "Invalid dimensions for matrix multiplication!" << endl;
        return;
    }

    // Multiplying matrices
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            res[i][j] = 0;
            for (int k = 0; k < c1; k++)
            {
                res[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

// Function to display a matrix
void displayMatrix(int mat[][MAX], int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int mat1[MAX][MAX], mat2[MAX][MAX], res[MAX][MAX];
    int r1, c1, r2, c2;

    cout << "Enter the number of rows and columns of matrix 1: ";
    cin >> r1 >> c1;

    cout << "Enter the elements of matrix 1: " << endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cin >> mat1[i][j];
        }
    }

    cout << "Enter the number of rows and columns of matrix 2: ";
    cin >> r2 >> c2;

    cout << "Enter the elements of matrix 2: " << endl;
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cin >> mat2[i][j];
        }
    }

    // Multiplying matrices
    multiplyMatrix(mat1, mat2, res, r1, c1, r2, c2);

    // Displaying the result
    cout << "Resultant matrix: " << endl;
    displayMatrix(res, r1, c2);

    return 0;
}
