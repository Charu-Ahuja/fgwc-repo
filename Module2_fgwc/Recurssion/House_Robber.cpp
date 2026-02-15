#include<iostream>
#include<vector>
using namespace std ;
class Solution {
public:
int fun(vector<int> &nums , int n , int index){
    //  Base Case
    if(index >= n){
        return 0 ;
    }
    // At the 0 th index , Rob that house 
    int option1 = nums[index] + fun(nums , n , index + 2) ;
    // At the 0 th index , Donot Rob the house , move to next house
    int option2 = 0 + fun(nums , n , index+1) ;
    int Finalans = max(option1, option2) ;
    return Finalans ;
}
    int rob(vector<int>& nums) {
        int n = nums.size();
        int index = 0 ;
        int ans = fun(nums , n , index) ;
        return ans ;   
    }
};
int main(){
    return 0 ;
}