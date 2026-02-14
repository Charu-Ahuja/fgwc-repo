#include <iostream>
#include <algorithm>
using namespace std;
void MaxElement_Array(int arr[], int n, int index, int &maxi)
{
    // Base Case
    if (index >= n)
    {
        return;
    }
    //  Processing
    maxi = max(maxi, arr[index]);
    // Recursive Call
    MaxElement_Array(arr , n , index + 1 , maxi) ;
}
int main()
{
    int arr[5] = {32, 44, 67, 89, 51};
    int n = 5;
    int maxi = INT_MIN;
    int index;
    MaxElement_Array(arr, n, 0, maxi);
    cout << "The maximum element present in the array is : " << maxi << endl;
    return 0;
}