#include <iostream>
using namespace std;
int Valid_ArrayIndex(int arr[], int n, int index, int target)
{
    // Base Case
    if (index >= n)
    {
        return -1;
    }
    // Processing
    if (arr[index] == target)
    {
        return index;
    }
    // Recursive Call
   return Valid_ArrayIndex(arr , n , index+1 , target);
}
int main()
{
    int arr[4] = {12, 45, 22, 10};
    int n = 4;
    int target;
    cout << "Enter the value of target element : " << " ";
    cin >> target;
    int index = 0;
    int ans = Valid_ArrayIndex(arr, n, index, target);
    cout<<"The index of the target element present in the Array is : "<<ans<<endl ;
    return 0;
}