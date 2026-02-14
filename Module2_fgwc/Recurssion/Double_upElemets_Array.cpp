#include <iostream>
using namespace std;
void Double_Up(int arr[], int n, int index)
{
    //  Base Case
    if (index >= n)
    {
        return;
    }
    //  Processing
    arr[index] = 2 * arr[index];
    //  Recursive Call
    Double_Up(arr , n , index+1) ;
}
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int n = 5;
    int index;
    Double_Up(arr, n, 0);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}