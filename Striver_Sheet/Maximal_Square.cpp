#include<iostream>
#include<vector>
using namespace std ;
class Solution {
public:
    
    int solve(vector<vector<char> >& matrix, int i, int j, int row, int col, int &maxi) {
        
        // Base Case
        if(i >= row || j >= col)
            return 0;
        
        // Recursive calls
        int right = solve(matrix, i, j+1, row, col, maxi);
        int down = solve(matrix, i+1, j, row, col, maxi);
        int diagonal = solve(matrix, i+1, j+1, row, col, maxi);
        
        int ans = 0;
        
        if(matrix[i][j] == '1') {
            ans = 1 + min(right, min(down, diagonal));
            maxi = max(maxi, ans);  
        }
        
        return ans;
    }
    
    int maximalSquare(vector<vector<char> >& matrix) {
        
        int row = matrix.size();
        if(row == 0) return 0;
        
        int col = matrix[0].size();
        int maxi = 0;
        
        solve(matrix, 0, 0, row, col, maxi);
        
        return maxi * maxi;   
    }
};