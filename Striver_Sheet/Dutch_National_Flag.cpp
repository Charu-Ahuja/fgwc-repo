#include <iostream>
#include <algorithm>
using namespace std;
void Dutch_National_Flag(int arr[], int n)
{
    int low = 0;
    int mid = 0;
    int high = n - 1;
    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[mid], arr[low]);
            mid++;
            low++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else if (arr[mid] == 2)
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}
int main()
{
    int arr[9] = {0, 0, 1, 2, 1, 0, 2, 0, 2};
    int n = 9;
    Dutch_National_Flag(arr, n);
    //  Print all the sorted elements
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}