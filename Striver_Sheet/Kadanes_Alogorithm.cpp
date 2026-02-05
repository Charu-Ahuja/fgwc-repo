//  Brute Force method to print all the subarrays for a given array is :->
// TC -> O(n^3)
// SC ->O(1)

#include <iostream>
using namespace std;
void Print_all_Subarrays(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << arr[k];
            }
            cout << " ";
        }
        cout << endl;
    }
}
int main()
{
    int arr[6] = {1, 3, 7, 9, 0, 2};
    int n = 6;
    Print_all_Subarrays(arr, n);
    return 0;
}