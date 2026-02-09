#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<int> rearrangeArray(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> positive;
        vector<int> negative;
        vector<int> ans(n);
        int p = 0;
        int q = 0;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] > 0)
            {
                positive.push_back(nums[i]);
            }
            else if (nums[i] < 0)
            {
                negative.push_back(nums[i]);
            }
        }
        //  here i have to traverse in the ans array
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                //  if idx is even then push back positive element
                ans[i] = positive[p];
                p++;
            }
            else if (i % 2 == 1)
            {
                //  if idx is odd then push back the negative element
                ans[i] = negative[q];
                q++;
            }
        }
        nums = ans;
        return nums;
    }
};
int main()
{
    return 0;
}
// Given an integer array nums -> 0 indexed
// consist of equal number of positive and negative elements
//  The length of nums is even
//  O/P should follow
//  every consecutive pair of imtegers have opposite sign
// the order of elements with same sign
//  i.e , positive elements and negative elements their internal order should remain same
// The rearranged array begins with positive number
//  i/p -> 3 , 1, -2, -5 , 2, -4

// positive -> 3 , 1, 2
//  negative -> -2 , -5 , -4
//    3 , -2 , 1 , -5 , 2 , -4

//  -1 , 1
//  positive -> 1
//  negative -> -1
//  o/p -> 1 , -1
//  Constraints :->
//   2 <= nums.length()<= 2 * 10^5
//   nums.length always even
//  1 <= |nums[i]| <= 10^5
//  nums has equal number of positive and negative numbers