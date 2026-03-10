#include<iostream>
using namespace std ;
class Solution {
public:
    int t[1001][1001] ;
    int solve(string &a , string &b , int i , int j){
        // Base Case
        if(i >= a.length()){
            return 0 ;
        }
        if(j >= b.length()){
            return 0 ;
        }
        else if(t[i][j] != -1) {
            return t[i][j] ;
        }
        int ans = 0 ;
        // If the characters matched
        if(a[i] == b[j]){
            ans = 1 + solve(a , b , i+1 , j+1) ;
        }
        // If the characters are unequal
        else{
        ans = max(solve(a , b ,i+1 , j) , solve(a , b ,i , j+1)) ;
        }
        return t[i][j] = ans ;
    }
    int longestCommonSubsequence(string text1, string text2) {
        int i = 0 ;
        int j = 0 ;
        memset(t , -1 , sizeof(t)) ;
        return solve(text1 , text2 , i , j) ;
    }
};