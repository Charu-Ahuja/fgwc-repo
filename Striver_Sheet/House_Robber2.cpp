#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
private:
    int robLinear(vector<int> &nums, int start, int end, int current)
    {
        // Base case: we've gone past the last house
        if (current > end)
        {
            return 0;
        }

        // Option 1: Skip current house
        int skip = robLinear(nums, start, end, current + 1);

        // Option 2: Rob current house
        int rob = nums[current] + robLinear(nums, start, end, current + 2);

        return max(skip, rob);
    }

public:
    int rob(vector<int> &nums)
    {
        int n = nums.size();

        // Handle edge cases
        if (n == 0)
            return 0;
        if (n == 1)
            return nums[0];

        // Case 1: Exclude last house (rob from index 0 to n-2)
        int case1 = robLinear(nums, 0, n - 2, 0);

        // Case 2: Exclude first house (rob from index 1 to n-1)
        int case2 = robLinear(nums, 1, n - 1, 1);

        return max(case1, case2);
    }
};