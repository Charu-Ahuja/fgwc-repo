#include <iostream>
using namespace std;
int searchElement(int arr[][3], int rows, int cols, int target, int &rowIdx, int &colIdx)
{
    bool found = false;

    // Linear traversal (row-wise)
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] == target)
            {
                rowIdx = i;
                colIdx = j;
                found = true;
                return 1; // element found
            }
        }
    }

    return 0; // element not found
}

int main()
{
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int target = 8 ;

    int row = -1, col = -1; 

    int result = searchElement(arr, 3, 3, target, row, col);

    if (result == 1)
    {
        cout << "Element found at index: (" << row << ", " << col << ")";
    }
    else
    {
        cout << "Element not found";
    }

    return 0;
}
