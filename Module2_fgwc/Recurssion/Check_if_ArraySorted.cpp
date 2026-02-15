#include <iostream>
using namespace std;

bool Sorted_Array(int arr[], int n, int index)
{
    // Base case
    if (index == n - 1)
        return true;

    // Processing , if order breaks not sorted
    if (arr[index] > arr[index + 1])
        return false;

    // Check remaining (Recursive Call)
    return Sorted_Array(arr, n, index + 1);
}

int main()
{
    int arr[4] = {20, 20, 49, 80};
    int n = 4;

    bool ans = Sorted_Array(arr, n, 0);

    if (ans)
        cout << "Array is sorted";
    else
        cout << "Array is not sorted";

    return 0;
}
