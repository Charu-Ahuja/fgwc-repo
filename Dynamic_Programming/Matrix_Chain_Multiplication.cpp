#include<iostream>
#include<vector>
using namespace std ;
class Solution {
  public:
    int t[101][101] ;
    int f(int i , int j , vector<int> &arr){
        // Base Case
        if(i == j){
            // only single matrix exists 
            return 0 ;
        }
        if(t[i][j] != -1){
            return t[i][j] ;
        }
        int steps = 0 ;
        int mini = INT_MAX ;
        // To figure out all partitions and calculate the operations 
        for(int k = i ; k < j ; k++){
            steps = arr[i-1] *arr[k]*arr[j] + f(i , k , arr) + f(k+1 , j , arr) ;
            mini = min(mini , steps) ;
        }
        return t[i][j] =  mini ;
        
    }
    int matrixMultiplication(vector<int> &arr) {
        int n = arr.size() ;
        int i = 1 ;
        int j = n - 1 ;
        memset(t , -1 , sizeof(t)) ;
        return f(i , j , arr) ;
        // code here
        
    }
};