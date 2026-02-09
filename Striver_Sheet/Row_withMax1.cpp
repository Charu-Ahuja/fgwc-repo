#include<iostream>
#include<vector>
using namespace std ;
class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int> >& mat) {
        int one_count = INT_MIN;
        int m = mat.size();
        int n = mat[0].size();
        int rowNo = -1;

        vector<int> ans;

        for(int i = 0; i < m; i++){
            int count = 0;
            for(int j = 0; j < n; j++){
                if(mat[i][j] == 1){
                    count++;
                }
            }
            if(count > one_count){
                one_count = count;
                rowNo = i;
            }
        }

        ans.push_back(rowNo);
        ans.push_back(one_count);

        return ans;
    }
};
int main(){
    return 0 ;
}
