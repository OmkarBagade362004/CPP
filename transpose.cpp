#include <iostream>
using namespace std;

int main()
{
    int a[4][4], tr[4][4], row, col, i, j;
    cout << "Enter rows and col respectively" << endl;
    cin >> row >> col;

    cout << "enter elems in matrix" << endl;

    // initialising matrix
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cout << "enter elem a" << i << j << ":";
            cin >> a[i][j];
        }
    }
    // printing matrix
    cout << "entered matrix: " << endl;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cout << a[i][j];
        }
        cout << endl;
    }

    // computing transpose of the matrix
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            tr[i][j] = a[j][i];
        }
    }

    // transpose of the matrix entered
    cout << "transpose matrix: " << endl;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cout << tr[i][j];
        }
        cout << endl;
    }
}