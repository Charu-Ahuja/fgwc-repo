//  You are given a line segment or a rod of length n as input and given the 3 line segments of length x , y and z , Your task is to cut the rod into multiple segments using the line segments x , y , z such that you obtain the maximum no of segments of the given rod
#include <iostream>
using namespace std;
class Solution
{
public:
    int maximizeTheCuts(int n, int x, int y, int z)
    {
        // Base Case
        if (n == 0)
        {
            return 0;
        }
        if (n < 0)
        {
            return INT_MIN;
        }
        // Recursive Call (Head Recursion)
        int option1 = 1 + maximizeTheCuts(n - x, x, y, z);
        int option2 = 1 + maximizeTheCuts(n - y, x, y, z);
        int option3 = 1 + maximizeTheCuts(n - z, x, y, z);

        // Processing
        int finalAns = max(option1, max(option2, option3));
        return finalAns;
    }
};
int main()
{
    return 0;
}