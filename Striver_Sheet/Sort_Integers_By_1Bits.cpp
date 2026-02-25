#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int CountOne(int num)
{
    int count = 0;
    while (num != 0)
    {
        count += num & 1;
        num >>= 1;
    }
    return count;
}

bool compareByBits(int a, int b)
{
    int count_a = CountOne(a);
    int count_b = CountOne(b);

    if (count_a == count_b)
    {
        return a < b;
    }
    return count_a < count_b;
}

vector<int> sortBybits(vector<int> &arr)
{
    sort(arr.begin(), arr.end(), compareByBits);
    return arr;
}

int main()
{
    // Example usage
    vector<int> arr;
    arr.push_back(5);
    arr.push_back(3);
    arr.push_back(1);
    arr.push_back(6);

    cout << "Original array: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    sortBybits(arr);

    cout << "Sorted by number of 1 bits: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}