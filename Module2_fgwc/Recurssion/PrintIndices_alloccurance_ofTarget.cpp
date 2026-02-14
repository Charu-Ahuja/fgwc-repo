// 12 , 34, 12, 7 , 8 , 12
// target = 12
#include <iostream>
using namespace std;
void Print_Target_Indices(int arr[], int n, int index, int target)
{
    // Base Case
    if (index >= n)
    {
        return;
    }
    // Processing
    if (arr[index] == target)
    {
        cout << index<<" ";
    }
    // Recursive Call
    Print_Target_Indices(arr, n, index + 1, target);
}
int main()
{
    int arr[6] = {12, 34, 12, 7, 8, 12};
    int n = 6;
    int target = 12;
    Print_Target_Indices(arr, n, 0, target);
    cout << endl;
    return 0;
}