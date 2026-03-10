#include<iostream>
using namespace std ;
class Solution {
public:

    int dp[101][10001];

    int solve(int k , int n){

        if(n == 0 || n == 1)
            return n;

        if(k == 1)
            return n;

        if(dp[k][n] != -1)
            return dp[k][n];

        int mini = INT_MAX;

        int low = 1;
        int high = n;

        while(low <= high){

            int t = (low + high) / 2;

            int breakegg = solve(k - 1 , t - 1);
            int savedegg = solve(k , n - t);

            int temp = 1 + max(breakegg , savedegg);

            mini = min(mini , temp);

            if(breakegg > savedegg)
                high = t - 1;
            else
                low = t + 1;
        }

        return dp[k][n] = mini;
    }

    int superEggDrop(int k, int n) {

        memset(dp , -1 , sizeof(dp));

        return solve(k , n);
    }
};