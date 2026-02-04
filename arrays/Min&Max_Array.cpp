#include <iostream>
using namespace std;
int Get_Min(int arr[], int n)
{
    int mini = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < mini)
        {
            mini = arr[i];
        }
    }
    return mini;
}
int Get_Max(int arr[], int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
int main()
{
    int arr[6] = {22, 14, 8, 17, 35, 3};
    int n = 6;
    int min_ans = Get_Min(arr, n);
    cout << "The minimum element of the given array is : " << min_ans << endl;
    int max_ans = Get_Max(arr, n);
    cout <<"The maximum element of the given array is : "<<max_ans<<endl ;
    return 0;
}
