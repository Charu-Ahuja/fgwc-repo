//  Transpose of a matrix is valid for both square and non square matrix when we do the transpose using another temp/ans matrix 
#include <iostream>
#include <algorithm>
using namespace std;

void Transpose_Matrix(int arr[][3], int m, int n)
{
    int ans[100][100] = {0};

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            ans[j][i] = arr[i][j];
        }
    }

    // Printing transpose
    cout << "Transpose Matrix:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int arr[2][3] = {
        {10, 20, 30},
        {11, 12, 13}};

    int m = 2, n = 3;
    Transpose_Matrix(arr, m, n);
    return 0;
}
