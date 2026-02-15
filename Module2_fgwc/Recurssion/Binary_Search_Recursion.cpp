#include <iostream>
using namespace std;
int Binary_Search(int arr[], int n, int st, int end, int target)
{
    // Base Case
    if (st > end)
    {
        return -1;
    }
    // Processing
    int mid = st + (end - st)/2 ;
    if (arr[mid] == target){
        return mid ;
    }
    // Recursive call
    if(target > arr[mid]){
       return Binary_Search(arr , n , mid + 1 , end , target) ;
    }
    return Binary_Search(arr , n , st , mid -1 , target) ;
}
int main()
{
    int arr[4] = {10, 20, 30, 60};
    int n = 4;
    int st;
    int end;
    int target;
    cout << "Enter the value of target element : ";
    cin >> target;
    int ans = Binary_Search(arr, n, 0, n - 1, target);
    if (ans == -1)
    {
        cout << "Target Element not found !!" << endl;
    }
    else
    {
        cout << "Target element is found at index : " << ans << endl;
    }

    return 0;
}