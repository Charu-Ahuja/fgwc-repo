#include <iostream>
using namespace std;
int Min_Element(int arr[][3], int m, int n)
{
    int mini = INT_MAX;
    int row = -1;
    int col = -1;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] < mini)
            {
                mini = arr[i][j];
                row = i;
                col = j;
            }
        }
    }
    cout << "The minimum element is found at idx : " << "(" << row << "," << col << ")" << endl;
    return mini;
}
int Max_Element(int arr[2][3], int m, int n)
{
    int maxi = INT_MIN;
    int row = -1;
    int col = -1;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] > maxi)
            {
                maxi = arr[i][j];
                row = i;
                col = j;
            }
        }
    }
    cout << "The maximum element is found at idx : " << "(" << row << "," << col << ")" << endl;
    return maxi;
}
int main()
{
    int arr[2][3] = {
        {100, 103, 207},
        {119, 617, 90},
    };
    int m = 2;
    int n = 3;
    int minans = Min_Element(arr, m, n);
    int maxans = Max_Element(arr, m, n);
    cout << "The minimum element of the matrix is : " << minans << endl;
    cout << "The maximum element of the matrix is : " << maxans << endl;
    return 0;
}