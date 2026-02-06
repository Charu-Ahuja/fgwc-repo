#include <iostream>
using namespace std;
void Transformed_Array(int arr[], int n)
{
    int i = 0;
    while (i < n)
    {
        int i = arr[i] % n;
        if (arr[i] > 0)
        {
            i = i + arr[i];
        }
        else if (arr[i] < 0)
        {
            i = i - arr[i];
        }
    }
}
int main()
{
    int arr[4] = {3, -2, 1, 1};
    int n = 4;

    Transformed_Array(arr, n);
    return 0;
}