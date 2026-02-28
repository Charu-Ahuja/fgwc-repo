// Time Complexity is O(2^n)
// Space Complexity is O(n)

#include <iostream>
#include <vector>
using namespace std;

int solve(int W, vector<int> &wt, vector<int> &val, int index)
{
    // Base Case
    if (index == 0)
    {
        if (wt[0] <= W)
            return val[0];
        else
            return 0;
    }

    if (index < 0)
        return 0;

    int include = 0;

    if (wt[index] <= W)
        include = val[index] + solve(W - wt[index], wt, val, index - 1);

    int exclude = solve(W, wt, val, index - 1);

    return max(include, exclude);
}

int Knapsack(int W, vector<int> wt, vector<int> val)
{
    int n = val.size();
    return solve(W, wt, val, n - 1);
}

int main()
{
    return 0;
}