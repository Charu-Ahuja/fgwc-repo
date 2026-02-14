#include <iostream>
#include <vector>
using namespace std;
void arrayElements_toVector(int arr[], int n, int index, vector<int> &temp)
{
    // Base Case
    if (index >= n)
    {
        return;
    }
    //  Processing
    if (arr[index] % 2 == 0)
    {
        temp.push_back(arr[index]);
    }
    // Recursive Call
    arrayElements_toVector(arr, n, index + 1, temp);
}
int main()
{
    int arr[5] = {11, 21, 44, 56, 98};
    int n = 5;
    vector<int> temp;
    arrayElements_toVector(arr, n, 0, temp);
    for (int i = 0; i < temp.size(); i++)
    {
        cout << temp[i] << " ";
    }
    return 0;
}