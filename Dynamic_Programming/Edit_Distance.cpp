#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int solve(string &word1, string &word2, int i, int j, vector<vector<int> > &dp)
    {
        // Base Case
        if (i >= word1.length())
        {
            return word2.length() - j;
        }
        if (j >= word2.length())
        {
            return word1.length() - i;
        }
        if (dp[i][j] != -1)
        {
            return dp[i][j];
        }
        // If both the characters in string1 & 2 are equal then check their respective next characters
        if (word1[i] == word2[j])
        {
            dp[i][j] = solve(word1, word2, i + 1, j + 1, dp);
            return dp[i][j];
        }
        // if they are unequal then return the min of all these operations
        if (word1[i] != word2[j])
        {
            int insert = 1 + solve(word1, word2, i, j + 1, dp);
            int remove = 1 + solve(word1, word2, i + 1, j, dp);
            int replace = 1 + solve(word1, word2, i + 1, j + 1, dp);
            dp[i][j] = min(insert , min(remove , replace)) ;
        }
        return dp[i][j];
    }
    int minDistance(string word1, string word2)
    {
        int m = word1.length();
        int n = word2.length();
        int i = 0;
        int j = 0;
        vector<vector<int> > dp(word1.length(), vector<int>(word2.length(), -1));
        return solve(word1, word2, i, j, dp);
    }
};
int main()
{
    return 0;
}