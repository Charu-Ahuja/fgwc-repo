#include <iostream>
using namespace std;
void Sort_Numbers(int arr[], int n)
{
    int count0 = 0;
    int count1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            count0++;
        }
        else if (arr[i] == 1)
        {
            count1++;
        }
    }
    for (int i = 0; i < count0; i++)
    {
        arr[i] = 0;
    }
    for (int i = count0; i < count0 + count1; i++)
    {
        arr[i] = 1;
    }
    for (int i = count0 + count1; i < n; i++)
    {
        arr[i] = 2;
    }
}
int main()
{
    int arr[7] = {0, 1, 2, 0, 1, 2, 0};
    int n = 7;
    Sort_Numbers(arr, n);
    //  Print all the sorted numbers now
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}