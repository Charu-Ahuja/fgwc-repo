#include<iostream>
#include<vector>
using namespace std ;
class Solution {
public:
    int n;
    int fun(vector<int>& coins, int amount, int idx) {
        if(idx>=n) {
            if(amount==0) return 0;
            return 1e9;
        }
        int skip=0+fun(coins,amount,idx+1);
        int take=1e9;
        if(coins[idx]<=amount) take=1+fun(coins,amount-coins[idx],idx);
        return min(skip,take);
    }
    int coinChange(vector<int>& coins, int amount) {
        n=coins.size();
        int ans=fun(coins,amount,0);
        return ans>=1e9?-1:ans;
    }
};
int main(){
    return 0 ;
}