#include <iostream>
using namespace std;
void printForwardArray(int arr[], int n, int index)
{
    //  Base Case
    if (index >= n)
    {
        return;
    }
    //  Processing
    cout << arr[index] << " ";
    //  Recursive call
    printForwardArray(arr, n, index + 1);
}
void PrintReverseArray(int arr[], int n, int index)
{
    //  Base Case
    if (index < 0)
    {
        return;
    }
    //  Processing
    cout << arr[index] << " ";
    //  Recursive call
    PrintReverseArray(arr, n, index - 1);
}
int main()
{
    int arr[5] = {34, 56, 21, 78, 31};
    int n = 5;
    printForwardArray(arr, n, 0);
    cout << endl;
    PrintReverseArray(arr, n, n - 1);
}