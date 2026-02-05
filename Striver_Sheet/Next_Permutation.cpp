#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    // TC->O(N)
    // SC->O(1)
    void nextPermutation(vector<int> &nums)
    {
        int n = nums.size();
        int idx = -1;
        //  first check the break point , get the index of break point
        for (int i = n - 2; i >= 0; i--)
        {
            if (nums[i] < nums[i + 1])
            {
                idx = i;
                break;
            }
        }
        //  If no break point exists , i.e we are at the last permutation , no other permutation exists , so reverse the numbers and get the first permutation created
        if (idx == -1)
        {
            reverse(nums.begin(), nums.end());
            return;
        }
        //  From th end we have to check the element greater than my element at idx , and swap them
        for (int i = n - 1; i >= 0; i--)
        {
            if (nums[i] > nums[idx])
            {
                swap(nums[i], nums[idx]);
                break;
            }
        }
        //  for the numbers remaining after swap , reverse them they will come in the sorted fashion , and i will get my next greater element !!
        reverse(nums.begin() + idx + 1, nums.end());
    }
};