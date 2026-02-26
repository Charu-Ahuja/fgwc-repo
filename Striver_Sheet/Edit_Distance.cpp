#include <iostream>
using namespace std;

class Solution {
public:

    int solve(string &word1, string &word2, int i, int j) {
        
        // Base Case 1: word1 finished
        if (i == word1.length()) {
            return word2.length() - j;  
        }

        // Base Case 2: word2 finished
        if (j == word2.length()) {
            return word1.length() - i;   
        }

        // If characters match
        if (word1[i] == word2[j]) {
            return solve(word1, word2, i + 1, j + 1);
        }
        else {
            // Insert
            int option1 = 1 + solve(word1, word2, i, j + 1);

            // Delete
            int option2 = 1 + solve(word1, word2, i + 1, j);

            // Replace
            int option3 = 1 + solve(word1, word2, i + 1, j + 1);

            return min(option1, min(option2, option3));
        }
    }

    int minDistance(string word1, string word2) {
        return solve(word1, word2, 0, 0);
    }
};