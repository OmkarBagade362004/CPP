#include <iostream>
using namespace std;

int main()
{
    int r, c;
    cout << "Enter no. of rows and cols respectively" << endl;
    cin >> r >> c;

    // initial the matrix
    int sm[r][c];
    cout << "Enter elems in the sparse matrix" << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> sm[i][j];
        }
    }
    // output the matrix
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << sm[i][j];
        }
        cout << endl;
    }
    // output the non-zero element in the matrix with their index
    cout << "Sparse Matrix: " << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (sm[i][j] != 0)
            {
                cout << "Matrix[" << i << "][" << j << "]=" << sm[i][j] << endl;
            }
        }
        cout << endl;
    }
    

    return 0;
}