#include <iostream>
using namespace std;
bool Search_ArrayElement(int arr[], int n, int index, int target)
{
    //  Base case
    if (index >= n)
    {
        return false;
    }
    //  Check the current element
    if (arr[index] == target)
    {
        return true;
    }
    // Serach in rest of the Array
    return Search_ArrayElement(arr , n , index+1 , target) ;
}
int main()
{
    int arr[5] = {10, 32, 45, 65, 18};
    int n = 5;
    int target;
    cout << "Enter the value of target element : " << " ";
    cin >> target;
    bool ans = Search_ArrayElement(arr, n, 0, target);
    if (ans)
    {
        cout << "Element is Found !!" << " ";
    }
    else
    {
        cout << "Element not found !!" << " ";
    }
    return 0;
}