// To find out the maximum sum of the non adjacent elements in the array
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    int solve(vector<int> &nums, int i, int end)
    {
        if (i > end)
            return 0;

        return max(
            nums[i] + solve(nums, i + 2, end), // rob
            solve(nums, i + 1, end)            // skip
        );
    }

    int rob(vector<int> &nums)
    {
        int n = nums.size();

        if (n == 1)
            return nums[0];

        int case1 = solve(nums, 0, n - 2); // exclude last
        int case2 = solve(nums, 1, n - 1); // exclude first

        return max(case1, case2);
    }
};
int main()
{
    return 0;
}