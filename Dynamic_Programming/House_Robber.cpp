#include <iostream>
#include <vector>
using namespace std;
// Using Top - Down Approach or Memoization + Recursion
class Solution
{
public:
    int houseRobber(vector<int> &nums, int i, vector<int> &dp)
    {
        //  Base Case
        // Where the robber has come out of the street now , no houses are available so he cant rob any hence can't gain any money !!
        if (i >= nums.size())
        {
            return 0;
        }
        // Step 3 : If the anwer already exists then return that
        if (dp[i] != -1)
        {
            return dp[i];
        }
        // Step 2 : Store the answers of subpbs in dp array
        // Recursive Logic
        int include = nums[i] + houseRobber(nums, i + 2, dp);
        int exclude = 0 + houseRobber(nums, i + 1, dp);
        dp[i] = max(include, exclude);
        return dp[i];
    }
    int rob(vector<int> &nums)
    {
        int n = nums.size();
        int i;
        //  Step 1 : create dp array
        vector<int> dp(n, -1);
        int ans = houseRobber(nums, 0, dp);
        return ans;
    }
};
