//  In place Transpose of Matrix is only possible for Square matrices !!
#include <iostream>
#include <algorithm>
using namespace std;
void Transpose_Matrix(int arr[3][3], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = i; j < n; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
}
int main()
{
    int arr[3][3] = {
        {12, 13, 14},
        {10, 20, 30},
        {11, 23, 45},
    };
    int m = 3;
    int n = 3;
    //  Print the matrix before transpose
    cout << "Matrix Initially :" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    //  After Transpose
    Transpose_Matrix(arr, m, n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}