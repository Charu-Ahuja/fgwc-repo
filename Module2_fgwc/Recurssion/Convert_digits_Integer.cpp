#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int convert_digits_toInteger(vector<int> &arr, int n, int index, int exp)
{
    // Base Case
    if (index >= n)
    {
        return 0;
    }
    // Processing
    return arr[index] * pow(10, exp) + convert_digits_toInteger(arr, n, index + 1, exp - 1);
}
int main()
{
    vector<int> arr;
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(6);
    arr.push_back(0);
    int n = arr.size();
    int exp = n - 1;
    int index = 0;
    int ans = convert_digits_toInteger(arr, n, index, n - 1);
    cout << ans << endl;
    return 0;
}