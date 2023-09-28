#include <iostream>
using namespace std;

int main()
{
    int m, n; // rows -- m   and cols -- n
    cout << "Enter rows and cols respectively:" << endl;
    cin >> m >> n;

    // intialize two matrices
    int m1[m][n], m2[m][n], result[m][n];

    // initilisze both the matrices zero
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Enter the elems in the matrix: ";
            m1[i][j] = 0;
            m2[i][j] = 0;
        }
    }

    int numNonZero;
    cout << "Enter number of non zero elems in the matrices:" << endl;
    cin >> numNonZero;

    int row, col, value;

    // input for the first matrix
    cout << "Enter elems for first sparse matrix:(row,col,value)" << endl;
    for (int i = 0; i < numNonZero; i++)
    {
        cin >> row >> col >> value;
        m1[row][col] = value;
    }
    // input for the second matrix
    cout << "Enter elems for second sparse matrix:(row,col,value)" << endl;
    for (int i = 0; i < numNonZero; i++)
    {
        cin >> row >> col >> value;
        m2[row][col] = value;
    }

    // perform matrix addition
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            result[i][j] = m1[i][j] + m2[i][j];
        }
    }

    // display the resultant matrix
    cout << "Resultant matrix after addition:" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << result[i][j] << "";
        }
        cout << endl;
    }

    return 0;
}
