#include <iostream>
using namespace std;
class Solution{
    public :
    int climbStairs(int n){
        //  Base Case 
        if( n == 1){
            return 1 ;
        }
        if( n == 2){
            return 2 ;
        }
        //  Recursive Call
        int ans = climbStairs(n - 1) + climbStairs(n - 2) ;
        return ans ;
    }
} ;
int main(){
    return 0 ;
}
