#include <iostream>
using namespace std;
void Row_wise_Sum(int arr[][3], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += arr[i][j];
        }
        cout << "Sum of " << i << "th row : " << sum << endl;
    }
}
void Col_wise_Sum(int arr[][3], int m, int n)
{
    for (int j = 0; j < n; j++)
    {
        int sum = 0;
        for (int i = 0; i < m; i++)
        {
            sum += arr[i][j];
        }

        cout << "Sum of the " << j << "th col : " << sum << endl;
    }
}
void Diagonal_Sum(int arr[][3], int m, int n)
{
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                sum += arr[i][j];
            }
        }
    }
    cout << "The sum of the left diagonal is : " << sum << endl;
}
void Right_Diagonal_Sum(int arr[][3], int m, int n)
{
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i + j == n - 1)
            {
                sum += arr[i][j];
            }
        }
    }
    cout << "The sum of right diagonal : " << sum << endl;
}
int main()
{
    int arr[2][3] = {
        {10, 20, 30},
        {11, 12, 13}};
    int m = 2;
    int n = 3;
    Row_wise_Sum(arr, m, n);
    cout << endl;
    Col_wise_Sum(arr, m, n);
    cout << endl;
    Diagonal_Sum(arr, m, n);
    cout << endl;
    Right_Diagonal_Sum(arr, m, n);
    return 0;
}