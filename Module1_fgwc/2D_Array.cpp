// Different ways to traverse a 2D Array or Matrix 
#include <iostream>
using namespace std;
int main()
{
    int m = 3;
    int n = 3;
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
    };
    //  row wise
    cout<< "Row wise printing in 2D Array / Matrix : " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    //  for col wise
    cout << "Col wise printing in 2D Array / Matrix : " << endl;
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < m; i++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    //  for digonal printing
    cout << endl;
    cout << "Diagonal wise printing in 2D Array / Matrix : " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                cout << arr[i][j] << " ";
            }
        }
    }
    cout << endl;
    //  for printing the right diagonal
    cout << endl;
    cout << "for printing the right diagonal" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i + j == n - 1)
            {
                cout << arr[i][j] << " ";
            }
        }
    }
    cout << endl;
}
