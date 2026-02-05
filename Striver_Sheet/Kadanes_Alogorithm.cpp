#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

void Print_Max_Subarray_Sum(int arr[], int n)
{
    int maxSum = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int currSum = 0;

            for (int k = i; k <= j; k++)
            {
                cout << arr[k] << " ";
                currSum += arr[k];
            }

            cout << " -> Sum = " << currSum << endl;

            maxSum = max(maxSum, currSum);
        }
        cout << endl;
    }

    cout << "Maximum Subarray Sum is : " << maxSum << endl;
}

int main()
{
    int arr[7] = {3, -4, 5, 4, -1, 7, -8};
    int n = 7;

    Print_Max_Subarray_Sum(arr, n);
    return 0;
}
