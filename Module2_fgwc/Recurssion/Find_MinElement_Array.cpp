#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;
void minElement_Array(int arr[], int n, int index, int &mini)
{
    // Base Case
    if (index >= n)
    {
        return;
    }
    // Processing
    mini = min(mini, arr[index]);
    // Recursive call
    minElement_Array(arr , n , index+1 , mini) ;
}
int main()
{
    int arr[5] = {9, 6, 7, 4, 11};
    int n = 5;
    int mini = INT_MAX;
    minElement_Array(arr, n, 0, mini);
    cout<<"The minimum element of Array is : "<<mini<<endl ;
    return 0;
}