#include <iostream>
using namespace std;
int Binary_Search(int arr[], int n, int target)
{
    int low = 0;
    int high = n - 1;
    int mid = low + (high - low) / 2;
    for (int i = 0; i < n; i++)
    {
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (target > arr[mid])
        {
            low = mid + 1;
        }
        else if (target < arr[mid])
        {
            high = mid - 1;
        }
        mid = low + (high - low) / 2;
    }
    return -1;
}
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int n = 5;
    int target;
    cout << "Enter target : " << " ";
    cin >> target;
    int ans = Binary_Search(arr, n, target);
    if (ans != -1)
    {
        cout << "Target found at index : " << ans << endl;
    }
    else
    {
        cout <<"Target not found !!"<<endl ;
    }
    return 0;
}