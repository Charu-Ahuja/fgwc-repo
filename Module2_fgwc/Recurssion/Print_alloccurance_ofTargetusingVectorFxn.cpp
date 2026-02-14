#include <iostream>
#include <vector>
using namespace std;

vector<int> findIndices(int arr[], int n, int index, int target)
{
    // Base case
    if (index == n)
    {
        vector<int> empty;
        return empty;
    }

    // Recursive call
    vector<int> result = findIndices(arr, n, index + 1, target);

    // Processing
    if (arr[index] == target)
    {
        result.insert(result.begin(), index);
    }

    return result;
}

int main()
{
    int arr[] = {5, 2, 5, 7, 5, 9};
    int n = 6;
    int target = 5;

    vector<int> ans = findIndices(arr, n, 0, target);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}
