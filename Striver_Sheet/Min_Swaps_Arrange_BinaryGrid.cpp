#include <vector>
using namespace std;

class Solution {
public:
    int minSwaps(vector<vector<int> >& grid) {
        int n = grid.size();
        
        //  Count trailing zeros in each row
        vector<int> endZeros(n, 0);
        
        for(int i = 0; i < n; i++) {
            int count = 0;
            for(int j = n - 1; j >= 0; j--) {
                if(grid[i][j] == 0)
                    count++;
                else
                    break;
            }
            endZeros[i] = count;
        }
        
        int steps = 0;
        
     
        for(int i = 0; i < n; i++) {
            int need = n - i - 1;  
            int j = i;
            
            // Find a row that satisfies requirement
            while(j < n && endZeros[j] < need) {
                j++;
            }
            
            // If no valid row found
            if(j == n)
                return -1;
            
            // Bring that row to position i using adjacent swaps
            while(j > i) {
                swap(endZeros[j], endZeros[j - 1]);
                j--;
                steps++;
            }
        }
        
        return steps;
    }
};