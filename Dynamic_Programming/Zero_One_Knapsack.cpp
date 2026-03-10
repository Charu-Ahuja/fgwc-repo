#include<iostream>
#include<vector>
using namespace std ;
class Solution {
  public:
   int t[1001][1001] ;
    int solve(int W , vector<int> &val , vector<int> &wt , int idx){

        // Base Case
        if(idx == 0){
            if(wt[0] <= W){
                return val[0];
            }
            else{
                return 0;
            }
        }
        if(t[idx][W] != -1) return t[idx][W] ;

        int include = 0 ;
        int exclude = 0 ;

        // include case
        if(wt[idx] <= W){
            include = val[idx] + solve(W - wt[idx] , val , wt , idx - 1);
        }

        // exclude case (always possible)
        exclude = solve(W , val , wt , idx - 1);

        return t[idx][W] = max(include , exclude);
    }

    int knapsack(int W, vector<int> &val, vector<int> &wt) {
        int n = val.size();
        int idx = n - 1;
        memset(t , -1 , sizeof(t)) ;
        return solve(W , val , wt , idx);
    }
};