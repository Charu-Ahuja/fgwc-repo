#include<iostream>
#include<vector>
using namespace std ;
class Solution {
public:
    int solve(vector<int>& coins , int amount , int idx , vector<vector<int> >&dp){
        // Base Case
        int n = coins.size() ;
        if(idx >= n){
            if(amount == 0) return 0 ;
            if(amount > 0) return 1e9 ;
        }
        if(dp[idx][amount] != -1){
            return dp[idx][amount] ;
        }
        int skip = 0 + solve(coins , amount , idx + 1 , dp) ;
        int include = 1e9 ;
        if(coins[idx] <= amount){
            include = 1 + solve(coins , amount - coins[idx] , idx , dp) ;
        }
        dp[idx][amount] = min(skip , include) ;
        return dp[idx][amount] ;
    }
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size() ;
        vector<vector<int> > dp(n , vector<int>(amount + 1 , -1));
        int ans = solve(coins , amount , 0 , dp) ;
        if(ans >= 1e9){
            return -1 ;
        }
        else{
            return ans ;
        }
        
    }
};
