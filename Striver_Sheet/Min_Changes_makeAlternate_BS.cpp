#include<iostream>
using namespace std ;
class Solution {
public:
    int minOperations(string s) {
        int n = s.size() ;
        int st_with_0 = 0 ;
        int st_with_1 = 0 ;
        for(int i = 0 ; i < n ; i++){
            if(i % 2 == 0){
                // Even 
                if(s[i] == '0'){
                    st_with_1++;
                }
                else{
                    st_with_0++ ;
                }
            }
            else{
                // Odd
                if(s[i] == '0'){
                    st_with_0++;
                }
                else{
                    st_with_1++ ;
                }
            }
        }
       return min(st_with_0 , st_with_1) ;
        
    }
};
// 10101110101010.......
// 010101010101.....
// 101010101010.....
//  10
// 10 , 01
// 101010101... -> even pos : 1 , odd pos : 0
// 010101010... -> even pos : 0 , odd pos : 1
// 0100
// if(s[i] == s[i-1]) op = 1;
// o/p : 0101
// 0100
// 1010 , op = 3 ;