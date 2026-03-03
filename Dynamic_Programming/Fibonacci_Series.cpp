#include <iostream>
#include <vector>
using namespace std;
int solveUsingRecur(int n)
{
    // Base Case
    if (n == 0 || n == 1)
    {
        return n;
    }
    // Recursive Call
    int ans = solveUsingRecur(n - 1) + solveUsingRecur(n - 2);
    return ans;
}
// This is Top - Down DP also called Recursion + Memoization , Here Function call ka overhead + space bhi utilise ho raha hai extra due to recursive calls
int solveUsingMemo(int n, vector<int> &dp)
{
    // Base Case
    if (n == 0 || n == 1)
    {
        return n;
    }
    // Step 3 :-> If answer already exists in dp array then return that
    if (dp[n] != -1)
    {
        return dp[n];
    }
    //  Step 2 :-> Store the answers of subproblems in DP Array
    dp[n] = solveUsingMemo(n - 1, dp) + solveUsingMemo(n - 2, dp);
    return dp[n];
}
// This is called Bottom - Up DP or Tabulation Method or Iterative Approach which eliminates the function call overhead and minimize space usage
int solveUsingTabulation(int n)
{
    // Step 1 : Create the DP Array
    vector<int> dp(n + 1, -1);
    // Step 2 : Analyze Base Case and fill the initial values of the DP Array
    dp[0] = 0;
    dp[1] = 1;
    if (n == 0)
    {
        return 0;
    }
    // Step 3 : Fill the Remaining Values of Dp Array using Recursive Relation
    //  dp array ka size -> n + 1
    // We have already filled first 2 terms
    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    // return ans
    return dp[n];
}
// Now lets solve Fibonacci Series using Space Optimization
int Optimization(int n)
{
    int ans;
    int prev = 0;
    int curr = 1;
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    for (int i = 2; i <= n; i++)
    {
        ans = curr + prev;
        prev = curr;
        curr = ans;
    }
    return ans;
}

int fib(int n)
{
    // int ans = solveUsingRecur(n);
    // return ans;
    // Step 1 :-> Create a DP Array
    // vector<int> dp(n + 1, -1);
    // return solveUsingMemo(n, dp);

    // int ans = solveUsingTabulation(n);
    // return ans;

    int ans = Optimization(n);
    return ans;
}
int main()
{
    return 0;
}