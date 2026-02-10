#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<int> findMissingRepeatingNumbers(vector<int> nums)
    {
        vector<int> ans ;
        int n = nums.size();
        int A = -1;
        int B = -1;
        for (int i = 1; i < n; i++)
        {
            int cnt = 0;
            for (int j = 0; j < n; j++)
            {
                if (nums[j] == i)
                {
                    cnt++;
                }
                if (cnt == 2)
                {

                    A = i;
                }
                if (cnt == 0)
                {
                    B = i;
                }
                if (A != -1 && B != -1)
                {
                    break;
                }
            }
        }
        ans.push_back(A) ;
        ans.push_back(B) ;
        return ans ;
    }
};
int main()
{
    return 0;
}